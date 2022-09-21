#include QMK_KEYBOARD_H
#include "muse.h"
#include "keycodes.h"

const uint16_t PROGMEM combo_osl_fn[] = {KC_M, KC_W, COMBO_END}; // right hand m and comma

const uint16_t PROGMEM combo_reset[] = {KC_E, KC_R, KC_U, KC_I, COMBO_END}; // left hand -> Base

const uint16_t PROGMEM combo_1[] = {TOP_QUOT, HM_A, COMBO_END};
const uint16_t PROGMEM combo_2[] = {KC_COMM, HM_O, COMBO_END};
const uint16_t PROGMEM combo_3[] = {TOP_DOT, HM_E, COMBO_END};
const uint16_t PROGMEM combo_4[] = {KC_P, HM_U, COMBO_END};
const uint16_t PROGMEM combo_5[] = {KC_Y, KC_I, COMBO_END};
const uint16_t PROGMEM combo_6[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM combo_7[] = {KC_G, HM_H, COMBO_END};
const uint16_t PROGMEM combo_8[] = {TOP_C, HM_T, COMBO_END};
const uint16_t PROGMEM combo_9[] = {KC_R, HM_N, COMBO_END};
const uint16_t PROGMEM combo_0[] = {TOP_L, HM_S, COMBO_END};


const uint16_t PROGMEM combo_mouse_layer[] = {KC_J, KC_K, KC_L, COMBO_END}; // left hand -> Base



const uint16_t PROGMEM combo_enter[] = {KC_O, KC_L, COMBO_END}; // left hand -> Base

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_osl_fn, OSL(4)),
    COMBO(combo_reset, RESET),
    COMBO(combo_1, KC_1),
    COMBO(combo_2, KC_2),
    COMBO(combo_3, KC_3),
    COMBO(combo_4, KC_4),
    COMBO(combo_5, KC_5),
    COMBO(combo_6, KC_6),
    COMBO(combo_7, KC_7),
    COMBO(combo_8, KC_8),
    COMBO(combo_9, KC_9),
    COMBO(combo_0, KC_0),
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
