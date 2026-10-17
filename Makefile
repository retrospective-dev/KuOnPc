# Kuon (PAL, SLES-53411) decompilation build
#
#   make setup   - extract the code image from original/SLES_534.11 (needed once)
#   make split   - regenerate asm/ from the original (overwrites asm/)
#   make         - build and verify the image is byte-identical to retail
#
# Game functions live one-per-file. If src/game/<func>.c exists it is compiled with
# Metrowerks CodeWarrior and linked in place of asm/game/<func>.s.

BASENAME := SLES_534.11
BUILD    := build
CROSS    ?= mips-linux-gnu-

AS      := $(CROSS)as
LD      := $(CROSS)ld
OBJCOPY := $(CROSS)objcopy
PYTHON  := $(if $(wildcard .venv/bin/python),.venv/bin/python,python3)

# Compiler identified from the retail binary: CodeWarrior PS2 3.0.x ("MW MIPS C Compiler 2.4.1.01")
MWCC_VER ?= mwcps2-3.0.3-020716
WIBO     := tools/wibo
MWCC     := $(WIBO) tools/compilers/$(MWCC_VER)/mwccps2.exe
CFLAGS   := -c -O4 -relax_pointers -nostdinc -Iinclude

ASFLAGS := -EL -march=r5900 -mabi=eabi -G0 -no-pad-sections -Iinclude
LDFLAGS := -EL -T $(BUILD)/kuon.ld -T undefined_syms_auto.txt -T undefined_funcs_auto.txt \
           -T linker_script_extra.ld --no-check-sections -Map $(BUILD)/$(BASENAME).map

S_FILES    := asm/sdk.s $(wildcard asm/data/*.s) $(wildcard asm/game/*.s)
C_FILES    := $(wildcard src/game/*.c)
GAME_ASM_O := $(patsubst %.s,$(BUILD)/%.o,$(S_FILES))
C_O        := $(patsubst %.c,$(BUILD)/%.o,$(C_FILES))

ELF := $(BUILD)/$(BASENAME).elf
ROM := $(BUILD)/$(BASENAME).rom
EXE := $(BUILD)/$(BASENAME)

.PHONY: all check clean split setup progress

all: check $(EXE)

$(BUILD)/%.o: %.s
	@mkdir -p $(dir $@)
	@$(AS) $(ASFLAGS) -o $@ $<

# tools/mwcc_pad.py emulates the original compiler's branch-target alignment (see CONTRIBUTING.md)
$(BUILD)/src/%.o: src/%.c tools/mwcc_pad.py
	@mkdir -p $(dir $@)
	$(MWCC) $(CFLAGS) $< -o $@
	@$(PYTHON) tools/mwcc_pad.py $@ $@ $<
	@$(PYTHON) tools/check_obj.py $@

$(BUILD)/kuon.ld: $(BASENAME).ld game_order.txt $(C_FILES) tools/gen_ld.py
	@$(PYTHON) tools/gen_ld.py

$(ELF): $(GAME_ASM_O) $(C_O) $(BUILD)/kuon.ld
	@$(LD) $(LDFLAGS) -o $@

$(ROM): $(ELF)
	@$(OBJCOPY) -O binary --gap-fill=0x00 $< $@

# Bootable executable: the rebuilt image inside the retail ELF headers
$(EXE): $(ROM) tools/make_exe.py
	@$(PYTHON) tools/make_exe.py

check: $(ROM)
	@sha1sum -c checksum.sha1 && echo "OK: build matches retail SLES_534.11"

progress:
	@$(PYTHON) tools/progress.py

setup:
	$(OBJCOPY) -O binary --gap-fill=0x00 original/$(BASENAME) $(BASENAME).rom

split:
	$(PYTHON) -m splat split kuon.yaml
	$(PYTHON) tools/split_game.py
	rm -f asm/game.s

clean:
	rm -rf $(BUILD)
