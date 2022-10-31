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
                                          ____DVORAK_L1____,__,____DVORAK_R1____,
                                          ____DVORAK_L2____,__, ____DVORAK_R2____,
                                          ____DVORAK_L3____, __, ____DVORAK_R3____,
                                          BL_TOGG, BL_OFF, BL_ON, __DVORAK_MOD_L__, __, __DVORAK_MOD_R__, BL_STEP, BL_DEC, BL_INC
                                          ),

  [_NUM] = LAYOUT_planck_grid_wrapper(
                                      ____NUM_L1____, XX, XX, ____NUM_R1____,
                                      ____NUM_L2____, XX, XX, ____NUM_R2____,
                                      ____NUM_L3____, XX, XX, ____NUM_R3____,
                                      ___, KC_ESC, _______,__,  _______, _______, ___
                                      ),

  [_NAV] = LAYOUT_planck_grid_wrapper( // Nav layer
                                       ____NAV_L1____, __, ____NAV_R1____,
                                       ____NAV_L2____, __, ____NAV_R2____,
                                       ____NAV_L3____, __, ____NAV_R3____,
                                       ___, KC_TRNS, KC_TRNS, __, KC_BSPC, MO(_FN), ___),

  [_FN] = LAYOUT_planck_grid_wrapper( // Nav layer
                                      ____FN_L1____, __, ____FN_R1____,
                                      ____FN_L2____, __, ____FN_R2____,
                                      ____FN_L3____, __, ____FN_R3____,
                                      ___,   KC_TRNS, KC_TRNS, __, KC_BSPC, MO(_FN), ___)
};
