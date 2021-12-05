/* Copyright 2015-2021 Jack Humbert
/ *
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

#include QMK_KEYBOARD_H
#include "muse.h"


enum planck_layers {
  _QWERTY,
  _NUM,
  _FN,
  _NAV,
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  PLOVER,
  BACKLIT,
  EXT_PLV,
  TEST
};

#define NUMBER LT(_NUM, KC_BSPC)
#define NAV_TAB LT(_NAV, KC_TAB)
#define BMAX_ENT_NAV LT(_NAV, KC_ENT)
#define VIM MO(_NAV)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_grid(
    KC_Q,         KC_W,          KC_E,         KC_R,           KC_T,            XXXXXXX, XXXXXXX,  KC_Y,   KC_U,          KC_I,         KC_O,         KC_P,
    RCTL_T(KC_A), RSFT_T(KC_S),  RALT_T(KC_D), RGUI_T(KC_F),   KC_G,            XXXXXXX, XXXXXXX,  KC_H,   RGUI_T(KC_J),  RALT_T(KC_K), RSFT_T(KC_L), RCTL_T(KC_SCLN),
    KC_Z,         KC_X,          KC_C,         KC_V,           KC_B,            KC_NO,   KC_NO,    KC_N,   KC_M,          KC_COMM,      KC_DOT,       KC_SLSH,
    KC_ESC,       XXXXXXX,       XXXXXXX,      NAV_TAB,        RSFT_T(KC_SPC),  XXXXXXX, XXXXXXX,  NUMBER, BMAX_ENT_NAV,  XXXXXXX,      XXXXXXX,      MO(_FN)
),

[_NUM] = LAYOUT_planck_grid(
    KC_1,             KC_2,             KC_3,             KC_4,              KC_5,     _______,  _______,  KC_6,     KC_7,            KC_8,             KC_9,             KC_0,
    RCTL_T(KC_GRV),   RSFT_T(KC_LBRC),  RALT_T(KC_LPRN),  RGUI_T(KC_LCBR),   XXXXXXX,  _______,  _______,  XXXXXXX,  RGUI_T(KC_RCBR), RALT_T(KC_RPRN),  RSFT_T(KC_RBRC),  KC_BSPC,
    RSFT_T(KC_MINS),  KC_EQL,           KC_UNDS,          KC_PLUS,           XXXXXXX,  _______,  _______,  KC_QUOT,  KC_DQUO,         KC_LT,            KC_GT,            RSFT_T(KC_BSLS),
    _______,          _______,          _______,          _______,           _______,  _______,  _______,  _______,  _______,         _______,          _______,          _______
),

[_NAV] = LAYOUT_planck_grid(
    LALT(KC_F1), LALT(KC_F1), KC_BTN1,    KC_BTN2,    LALT(KC_F12), KC_NO,  KC_NO,  KC_HOME, KC_PGUP,    KC_PGDN,  KC_END,  KC_BSPC,
    KC_LCTL,     KC_LSFT,     KC_LALT,    KC_LGUI,    KC_NO,        KC_NO,  KC_NO,  KC_LEFT, KC_DOWN,    KC_UP,    KC_RGHT, KC_NO,
    LGUI(KC_Z),  LGUI(KC_X),  LGUI(KC_C), LGUI(KC_V), LGUI(KC_B),   KC_NO,  KC_NO,  RGUI(KC_GRV), RCTL(KC_M), KC_NO,    KC_NO,   RGB_TOG,
    KC_ESC,      KC_NO,       KC_NO,      _______,    MO(_FN),      KC_NO,  KC_NO,  _______,  _______,    KC_LEFT,  KC_DOWN, MO(_FN)
),

[_FN] = LAYOUT_planck_grid(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,           KC_NO,  KC_NO,  KC_F6,   KC_F7,      KC_F8,      KC_F9,   KC_F10,
    KC_MPLY, KC_MUTE, KC_VOLD, KC_VOLU,          KC_G,            KC_NO,  KC_NO,  KC_H,    SGUI(KC_3), SGUI(KC_4), KC_F11,  KC_F12,
    KC_Q,   KC_X,    KC_BRMD, KC_BRMU,          RESET,            KC_NO,  KC_NO,  KC_N,    KC_M,       KC_COMM,    KC_DOT,  KC_SLSH,
    KC_ESC,  TEST,    KC_NO,   LT(_NAV, KC_TAB), RSFT_T(KC_SPC),  KC_NO,  KC_NO,  KC_LCTL, _______,    KC_LEFT,    KC_DOWN, MO(_FN)
)

};

const uint16_t PROGMEM test_combo1[] = {KC_N, KC_M, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(test_combo1, KC_BSPC),
};

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case NUMBER:
    case NAV_TAB:
    case RSFT_T(KC_SPC):
      return true;
    default:
      return false;
  }
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RALT_T(KC_LPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RGUI_T(KC_LCBR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LCBR); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RALT_T(KC_RPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RPRN); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RGUI_T(KC_RCBR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RCBR); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
    }



    return true;
}



