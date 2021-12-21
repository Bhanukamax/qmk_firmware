#include QMK_KEYBOARD_H
#include "muse.h"

const uint16_t PROGMEM test_combo1[] = {KC_D, KC_F, COMBO_END}; // right hand m and comma
const uint16_t PROGMEM test_combo2[] = {KC_C, KC_V, COMBO_END}; // right hand m and comma

combo_t key_combos[COMBO_COUNT] = {
    COMBO(test_combo1, KC_VOLU,
    COMBO(test_combo2, KC_VOLD),
};

