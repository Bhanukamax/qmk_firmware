#include QMK_KEYBOARD_H
#include "muse.h"



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case LCTL_T(KC_LPRN):
    if (record->tap.count && record->event.pressed) {
      tap_code16(KC_LPRN); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;
  case RCTL_T(KC_RPRN):
    if (record->tap.count && record->event.pressed) {
      tap_code16(KC_RPRN); // Send KC_GT on tap
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
