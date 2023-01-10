/* Copyright 2015-2021 Jack Humbert
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
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD

// Improved mouse key defaults
// Delay between pressing a key and cursor movement
#define MOUSEKEY_DELAY 0
// Time between cursor movements in milliseconds
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 2
// Step size for acceleration

#undef MOUSEKEY_MOVE_DELTA
#undef MOUSEKEY_MAX_SPEED
#undef MOUSEKEY_TIME_TO_MAX

#define MOUSEKEY_MOVE_DELTA 0
#define MOUSEKEY_MAX_SPEED 15
#define MOUSEKEY_TIME_TO_MAX 0

//#define MOUSEKEY_TIME_TO_MAX 200
#define MOUSEKEY_DECELERATED_SPEED 12

// undefine
#undef MOUSEKEY_WHEEL_DELAY
#undef MOUSEKEY_WHEEL_INTERVAL
#undef MOUSEKEY_WHEEL_MAX_SPEED
#undef MOUSEKEY_WHEEL_TIME_TO_MAX


#define MOUSEKEY_WHEEL_DELAY 16
#define MOUSEKEY_WHEEL_INTERVAL 30
#define MOUSEKEY_WHEEL_MAX_SPEED 10
#define MOUSEKEY_WHEEL_TIME_TO_MAX 95

#define COMBO_COUNT 13
#define COMBO_ONLY_FROM_LAYER 0



#define SHIFT_SPACE RSFT_T(KC_SPC)

#define CTL_SPACE RCTL_T(KC_SPC)
#define ALT_BSPC LALT(KC_BSPC)
//#define PERMISSIVE_HOLD

#define LAYER_STATE_8BIT

//#define TAPPING_TOGGLE 2
