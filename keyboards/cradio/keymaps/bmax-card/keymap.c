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

/* Base layer 0 layout uses home row mods. See the following guide for details:
 * https://precondition.github.io/home-row-mods
 */

#define ALPHA1 0
#define ALPHA2 1
#define SYS1 2
#define SYM1 3
#define SYM2 4
#define NUM 5

#define XXX _______

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ALPHA1] = LAYOUT_split_3x5_2(
	//╭──────────┬──────────┬──────────┬──────────╮                         ╭──────────┬──────────┬──────────┬──────────╮
	/**/ XXX,           KC_Z, KC_L, KC_P, KC_Y,                                          KC_F, KC_G, KC_C, KC_R, XXX,
	//├          ┼──────────┼──────────┼──────────┤                         ├──────────┼──────────┼──────────┼          ┤
	/**/ LT(NUM, KC_A), CTL_T(KC_O), ALT_T(KC_E), GUI_T(KC_U),    KC_I, KC_D, GUI_T(KC_H),   ALT_T(KC_T),  CTL_T(KC_N), LT(NUM, KC_S),
	//├          ┼──────────┼──────────┼──────────┤                         ├──────────┼──────────┼──────────┼          ┤
	/**/ XXX,           LT(SYM1, KC_Q), LT(SYM2, KC_J), LT(SYS1, KC_K),      KC_X, KC_B,        LT(SYS1, KC_M), LT(SYM2, KC_W), LT(SYM1, KC_V),  XXX,
	//╰──────────┴──────────┴──────────┼──────────┼──────────╮   ╭──────────┼──────────┼──────────┴──────────┴──────────╯
	XXX, SFT_T(KC_SPC),      OSL(ALPHA2),  KC_ESC
	//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯

	),
    [ALPHA2] = LAYOUT_split_3x5_2(
	XXX,  XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX,
	//╭──────────┬──────────┬──────────┬──────────╮                         ╭──────────┬──────────┬──────────┬──────────╮
	/**/    XXX,   CTL_T(KC_Y),  ALT_T(KC_F), GUI_T(KC_B),    XXX, XXX,     GUI_T(KC_M),   ALT_T(KC_W),  CTL_T(KC_V), XXX,
	//├          ┼──────────┼──────────┼──────────┤                         ├──────────┼──────────┼──────────┼          ┤
	/**/    XXX,      KC_J,         KC_K,          KC_X,      XXX, XXX,     KC_G,          KC_C,        KC_R,     XXX,
	//╰──────────┴──────────┴──────────┼──────────┼──────────╮   ╭──────────┼──────────┼──────────┴──────────┴──────────╯
		XXX,  XXX, XXX, XXX
	//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯

	),
    [SYS1] = LAYOUT_split_3x5_2(
	XXX,  XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX,
	//╭──────────┬──────────┬──────────┬──────────╮                         ╭──────────┬──────────┬──────────┬──────────╮
	/**/ KC_HOME,   KC_LCTL,  KC_LALT, KC_LGUI,             XXX, XXX,        KC_ENTER,   KC_UP,     KC_BSPC,  KC_END,
	//├          ┼──────────┼──────────┼──────────┤                         ├──────────┼──────────┼──────────┼          ┤
	/**/ KC_HOME,   KC_TAB,  KC_PGUP,  KC_PGDN,            XXX, XXX,        KC_LEFT,        KC_DOWN,  KC_RIGHT, KC_END,
	//╰──────────┴──────────┴──────────┼──────────┼──────────╮   ╭──────────┼──────────┼──────────┴──────────┴──────────╯
		XXX,  XXX, XXX, XXX
	//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯

	),
    [NUM] = LAYOUT_split_3x5_2(
	XXX,  XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX,
	//╭──────────┬──────────┬──────────┬──────────╮                         ╭──────────┬──────────┬──────────┬──────────╮
	/**/   KC_SCLN,    KC_1,        KC_2,     KC_3,            XXX, XXX,          KC_6,        KC_7,        KC_8,      S(KC_SCLN),
	//├          ┼──────────┼──────────┼──────────┤                         ├──────────┼──────────┼──────────┼          ┤
	/**/   KC_SCLN,    KC_COMM,     KC_4,     KC_5,            XXX, XXX,          KC_9,        KC_0,        KC_DOT,    S(KC_SCLN),
	//╰──────────┴──────────┴──────────┼──────────┼──────────╮   ╭──────────┼──────────┼──────────┴──────────┴──────────╯
	/**/                                 	XXX,  XXX, XXX, XXX
	//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯

	),
    [SYM1] = LAYOUT_split_3x5_2(
	XXX,  XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX,
	//╭──────────┬──────────┬──────────┬──────────╮                         ╭──────────┬──────────┬──────────┬──────────╮
	/**/ S(KC_COMM),    S(KC_1),    S(KC_2),   S(KC_3),            XXX, XXX,       S(KC_6),    S(KC_7),   S(KC_8), S(KC_DOT),
	//├          ┼──────────┼──────────┼──────────┤                         ├──────────┼──────────┼──────────┼          ┤
	/**/ S(KC_COMM),    KC_QUOT,        S(KC_4),   S(KC_5),            XXX, XXX,       S(KC_9),    S(KC_0),   S(KC_QUOT),    S(KC_DOT),
	//╰──────────┴──────────┴──────────┼──────────┼──────────╮   ╭──────────┼──────────┼──────────┴──────────┴──────────╯
	/**/                                 	XXX,  XXX, XXX, XXX
	//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯
	),
    [SYM2] = LAYOUT_split_3x5_2(
	XXX,  XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX,
	//╭──────────┬──────────┬──────────┬──────────╮                         ╭──────────┬──────────┬──────────┬──────────╮
	/**/   KC_GRV,    KC_EQL,    KC_MINUS,   KC_SLASH,            XXX, XXX,      KC_BSLS,  KC_LBRC,   KC_RBRC,   XXX,
	//├          ┼──────────┼──────────┼──────────┤                         ├──────────┼──────────┼──────────┼          ┤
	/**/   KC_GRV,    KC_PLUS,   KC_UNDS,   S(KC_SLASH),            XXX, XXX,      KC_PIPE,    S(KC_LBRC),  S(KC_RBRC),       S(KC_GRV),
	//╰──────────┴──────────┴──────────┼──────────┼──────────╮   ╭──────────┼──────────┼──────────┴──────────┴──────────╯
	/**/                                 	XXX,  XXX, XXX, XXX
	//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯

	)



};
