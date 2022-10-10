#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)


#define HM_A LSFT_T(KC_A)
#define HM_O LCTL_T(KC_O)
#define HM_E LALT_T(KC_E)
#define HM_U LGUI_T(KC_U)

#define HM_S RSFT_T(KC_S)
#define HM_N RCTL_T(KC_N)
#define HM_T RALT_T(KC_T)
#define HM_H RGUI_T(KC_H)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_GRV,
        KC_TAB , KC_QUOT  , KC_COMM  , KC_DOT  , KC_P  , KC_Y  ,                         KC_F  , KC_G  , KC_C  , KC_R  , KC_L  ,KC_DEL,
        KC_UNDS, HM_A  , HM_O  , HM_E  , HM_U  , KC_I  ,                         KC_D  , HM_H  , HM_T  , HM_N  ,HM_S,KC_SLASH,
        KC_LCTL, KC_SCLN, KC_Q  , KC_J  , KC_K  ,KC_X  ,                         KC_B  , KC_M  ,KC_W,KC_V ,KC_Z,KC_BSLASH,
        KC_LEFT, KC_RIGHT, KC_ESC,KC_SPC, KC_MINS, KC_UNDS,                     KC_UNDS, KC_EQL, KC_BSPC, KC_ENT, KC_UP, KC_DOWN,
        KC_MINS, KC_MINS,  KC_EQL, KC_RCTL
    )
};
