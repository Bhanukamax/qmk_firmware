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

#include QMK_KEYBOARD_H
#include "muse.h"

#define XX _______
#define __ XX, XX
#define ___ XX, XX, XX


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

bool lctl_o_held = false;
__attribute__((weak)) bool process_record_user(uint16_t keycode,
                                               keyrecord_t* record) {
    switch (keycode) {
        handle_lhmr(SHFT_TAB, KC_GRV, S(KC_GRV),KC_UNDS, KC_SLASH);
        handle_rhmr(KC_BSLASH,   KC_UNDS, KC_EQL, KC_LBRC, KC_RBRC);
      return false; // Skip all further processing of this key
  }
  return true;
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_NUM, KC_SPC):
        case LT(_NAV, KC_BSPC):
        case LCTL_T(KC_O):
            return 0;
        default:
            return QUICK_TAP_TERM;
    }
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

#define middle_mid_bmax(\
    a1,a2,a3,a4, \
    b1,b2,b3,b4, \
    c1,c2,c3,c4 \
                        )\
    a1,a2,a3,a4, \
    b1,b2,b3,b4, \
    c1,c2,c3,c4

#define middle_out_bmax(\
    a1,a2,a3,a4, \
    b1,b2,b3,b4, \
    c1,c2,c3,c4 \
                        )\
    a2,a1,a4,a3,\
    b2,b1,b4,b3,\
    c2,c1,c4,c3



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DVORAK] = LAYOUT_planck_grid_wrapper( // Dvorak
                                         middle_mid_bmax(
      ____DVORAK_L1____, XX,KC_BSPC , ____DVORAK_R1____, // KC_BSPC,
      ____DVORAK_L2____, XX,XX , ____DVORAK_R2____, // KC_ENT,
      ____DVORAK_L3____, XX,XX , ____DVORAK_R3____), // KC_SLASH,
      RGB_TOG,KC_DOWN, KC_UP, __DVORAK_MOD_L__, KC_SPC, KC_SPC,  __DVORAK_MOD_R__, KC_LEFT, KC_RIGHT, MO(_MUS) //, XX
      // RGB_TOG,RGB_MOD, MO(_MUS), __DVORAK_MOD_L__, KC_LSFT, KC_LSFT,  __DVORAK_MOD_R__, MO(7), RGB_SAI, RGB_SAD //, XX
      // RGB_TOG,RGB_MOD, KC_LGUI, __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, KC_LALT, RGB_SAI, RGB_SAD
                                          ),
  [_GAME] = LAYOUT_planck_grid_wrapper( // Dvorak
      ____GAME_L1____, XX,KC_PRINT_SCREEN , ____GAME_R1____, // KC_BSPC,
      ____GAME_L2____, XX,XX , ____GAME_R2____, // KC_ENT,
      ____GAME_L3____, XX,XX , ____GAME_R3____, // KC_SLASH,
      RGB_TOG,RGB_MOD, KC_LGUI, __GAME_MOD_L__, KC_LSFT, KC_LSFT,  __GAME_MOD_R__, MO(7), KC_RALT, RGB_SAD //, XX
      // RGB_TOG,RGB_MOD, MO(_MUS), __DVORAK_MOD_L__, KC_LSFT, KC_LSFT,  __DVORAK_MOD_R__, MO(7), RGB_SAI, RGB_SAD //, XX
      // RGB_TOG,RGB_MOD, KC_LGUI, __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, KC_LALT, RGB_SAI, RGB_SAD
                                          ),
    // [_GAME] = LAYOUT_bmax_wrapper( // Nav layer
    //     ____GAME_L1____, ____GAME_R1____,
    //     //
    //     ____GAME_L2____, ____GAME_R2____,
    //     //
    //     ____GAME_L3____, ____GAME_R3____,
    //     //
    //     /**/ __GAME_MOD_L__, __GAME_MOD_R__
    //                                ),

  [7] = LAYOUT_planck_grid_wrapper( // Dvorak
____PLANCK_GROW_L___, __,
____PLANCK_GROW_R___,
                                          ____DVORAK_L2____,__, ____DVORAK_R2____,
                                          ____DVORAK_L3____, __, ____DVORAK_R3____,
                                          RGB_TOG,RGB_MOD, MO(_MUS), __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, RGB_HUD, RGB_SAI, RGB_SAD
                                          // RGB_TOG,RGB_MOD, RGB_HUI, __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, RGB_HUD, RGB_SAI, RGB_SAD
                                          ),

  [_NUM] = LAYOUT_planck_grid_wrapper(
                                      ____NUM_L1____, XX, XX,  ____NUM_R1____, // XX,
                                      ____NUM_L2____, XX, XX,  ____NUM_R2____, // XX,
                                      ____NUM_L3____, XX, XX,  ____NUM_R3____, // XX,
                                      ___, __NUM_MOD_L__ , XX, XX,  __NUM_MOD_R__, XX, RGB_VAI, RGB_VAD// , XX
                                      ),

  [_NAV] = LAYOUT_planck_grid_wrapper( // Nav layer
                                       ____NAV_L1____, XX, XX, ____NAV_R1____, // XX,
                                       ____NAV_L2____, XX, XX, ____NAV_R2____, // XX,
                                       ____NAV_L3____, XX, XX, ____NAV_R3____, // XX,
                                      ___, __NAV_MOD_L__ , XX, XX,  __NAV_MOD_R__, XX, RGB_VAI, RGB_VAD//  ,XX
                                      ),
  [_MUS] = LAYOUT_planck_grid_wrapper( // Mouse layer
                                       ____MUS_L1____, XX,XX, ____MUS_R1____, //  XX,
                                       ____MUS_L2____, XX,XX, ____MUS_R2____, //  XX,
                                       ____MUS_L3____, XX,XX, ____MUS_R3____, //  XX,
                                       ___, XX, XX, __, XX, XX, ___),

  [_FN] = LAYOUT_planck_grid_wrapper( // Nav layer
                                      ____FN_L1____, XX, XX, ____FN_R1____, // XX,
                                      ____FN_L2____, XX, XX, ____FN_R2____, // XX,
                                      ____FN_L3____, XX, XX, ____FN_R3____, // XX,
                                      QK_BOOT, QK_RBT, QK_MAKE, KC_TRNS, KC_TRNS, XX, KC_BSPC, MO(_FN), ___, XX)
  // [_PLANCK_NAV] = LAYOUT_planck_grid_wrapper( // Dvorak
  //                                         ___DVORAK_L1____,__,____DVORAK_R1____,
  //                                         ____DVORAK_L2____,__, ____DVORAK_R2____,
  //                                         ____DVORAK_L3____, __, ____DVORAK_R3____,
  //                                         RGB_TOG,RGB_MOD, MO(_MUS), __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, RGB_HUD, RGB_SAI, RGB_SAD
  //                                         // RGB_TOG,RGB_MOD, RGB_HUI, __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, RGB_HUD, RGB_SAI, RGB_SAD
  //                                         )
};
