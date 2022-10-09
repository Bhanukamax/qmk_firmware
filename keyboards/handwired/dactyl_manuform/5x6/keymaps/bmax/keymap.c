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
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
        KC_TAB , KC_QUOT  , KC_COMM  , KC_DOT  , KC_P  , KC_Y  ,                         KC_F  , KC_G  , KC_C  , KC_R  , KC_L  ,KC_BSPC,
        KC_LSFT, HM_A  , HM_O  , HM_E  , HM_U  , KC_I  ,                         KC_D  , HM_H  , HM_T  , HM_N  ,HM_S,KC_QUOT,
        KC_LCTL, KC_SCLN  , KC_Q  , KC_J  , KC_K  ,KC_X  ,                         KC_B  , KC_M  ,KC_W,KC_V ,KC_Z,KC_BSLASH,
                         KC_LBRC,KC_SPC,                                                       KC_BSPC, KC_ENT,
                                         RAISE,KC_SPC,                        KC_ENT, LOWER,
                                         KC_TAB,KC_HOME,                         KC_END,  KC_DEL,
                                         KC_BSPC, KC_GRV,                        KC_LGUI, KC_LALT
    ),

    [_LOWER] = LAYOUT_5x6(
        KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
        _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
        _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                                                _______,KC_PSCR,            _______, KC_P0,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
          _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD,
                                                  _______,_______,            KC_EQL ,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    )
};
