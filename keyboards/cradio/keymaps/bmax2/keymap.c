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
#define CASE_MOD_TAP(foo, bar)                                                 \
  case foo(bar):                                                               \
    if (record->tap.count && record->event.pressed) {                          \
      tap_code16(bar);                                                         \
      return false;                                                            \
    }                                                                          \
    break

#define handle_lhmr(one, two, three, four, five) \
    CASE_MOD_TAP(LCTL_T, one); \
    CASE_MOD_TAP(LSFT_T, two); \
    CASE_MOD_TAP(LALT_T, three); \
    CASE_MOD_TAP(LGUI_T, four)

#define handle_rhmr(one, two, three, four, five) \
    CASE_MOD_TAP(RCTL_T, four); \
    CASE_MOD_TAP(RSFT_T, five); \
    CASE_MOD_TAP(RALT_T, three); \
    CASE_MOD_TAP(RGUI_T, two)

__attribute__((weak)) bool process_record_user(uint16_t keycode,
                                               keyrecord_t* record) {
  switch (keycode) {
        handle_lhmr(SHFT_TAB, KC_GRV, S(KC_GRV),KC_UNDS, KC_SLASH);
        handle_rhmr(KC_BSLASH,   KC_UNDS, KC_EQL, KC_LBRC, KC_RBRC);
  }
  return true;
}

#define bake_duel_combo(cname, key1, key2) \
  const uint16_t PROGMEM cname[] = {key1, key2, COMBO_END}

bake_duel_combo(comb_pu,    KC_P,               LGUI_T(KC_U));
bake_duel_combo(comb_gh,    KC_G,                RGUI_T(KC_H));
bake_duel_combo(comb_quot_a, LT(_NAV, KC_QUOT),  LSFT_T(KC_A));

combo_t key_combos[] = {
    COMBO(comb_gh,      KC_ENT),
    COMBO(comb_pu,      KC_ESC),
    COMBO(comb_quot_a,   KC_TAB),
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
