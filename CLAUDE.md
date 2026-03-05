# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

ZMK firmware configuration for a **Cradio/Sweep** split keyboard with **Nice Nano v2** (nRF52840) MCU. Dvorak base layout with Polish diacritic support. Connects via Bluetooth.

## Build Commands

Builds run in CI via GitHub Actions (`zmkfirmware/zmk-build-arm:stable` container). To build locally:

```bash
west init -l config
west update
west zephyr-export

# Left half
west build -s zmk/app -b nice_nano//zmk -- -DSHIELD=cradio_left -DZMK_CONFIG="$(pwd)/config"

# Right half (reset build dir first)
west build -s zmk/app -b nice_nano//zmk -- -DSHIELD=cradio_right -DZMK_CONFIG="$(pwd)/config" -p
```

Output: UF2 firmware files in `build/zephyr/zmk.uf2`.

## Architecture

All configuration lives in `config/`:

| File | Purpose |
|------|---------|
| `west.yml` | West manifest - pulls ZMK from `zmkfirmware/zmk` main branch |
| `cradio.keymap` | Keymap definition - layers, combos, macros, behaviors |
| `cradio.conf` | Kconfig - BT power, sleep timeout (30min), debounce (1ms/5ms) |
| `keymap_polish.h` | Polish Programmers key code definitions (diacritics, symbols) |

## Keymap Structure

**7 layers:** BASE (Dvorak), SYM (numbers+symbols), EXT (nav+modifiers), FNC (F-keys), SYM2 (rare symbols), ACCENT (Polish diacritics), SETTINGS (BT profiles, bootloader).

**Combos** activate layers via thumb key combinations (defined at top of `cradio.keymap`).

**Polish diacritics** use custom defines from `keymap_polish.h` - these map to HID codes for Polish Programmers (US QWERTY) layout. The `ACCENT` layer provides access to Polish characters (ą, ć, ę, ł, ń, ó, ś, ź, ż) via AltGr combos. Each diacritic is placed at the same position as its base letter in Dvorak.

## Key Conventions

- Board name uses Zephyr 4.x syntax: `nice_nano//zmk` (not `nice_nano_v2`)
- Shield names: `cradio_left` / `cradio_right`
- Polish key codes prefixed with `PL_` (e.g., `PL_AOGONEK` for ą)
- Behaviors use ZMK standard naming: `&kp`, `&mt`, `&sk`, `&sl`, `&trans`, `&none`
