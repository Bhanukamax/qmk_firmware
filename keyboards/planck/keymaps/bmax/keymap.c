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



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DVORAK] = LAYOUT_planck_grid_wrapper( // Dvorak
                                          ____DVORAK_L1____, XX, ____DVORAK_R1____, KC_BSPC,
                                          ____DVORAK_L2____, XX, ____DVORAK_R2____, KC_ENT,
                                          ____DVORAK_L3____, XX, ____DVORAK_R3____, KC_RSFT,
                                          RGB_TOG,RGB_MOD, MO(_MUS), __DVORAK_MOD_L__, __DVORAK_MOD_R__p, MO(7), RGB_SAI, RGB_SAD, XX
                                          // RGB_TOG,RGB_MOD, RGB_HUI, __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, RGB_HUD, RGB_SAI, RGB_SAD
                                          ),

  [7] = LAYOUT_planck_grid_wrapper( // Dvorak
____PLANCK_GROW_L___, __,
____PLANCK_GROW_R___,
                                          ____DVORAK_L2____,__, ____DVORAK_R2____,
                                          ____DVORAK_L3____, __, ____DVORAK_R3____,
                                          RGB_TOG,RGB_MOD, MO(_MUS), __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, RGB_HUD, RGB_SAI, RGB_SAD
                                          // RGB_TOG,RGB_MOD, RGB_HUI, __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, RGB_HUD, RGB_SAI, RGB_SAD
                                          ),

  [_NUM] = LAYOUT_planck_grid_wrapper(
                                      ____NUM_L1____, XX,  ____NUM_R1____, XX,
                                      ____NUM_L2____, XX,  ____NUM_R2____, XX,
                                      ____NUM_L3____, XX,  ____NUM_R3____, XX,
                                      ___, __NUM_MOD_L__ ,  __NUM_MOD_R__p, XX, RGB_VAI, RGB_VAD, XX
                                      ),

  [_NAV] = LAYOUT_planck_grid_wrapper( // Nav layer
                                       ____NAV_L1____, XX, ____NAV_R1____, XX,
                                       ____NAV_L2____, XX, ____NAV_R2____, XX,
                                       ____NAV_L3____, XX, ____NAV_R3____, XX,
                                      ___, __NAV_MOD_L__ ,  __NAV_MOD_R__p, XX, RGB_VAI, RGB_VAD,XX
                                      ),
  [_MUS] = LAYOUT_planck_grid_wrapper( // Mouse layer
                                       ____MUS_L1____, XX, ____MUS_R1____, XX,
                                       ____MUS_L2____, XX, ____MUS_R2____, XX,
                                       ____MUS_L3____, XX, ____MUS_R3____, XX,
                                       ___, XX, XX, __, XX, XX, ___),

  [_FN] = LAYOUT_planck_grid_wrapper( // Nav layer
                                      ____FN_L1____, XX, ____FN_R1____, XX,
                                      ____FN_L2____, XX, ____FN_R2____, XX,
                                      ____FN_L3____, XX, ____FN_R3____, XX,
                                      QK_BOOT, QK_RBT, QK_MAKE, KC_TRNS, KC_TRNS, XX, KC_BSPC, MO(_FN), ___, XX)
  // [_PLANCK_NAV] = LAYOUT_planck_grid_wrapper( // Dvorak
  //                                         ___DVORAK_L1____,__,____DVORAK_R1____,
  //                                         ____DVORAK_L2____,__, ____DVORAK_R2____,
  //                                         ____DVORAK_L3____, __, ____DVORAK_R3____,
  //                                         RGB_TOG,RGB_MOD, MO(_MUS), __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, RGB_HUD, RGB_SAI, RGB_SAD
  //                                         // RGB_TOG,RGB_MOD, RGB_HUI, __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, RGB_HUD, RGB_SAI, RGB_SAD
  //                                         )
};
