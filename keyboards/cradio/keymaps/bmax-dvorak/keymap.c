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

#include QMK_KEYBOARD_H

#include "muse.h"
#include "keycodes.h"

/* Base layer 0 layout uses home row mods. See the following guide for details:
 * https://precondition.github.io/home-row-mods
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(// QWERTY
               // 1
               GUI_T(KC_QUOT), LALT_T(KC_COMM), KC_DOT, KC_P, KC_Y,
               KC_F, KC_G, KC_C, KC_R, RALT_T(KC_L),
               // 2
               RSFT_T(KC_A), KC_O, KC_E, KC_U, KC_I,
               KC_D, KC_H, KC_T, KC_N, LSFT_T(KC_S),
               // 3

               RCTL_T(KC_SCLN), LALT_T(KC_Q), KC_J, KC_K, KC_X,
               KC_B, KC_M, KC_W, LALT_T(KC_V), GUI_T(KC_Z),
               // 4
               MO(3), LALT_T(KC_SPC),
               MO(2), LCTL_T(KC_ENT)),

	[1] = LAYOUT( //  colmaksu
            KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN,
            RCTL_T(KC_A), KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, RCTL_T(KC_O),
            RALT_T(KC_Z), KC_X, KC_C, RGUI_T(KC_V), KC_B, KC_K, RGUI_T(KC_M), KC_COMM, KC_DOT, LALT_T(KC_SLSH),
            MO(3), SHIFT_SPACE, MO(2), KC_ENT),
	[2] = LAYOUT( //  Number/symbol layer
            KC_LT, KC_LBRC, KC_LPRN, KC_LCBR, KC_TAB, KC_ESC, KC_7, KC_8, KC_9, KC_RCTL,
            KC_GT, KC_RBRC, KC_RPRN, KC_RCBR, KC_SLASH, KC_QUES, KC_4, KC_5, KC_6, KC_BSPC,
            KC_MINS, KC_EQL, KC_UNDS, KC_PLUS, KC_GRV, KC_0, KC_1, KC_2, KC_3, KC_BSLS,
            KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT( // Nav layer

                // row 1
            LALT(KC_F1), KC_RSFT, KC_RSFT, OSM(MOD_LSFT|MOD_LGUI), LALT(KC_F12),
            KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS,

            // row 2
            KC_LCTL, KC_RSFT, KC_LALT, KC_LGUI, KC_ESC,
            KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC,

            // row 3
            LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B),
            RGUI(KC_GRV), RCTL(KC_M),  RCTL(KC_QUES),RCTL(KC_SLASH), KC_DEL,


            KC_TRNS, KC_TRNS, MO(3), KC_TRNS),
	[4] = LAYOUT( // Function layer
            KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
            KC_MPLY, KC_MUTE, KC_VOLD, KC_VOLU, KC_G, KC_H, SGUI(KC_3), SGUI(KC_4), KC_F11, KC_F12,
            KC_MPRV, KC_MNXT, KC_BRMD, KC_BRMU, XXXXXXX, KC_N, DF(0), DF(1), KC_DOT, C(G(KC_Q)),
            _______, _______, KC_LCTL, _______),
	[_MOUSE] = LAYOUT( // Function layer
            XXXXXXX, RCTL(KC_W), KC_MS_U, XXXXXXX, RCTL(KC_T),              KC_ACL0, KC_WH_D, KC_MS_U, KC_WH_U, KC_ACL2,
            RCTL(KC_A), RSFT(KC_TAB), KC_LALT, KC_TAB, RSFT(KC_TAB),              KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL0,
            XXXXXXX, RCTL(KC_X), RCTL(KC_C), RCTL(KC_V), KC_ESC,     KC_BTN3, KC_BTN2, XXXXXXX, XXXXXXX, KC_ACL1,
                                       KC_ACL1, KC_ACL2,              TO(0), KC_BTN1)
};
