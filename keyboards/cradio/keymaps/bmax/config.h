/* Copyright 2018-2021
 * ENDO Katsuhiro <ka2hiro@curlybracket.co.jp>
 * David Philip Barr <@davidphilipbarr>
 * Pierre Chevalier <pierrechevalier83@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define MK_KINETIC_SPEED

// Defaults for usable home row mods
#define TAPPING_TERM 230
#define IGNORE_MOD_TAP_INTERRUPT

// Improved mouse key defaults
// Delay between pressing a key and cursor movement
#define MOUSEKEY_DELAY 0
// Time between cursor movements in milliseconds
#define MOUSEKEY_INTERVAL 10
// Step size for acceleration
#define MOUSEKEY_MOVE_DELTA 8
#define MOUSEKEY_MAX_SPEED 12
#define MOUSEKEY_TIME_TO_MAX 200
#define MOUSEKEY_WHEEL_DELAY 16
#define MOUSEKEY_WHEEL_INTERVAL 30
#define MOUSEKEY_WHEEL_MAX_SPEED 10
#define MOUSEKEY_WHEEL_TIME_TO_MAX 95

#define COMBO_COUNT 12
#define COMBO_ONLY_FROM_LAYER 0

#define TAPPING_FORCE_HOLD

#define SHIFT_SPACE RSFT_T(KC_SPC)
#define ALT_BSPC LALT(KC_BSPC)
#define PERMISSIVE_HOLD

#if !defined(__ASSEMBLER__)
enum bmax_layers {
    _QWERTY,
    _COLEMAK,
    _NUMBER,
    _NAV,
    _FN,
    _MOUSE
};

#endif

