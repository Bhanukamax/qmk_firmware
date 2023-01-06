#include QMK_KEYBOARD_H
#include "bmax.h"

#define CASE_MOD_TAP(foo, bar)                                                 \
  case foo(bar):                                                               \
    if (record->tap.count && record->event.pressed) {                          \
      tap_code16(bar);                                                         \
      return false;                                                            \
    }                                                                          \
    break;

__attribute__((weak)) bool process_record_user(uint16_t keycode,
                                               keyrecord_t* record) {
  switch (keycode) {
    CASE_MOD_TAP(RCTL_T, S(KC_LBRC))
    CASE_MOD_TAP(RSFT_T, S(KC_RBRC))
    CASE_MOD_TAP(LALT_T, C(KC_D))
    CASE_MOD_TAP(LCTL_T, C(KC_S))
    CASE_MOD_TAP(RCTL_T, KC_LPRN)
    CASE_MOD_TAP(RCTL_T, KC_RPRN)
    CASE_MOD_TAP(RGUI_T, KC_LPRN)
    CASE_MOD_TAP(RSFT_T, KC_RPRN)
    CASE_MOD_TAP(RGUI_T, KC_LBRC)
    CASE_MOD_TAP(RALT_T, KC_RBRC)
    CASE_MOD_TAP(LALT_T, S(KC_GRV))
    CASE_MOD_TAP(LGUI_T, S(KC_2))
  }
  return true;
}
