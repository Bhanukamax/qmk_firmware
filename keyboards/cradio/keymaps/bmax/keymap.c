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

/* Base layer 0 layout uses home row mods. See the following guide for details:
 * https://precondition.github.io/home-row-mods
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(// QWERTY
            KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
            RCTL_T(KC_A), KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, RCTL_T(KC_SCLN),
            RALT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, LALT_T(KC_SLSH),
            MO(3), RSFT_T(KC_SPC), MO(2), KC_ENT),
	[1] = LAYOUT( //  colmak
            KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN,
            RCTL_T(KC_A), KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, RCTL_T(KC_O),
            RALT_T(KC_Z), KC_X, KC_C, RGUI_T(KC_V), KC_B, KC_K, RGUI_T(KC_M), KC_COMM, KC_DOT, LALT_T(KC_SLSH),
            MO(3), RSFT_T(KC_SPC), MO(2), KC_ENT),
	[2] = LAYOUT( //  Number/symbol layer
            KC_LT, KC_LBRC, KC_LPRN, KC_LCBR, KC_TAB, KC_RCTL, KC_7, KC_8, KC_9, KC_RGUI,
            RCTL_T(KC_GT), KC_RBRC, KC_RPRN, KC_RCBR, KC_QUOT, KC_DQUO, KC_4, KC_5, KC_6, KC_BSPC,
            KC_MINS, KC_EQL, KC_UNDS, KC_PLUS, KC_GRV, KC_0, KC_1, KC_2, KC_3, KC_BSLS,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT( // Nav layer
            LALT(KC_F1), KC_RSFT, KC_RSFT, OSM(MOD_LSFT|MOD_LGUI), LALT(KC_F12), KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS,
            KC_LCTL, KC_RSFT, KC_LALT, KC_LGUI, KC_ESC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC,
            LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B), RGUI(KC_GRV), RCTL(KC_M), KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_TRNS, MO(3), KC_TRNS),
	[4] = LAYOUT( // Function layer
            KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
            KC_MPLY, KC_MUTE, KC_VOLD, KC_VOLU, KC_G, KC_H, SGUI(KC_3), SGUI(KC_4), KC_F11, KC_F12,
            KC_MPRV, KC_MNXT, KC_BRMD, KC_BRMU, XXXXXXX, KC_N, DF(0), DF(1), KC_DOT, C(G(KC_Q)),
            _______, _______, KC_LCTL, _______)
};

