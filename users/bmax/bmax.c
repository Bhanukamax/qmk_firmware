#include QMK_KEYBOARD_H
#include "bmax.h"

#define CASE_MOD_TAP(foo, bar)                                                 \
  case foo(bar):                                                               \
    if (record->tap.count && record->event.pressed) {                          \
      tap_code16(bar);                                                         \
      return false;                                                            \
    }                                                                          \
    break

#define handle_lhmr(one, two, three, four, five) \
    CASE_MOD_TAP(LCTL_T, one); \
    CASE_MOD_TAP(LSFT_T, two); \
    CASE_MOD_TAP(LALT_T, three); \
    CASE_MOD_TAP(LGUI_T, four)

#define handle_rhmr(one, two, three, four, five) \
    CASE_MOD_TAP(RCTL_T, four); \
    CASE_MOD_TAP(RSFT_T, five); \
    CASE_MOD_TAP(RALT_T, three); \
    CASE_MOD_TAP(RGUI_T, two)

__attribute__((weak)) bool process_record_user(uint16_t keycode,
                                               keyrecord_t* record) {
  switch (keycode) {
        handle_lhmr(KC_A, KC_O, KC_E, KC_U, KC_I);
        handle_rhmr(KC_D, KC_H, KC_T, KC_N, KC_S);
        handle_lhmr(KC_LSFT, KC_ENT, C(KC_S), C(KC_D), S(KC_6));
        handle_lhmr(SHFT_TAB, KC_GRV, S(KC_GRV),KC_UNDS, KC_SLASH);
        handle_rhmr(KC_BSLASH,   KC_LBRC, KC_RBRC, KC_EQL, KC_ENT);
  }
  return true;
}


const uint16_t PROGMEM comb_fd[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM comb_gh[] = {KC_G, RGUI_T(KC_H), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(comb_fd, KC_BSPC),
    COMBO(comb_gh, KC_ENT)
};

