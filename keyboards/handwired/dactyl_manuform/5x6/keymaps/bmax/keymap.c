#include QMK_KEYBOARD_H

enum layers {
  _DVORAK,
  _NAV
};

#define HM_A LSFT_T(KC_A)
#define HM_O LCTL_T(KC_O)
#define HM_E LALT_T(KC_E)
#define HM_U LGUI_T(KC_U)

#define HM_S RSFT_T(KC_S)
#define HM_N RCTL_T(KC_N)
#define HM_T RALT_T(KC_T)
#define HM_H RGUI_T(KC_H)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DVORAK] = LAYOUT_5x6(
                           // number
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,
        KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_LBRC,
        // top
        KC_TAB , KC_QUOT  , KC_COMM  , KC_DOT  , KC_P  , KC_Y  ,
        KC_F  , KC_G  , KC_C  , KC_R  , KC_L  ,KC_RBRC,
        // Home
        KC_MINS, HM_A  , HM_O  , HM_E  , HM_U  , KC_I  ,
        KC_D  , HM_H  , HM_T  , HM_N  ,HM_S,KC_SLASH,
        // bottom
        KC_EQL, KC_SCLN, KC_Q  , KC_J  , KC_K  ,KC_X  ,
        KC_B  , KC_M  ,KC_W,KC_V ,KC_Z,KC_BSLASH,
        // thumb upper
        KC_LEFT, KC_RIGHT, KC_ESC,KC_SPC, KC_LBRC, KC_UNDS,
        KC_UNDS, KC_DEL, KC_BSPC, KC_ENT, KC_DOWN, KC_UP,
        // thumb lower
        MO(_NAV), KC_MINS,
        KC_MINS, LCTL_T(KC_DEL)
                           ),
      [_NAV] = LAYOUT_5x6(
                           // number
        KC_TRNS , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,
        KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10  ,KC_F11,
        // top
        KC_TAB , KC_QUOT  , KC_COMM  , KC_DOT  , KC_P  , KC_Y  ,
        KC_HOME, KC_PGDN, KC_PGUP, KC_END  , KC_L  ,KC_F12,
        // Home
        KC_MINS, HM_A  , HM_O  , HM_E  , HM_U  , KC_I  ,
        KC_LEFT, KC_DOWN, KC_UP, KC_RGHT  ,HM_S,KC_SLASH,
        // bottom
        KC_EQL, KC_SCLN, KC_Q  , KC_J  , KC_K  ,KC_X  ,
        KC_B  , KC_M  ,KC_W,KC_V ,KC_Z,KC_BSLASH,
        // thumb upper
        KC_LEFT, KC_RIGHT, KC_ESC,KC_SPC, KC_LBRC, KC_UNDS,
        KC_UNDS, KC_DEL, KC_BSPC, KC_ENT, KC_DOWN, KC_UP,
        // thumb lower
        KC_LBRC, KC_MINS,
        KC_MINS, LCTL_T(KC_DEL)
    )
};
