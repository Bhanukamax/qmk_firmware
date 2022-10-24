#include QMK_KEYBOARD_H
#include "muse.h"
#include "keycodes.h"

const uint16_t PROGMEM combo_osl_fn[] = {NUM_M, KC_W, COMBO_END}; // right hand m and comma

const uint16_t PROGMEM combo_reset[] = {KC_E, KC_R, KC_U, KC_I, COMBO_END}; // left hand -> Base

const uint16_t PROGMEM combo_mouse_layer[] = {KC_J, KC_K, KC_L, COMBO_END}; // left hand -> Base



const uint16_t PROGMEM combo_enter[] = {KC_O, KC_L, COMBO_END}; // left hand -> Base

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_osl_fn, OSL(4)),
    COMBO(combo_reset, RESET),
    COMBO(combo_mouse_layer, TO(_MOUSE)),


 //    COMBO(combo_enter, KC_ENT),

};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_GT):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_GT); // Send KC_GT on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
       case LGUI_T(KC_RCBR):
          if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RCBR); // Send KC_GT on tap
                return false;        // Return false to ignore further processing of key
            }
      break;
       case LALT_T(KC_LCBR):
          if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LCBR); // Send KC_GT on tap
                return false;        // Return false to ignore further processing of key
            }
      break;
        case RALT_T(KC_RCBR):
          if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RCBR); // Send KC_GT on tap
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
