#pragma once

#define MK_KINETIC_SPEED

// Defaults for usable home row mods
#define TAPPING_TERM 250
#define IGNORE_MOD_TAP_INTERRUPT

// Improved mouse key defaults
// Delay between pressing a key and cursor movement
#define MOUSEKEY_DELAY 5
// Time between cursor movements in milliseconds
#define MOUSEKEY_INTERVAL 16
// Step size for acceleration
#define MOUSEKEY_MOVE_DELTA 1
#define MOUSEKEY_MAX_SPEED 22

//#define MOUSEKEY_TIME_TO_MAX 200
#define MOUSEKEY_DECELERATED_SPEED 12

#define MOUSEKEY_WHEEL_DELAY 16
#define MOUSEKEY_WHEEL_INTERVAL 30
#define MOUSEKEY_WHEEL_MAX_SPEED 10
#define MOUSEKEY_WHEEL_TIME_TO_MAX 95

#define COMBO_COUNT 12
#define COMBO_ONLY_FROM_LAYER 0

#define TAPPING_FORCE_HOLD

#define SHIFT_SPACE RSFT_T(KC_SPC)

#define CTL_SPACE RCTL_T(KC_SPC)
#define ALT_BSPC LALT(KC_BSPC)
//#define PERMISSIVE_HOLD

#define LAYER_STATE_8BIT
