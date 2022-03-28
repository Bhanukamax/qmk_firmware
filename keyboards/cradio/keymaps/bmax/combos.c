#include QMK_KEYBOARD_H
#include "muse.h"
#include "keycodes.h"

const uint16_t PROGMEM combo_osl_fn[] = {KC_M, KC_COMM, COMBO_END}; // right hand m and comma
const uint16_t PROGMEM combo_tab[] = {KC_T, KC_G, COMBO_END}; // right hand m and comma
const uint16_t PROGMEM combo_esc[] = {KC_G, KC_B, COMBO_END}; // right hand m and comma
const uint16_t PROGMEM combo_reset[] = {KC_E, KC_R, KC_U, KC_I, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_to_swap_layer[] = {KC_D, KC_F, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_to_base_layer[] = {KC_J, KC_K, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_space[] = {RSFT_T(KC_SPC), MO(2), COMBO_END}; // left hand -> Base


//const uint16_t PROGMEM combo_rshift_space[] = {RGUI_T(KC_V), KC_F, COMBO_END}; // left hand -> Base
//const uint16_t PROGMEM combo_lshift_space[] = {RGUI_T(KC_M), KC_J, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_rshift_space[] = {KC_R, KC_F, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_lshift_space[] = {KC_U, KC_J, COMBO_END}; // left hand -> Base

const uint16_t PROGMEM combo_rgui[] = {KC_V, KC_F, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_lgui[] = {KC_M, KC_J, COMBO_END}; // left hand -> Base


//const uint16_t PROGMEM combo_bsp[] = {RCTL_T(KC_SCLN), LALT_T(KC_SLSH), COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_bsp[] = {KC_Y, KC_H, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_bsp2[] = {KC_N, KC_H, COMBO_END}; // left hand -> Base


const uint16_t PROGMEM combo_mouse_layer[] = {KC_J, KC_K, KC_L, COMBO_END}; // left hand -> Base



const uint16_t PROGMEM combo_enter[] = {KC_O, KC_L, COMBO_END}; // left hand -> Base

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_osl_fn, OSL(4)),
    COMBO(combo_reset, RESET),
    COMBO(combo_esc, KC_ESC),
    COMBO(combo_tab, KC_TAB),
    COMBO(combo_space, KC_SPC),

    COMBO(combo_rshift_space, RSFT_T(KC_SPC)),
    COMBO(combo_lshift_space, RSFT_T(KC_SPC)),

    COMBO(combo_bsp, ALT_BSPC),
    COMBO(combo_bsp2, KC_BSPC),


    COMBO(combo_rgui, KC_RGUI),
    COMBO(combo_lgui, KC_RGUI),

    COMBO(combo_mouse_layer, TO(_MOUSE)),


 //    COMBO(combo_enter, KC_ENT),

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RCTL_T(KC_GT):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_GT); // Send KC_GT on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}


bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case SHIFT_SPACE:
        return true;
    default:
      return false;
  }
}



