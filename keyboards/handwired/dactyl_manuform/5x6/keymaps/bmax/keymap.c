#include QMK_KEYBOARD_H

enum layers {
  _DVORAK,
  _COLMAK,
  _NAV,
  _NUM
};

#define HM_A LSFT_T(KC_A)
#define HM_O LCTL_T(KC_O)
#define HM_E LALT_T(KC_E)
#define HM_U LGUI_T(KC_U)

#define HM_S RSFT_T(KC_S)
#define HM_N RCTL_T(KC_N)
#define HM_T RALT_T(KC_T)
#define HM_H RGUI_T(KC_H)

#define G_LBRC LGUI_T(KC_LBRC)
#define G_RBRC LGUI_T(KC_RBRC)

#define AL_MINS LALT_T(KC_MINS)
#define AL_EQL RALT_T(KC_EQL)

#define CTL_DEL LCTL_T(KC_DEL)
#define NAV MO(_NAV)
#define NUM_BSPC LT(_NUM, KC_BSPC)
#define CTL_SPC LCTL_T(KC_SPC)
#define SHFT_TAB LSFT_T(KC_TAB)
#define NAV_ESC LT(_NAV, KC_ESC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DVORAK] = LAYOUT_5x6(
                         // number
                         //┌─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┐
                         KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                        KC_6,     KC_7,     KC_8,    KC_9,      KC_0,     KC_LBRC,
                         //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                         KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,                        KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_RBRC,
                         //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                         KC_MINS,  HM_A,     HM_O,     HM_E,     HM_U,     KC_I,                        KC_D,     HM_H,     HM_T,     HM_N,     HM_S,     KC_SLASH,
                         //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                         KC_EQL,   KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,                         KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     KC_BSLASH,
                         //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                         KC_LEFT,  KC_RIGHT,NAV_ESC,  KC_SPC,    NAV,     KC_UNDS,                     KC_UNDS,  KC_DEL,   NUM_BSPC,  KC_ENT,   KC_DOWN,  KC_UP,
                         //└─────────┴─────────┴─────────┴─────┬───┴─────┬───┼─────────┐        ┌─────────┼───┬─────┴───┬─────┴─────────┴─────────┴─────────┘
                         /**/                                   NAV_ESC,   KC_SPC,                 NUM_BSPC,  KC_ENT
                         //                                    └─────────┘   └─────────┘        └─────────┘   └─────────┘
                         ),
    [_COLMAK] = LAYOUT_5x6(
                         // number
                         //┌─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┐
                         KC_GRV,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,                        KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_BSPC,
                         //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                         KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,                        KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_BSPC,
                         //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                         KC_MINS,   KC_A,    KC_R,    KC_S,      KC_T,     KC_D,                        KC_H,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT ,
                         //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                         KC_EQL,    KC_Z,    KC_X,    KC_C,      KC_V,     KC_B,                        KC_K,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH, KC_ENT ,
                         //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                         KC_LEFT,  KC_RIGHT,NAV_ESC,  CTL_SPC,    NAV,     KC_UNDS,                     KC_UNDS,  KC_DEL,   NUM_BSPC,  KC_ENT,   KC_DOWN,  KC_UP,
                         //└─────────┴─────────┴─────────┴─────┬───┴─────┬───┼─────────┐        ┌─────────┼───┬─────┴───┬─────┴─────────┴─────────┴─────────┘
                         /**/                                   NAV_ESC,  CTL_SPC,                 NUM_BSPC,  KC_ENT
                         //                                    └─────────┘   └─────────┘        └─────────┘   └─────────┘
                         ),
  [_NAV] = LAYOUT_5x6(
                      // number
                      //┌─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┐
                      _______,KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                       KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
                      //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                      _______,  _______,  _______,  _______,  _______,  _______,                   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,     _______,KC_F12,
                      //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                      _______,  KC_LSFT,  _______,  _______,  _______,  _______,                   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,    _______,  TO(_DVORAK),
                      //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                      _______,  _______,  _______,  _______,  _______,  _______,                     _______,  _______,  _______,  _______,  _______,  TO(_COLMAK),
                      //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                      _______,  _______,  _______,  _______,  _______,  _______,                     _______,  _______,  KC_BSPC,  _______,  _______,  _______,
                      //└─────────┴─────────┴─────────┴─────┬───┴─────┬───┼─────────┐        ┌─────────┼───┬─────┴───┬─────┴─────────┴─────────┴─────────┘
                      /**/                                  _______,      _______,           _______,      KC_BSPC
                      //                                    └─────────┘   └─────────┘        └─────────┘   └─────────┘
                      ),
  [_NUM] = LAYOUT_5x6(
                      // number
                      //┌─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┐
                      _______,  _______,  _______,  _______,  _______,  _______,                     _______,  _______,  _______,  _______,  _______,  _______,
                      //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                      KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                        KC_6,     KC_7,     KC_8,    KC_9,      KC_0,     KC_LBRC,
                      //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                      _______,  SHFT_TAB,   _______,  AL_MINS,  G_LBRC,  KC_SLASH,                     S(KC_SLASH),  G_RBRC,  AL_EQL,  _______,  _______,  _______,
                      //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                      _______,  KC_GRV,  KC_LPRN,  KC_UNDS,  KC_LCBR,  KC_BSLASH,                     S(KC_BSLASH),  KC_RCBR,  KC_PLUS,  KC_RPRN,  _______,  _______,
                      //├─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┤
                      _______,  _______,  _______,  _______,  _______,  _______,                     _______,  _______,  _______,  _______,  _______,  _______,
                      //└─────────┴─────────┴─────────┴─────┬───┴─────┬───┼─────────┐        ┌─────────┼───┬─────┴───┬─────┴─────────┴─────────┴─────────┘
                      /**/                                  _______,      _______,           _______,      _______
                      //                                    └─────────┘   └─────────┘        └─────────┘   └─────────┘
                      )
};
