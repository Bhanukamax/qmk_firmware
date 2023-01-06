#include QMK_KEYBOARD_H
#include "bmax.h"

#define ONE RCTL_T(S(KC_LBRC))
#define ONE_KEY S(KC_LBRC)
#define TWO RSFT_T(S(KC_RBRC))
#define TWO_KEY S(KC_RBRC)

#define HANDLE_KEY_CASE(foo, bar)                                              \
  case foo(bar):                                                               \
    if (record->tap.count && record->event.pressed) {                          \
      tap_code16(bar);                                                         \
      return false;                                                            \
    }                                                                          \
    break;

__attribute__((weak)) bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    HANDLE_KEY_CASE(RCTL_T, S(KC_LBRC))
    HANDLE_KEY_CASE(RSFT_T, S(KC_RBRC))
    HANDLE_KEY_CASE(LALT_T, C(KC_D))
    HANDLE_KEY_CASE(LCTL_T, C(KC_S))
    HANDLE_KEY_CASE(RCTL_T, KC_LPRN)
    HANDLE_KEY_CASE(RCTL_T, KC_RPRN)
    HANDLE_KEY_CASE(RGUI_T, KC_LPRN)
    HANDLE_KEY_CASE(RSFT_T, KC_RPRN)
    HANDLE_KEY_CASE(RGUI_T, KC_LBRC)
    HANDLE_KEY_CASE(RALT_T, KC_RBRC)
    HANDLE_KEY_CASE(LALT_T, S(KC_GRV))
    HANDLE_KEY_CASE(LGUI_T, S(KC_2))
  }
  return true;
}
