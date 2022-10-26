#include QMK_KEYBOARD_H
#include "muse.h"
#include "keycodes.h"

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
