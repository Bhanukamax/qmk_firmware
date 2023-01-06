#include QMK_KEYBOARD_H
#include "bmax.h"

#define ONE RCTL_T(S(KC_LBRC))
#define ONE_KEY S(KC_LBRC)
#define TWO RSFT_T(S(KC_RBRC))
#define TWO_KEY S(KC_RBRC)

__attribute__((weak)) bool process_record_user(uint16_t keycode,
                                               keyrecord_t* record) {
  switch (keycode) {
  case ONE:
    if (record->tap.count && record->event.pressed) {
      tap_code16(ONE_KEY); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;
  case TWO:
    if (record->tap.count && record->event.pressed) {
      tap_code16(TWO_KEY); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;
  case LALT_T(C(KC_D)):
    if (record->tap.count && record->event.pressed) {
      tap_code16(C(KC_D)); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;
  case LCTL_T(C(KC_S)):
    if (record->tap.count && record->event.pressed) {
      tap_code16(C(KC_S)); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;
  case RCTL_T(KC_LPRN):
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

    //  RGUI_T(KC_LPRN), RSFT_T(KC_RPRN)
  case RGUI_T(KC_LPRN):
    if (record->tap.count && record->event.pressed) {
      tap_code16(KC_LPRN); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;
  case RSFT_T(KC_RPRN):
    if (record->tap.count && record->event.pressed) {
      tap_code16(KC_RPRN); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;
    //    RCTL_T(KC_LBRC), RALT_T(KC_RBRC),
  case RGUI_T(KC_LBRC):
    if (record->tap.count && record->event.pressed) {
      tap_code16(KC_LBRC); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;
  case RALT_T(KC_RBRC):
    if (record->tap.count && record->event.pressed) {
      tap_code16(KC_RBRC); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;

    // LALT_T(KC_RCBR), LGUI_T(KC_LCBR),
  case LALT_T(S(KC_GRV)):
    if (record->tap.count && record->event.pressed) {
      tap_code16(S(KC_GRV)); // Send KC_GT on tap
      return false;          // Return false to ignore further processing of key
    }
    break;
  case LGUI_T(S(KC_2)):
    if (record->tap.count && record->event.pressed) {
      tap_code16(S(KC_2)); // Send KC_GT on tap
      return false;        // Return false to ignore further processing of key
    }
    break;
  }
  return true;
}
