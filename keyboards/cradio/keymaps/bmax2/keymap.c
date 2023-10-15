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
const uint16_t PROGMEM test_combo1[] = {KC_A, KC_B, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END};
combo_t key_combos[] = {
    COMBO(test_combo1, KC_ESC),
    COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DVORAK] = LAYOUT_bmax_wrapper( // Dvorak

        //┌─────────┬─────────┬─────────┬─────────┐                 ┌─────────┬─────────┬─────────┬─────────┐
        ____DVORAK_L1____, ____DVORAK_R1____,
        //├─────────┼─────────┼─────────┼────────┤                 ├─────────┼─────────┼─────────┼─────────┤
        __DVORAK_L2_SWEEP, ____DVORAK_R2____,
        //├─────────┼─────────┼─────────┼────────┤                 ├─────────┼─────────┼─────────┼─────────┤
        ____DVORAK_L3____, ____DVORAK_R3____,
        //└─────────┴─────────┴─────┬───┴─────┬───┼─────────┐     ┌─┴───────┬─┼─────────┴─────────┴─────────┘
        /**/ __DVORAK_MOD_L__, __DVORAK_MOD_R__
        //                          └─────────┘   └─────────┘     └─────────┘ └─────────┘
        ),
    [_NUM] = LAYOUT_bmax_wrapper(
        // test
        ____NUM_L1____, ____NUM_R1____,
        //
        ____NUM_L2____, ____NUM_R2____,
        //
        ____NUM_L3____, ____NUM_R3____,
        //
        KC_ESC, _______, _______, _______
        //                          └─────────┘   └─────────┘     └─────────┘ └─────────┘
        ),
    [_NAV] = LAYOUT_bmax_wrapper( // Nav layer
        ____NAV_L1____, ____NAV_R1____,
        //
        ____NAV_L2____, ____NAV_R2____,
        //
        ____NAV_L3____, ____NAV_R3____,
        //
        KC_TRNS, KC_TRNS, KC_BSPC, MO(_FN)),
    [_FN] = LAYOUT_bmax_wrapper( // Nav layer
        ____FN_L1____, ____FN_R1____,
        //
        ____FN_L2____, ____FN_R2____,
        //
        ____FN_L3____, ____FN_R3____,
        //
        KC_TRNS, KC_TRNS, KC_BSPC, MO(_FN)),
    [_GAME] = LAYOUT_bmax_wrapper( // Nav layer
                                  //
        ____GAME_L1____, ____GAME_R1____,
        //
        ____GAME_L2____, ____GAME_R2____,
        //
        ____GAME_L3____, ____GAME_R3____,
        //
        /**/ __GAME_MOD_L__, __GAME_MOD_R__
                                   ),
   [_MUS] = LAYOUT_bmax_wrapper( // Nav layer
        ____MUS_L1____, ____MUS_R1____,
        //
        ____MUS_L2____, ____MUS_R2____,
        //
        ____MUS_L3____, ____MUS_R3____,
        //
        KC_TRNS, KC_TRNS, KC_BSPC, MO(_FN))
};
