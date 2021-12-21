#include QMK_KEYBOARD_H
#include "muse.h"

const uint16_t PROGMEM combo_osl_fn[] = {KC_M, KC_COMM, COMBO_END}; // right hand m and comma
const uint16_t PROGMEM combo_reset[] = {KC_E, KC_R, KC_U, KC_I, COMBO_END}; // left hand -> Base

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_osl_fn, OSL(4)),
    COMBO(combo_reset, RESET),
};

