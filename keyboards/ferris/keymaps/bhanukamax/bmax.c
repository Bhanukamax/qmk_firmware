#include QMK_KEYBOARD_H
#include "muse.h"

const uint16_t PROGMEM combo_osl_fn[] = {RGUI_T(KC_M), KC_COMM, COMBO_END}; // right hand m and comma
const uint16_t PROGMEM combo_tab[] = {KC_T, KC_G, COMBO_END}; // right hand m and comma
const uint16_t PROGMEM combo_esc[] = {KC_G, KC_B, COMBO_END}; // right hand m and comma
const uint16_t PROGMEM combo_reset[] = {KC_E, KC_R, KC_U, KC_I, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_to_swap_layer[] = {KC_D, KC_F, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_to_base_layer[] = {KC_J, KC_K, COMBO_END}; // left hand -> Base
const uint16_t PROGMEM combo_space[] = {RSFT_T(KC_SPC), MO(1), COMBO_END}; // left hand -> Base


combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_osl_fn, OSL(5)),
    COMBO(combo_reset, RESET),
    COMBO(combo_esc, KC_ESC),
    COMBO(combo_tab, KC_TAB),
    COMBO(combo_space, KC_SPC),
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RCTL_T(KC_GT):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_GT); // Send KC_GT on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}
