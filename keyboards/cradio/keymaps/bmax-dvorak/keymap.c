#include QMK_KEYBOARD_H

#include "muse.h"
#include "keycodes.h"

/* Base layer 0 layout uses home row mods. See the following guide for details:
 * https://precondition.github.io/home-row-mods
 */

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
#define XX _______



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DVORAK] = LAYOUT(// Dvorak

                     //┌─────────┬─────────┬─────────┬─────────┐                 ┌─────────┬─────────┬─────────┬─────────┐
                     KC_QUOT, KC_COMM,  KC_DOT,    KC_P,     KC_Y,             KC_F,     KC_G,     KC_C,     KC_R,     KC_L,
                     //├─────────┼─────────┼─────────┼─────────┤                 ├─────────┼─────────┼─────────┼─────────┤
                     HM_A,     HM_O,     HM_E,     HM_U,    KC_I,              KC_D,     HM_H,     HM_T,     HM_N,     HM_S,
                     //├─────────┼─────────┼─────────┼─────────┤                 ├─────────┼─────────┼─────────┼─────────┤
                     KC_SCLN,  KC_Q,     KC_J,    NUM_K,     KC_X,             KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,
                     //└─────────┴─────────┴─────┬───┴─────┬───┼─────────┐     ┌─┴───────┬─┼─────────┴─────────┴─────────┘
                     /**/                      MO(_NAV),     KC_SPC,       LT(_NUM, KC_BSPC), RALT_T(KC_ENT)
                     //                          └─────────┘   └─────────┘     └─────────┘ └─────────┘
                     ),

	[_GIMP] = LAYOUT( //  colmaksu GIMP
                    KC_LBRC,  KC_RBRC, KC_F, KC_P, KC_O,
                    KC_J, KC_L, KC_U, KC_Y, KC_SCLN,


                    KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_P,
                    KC_H, KC_N, KC_E, KC_I, RCTL_T(KC_O),

                    KC_D, RSFT(KC_B), RCTL(KC_Z), RCTL(KC_Y), KC_X,
                    KC_D, RSFT(KC_B), RCTL(KC_Y), RCTL(KC_Z), KC_X,

                    MO(3), KC_SPACE, MO(2), RCTL(KC_ENT)),

  [_NUM] = LAYOUT(
                  //┌─────────┬─────────┬─────────┬─────────┐                 ┌─────────┬─────────┬─────────┬─────────┐
                  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,             KC_6,     KC_7,     KC_8,    KC_9,      KC_0,
                  //├─────────┼─────────┼─────────┼─────────┤                 ├─────────┼─────────┼─────────┼─────────┤
                  SHFT_TAB,  KC_GRV,   AL_MINS, G_LBRC,  KC_SLASH,          KC_BSLASH,  RGUI_T(KC_RBRC),  AL_EQL,   XX,       XX,
                  //├─────────┼─────────┼─────────┼─────────┤                 ├─────────┼─────────┼─────────┼─────────┤
                 S(KC_COMM),  KC_LPRN,  KC_UNDS, KC_LCBR, S(KC_SLASH),              S(KC_BSLASH),  KC_RCBR,  KC_PLUS,  KC_RPRN,  S(KC_DOT),
                  //└─────────┴─────────┴─────┬───┴─────┬───┼─────────┐     ┌─┴───────┬─┼─────────┴─────────┴─────────┘
                  /**/                        KC_ESC,      _______,       _______,      _______
                  //                          └─────────┘   └─────────┘     └─────────┘ └─────────┘
                  ),
	[_NAV] = LAYOUT( // Nav layer

                   // row 1
                   LALT(KC_F1), OSM_SHFT_GUI, OSM_SHFT_GUI, OSM_SHFT_GUI, LALT(KC_F12),
                   KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_DEL,

                   // row 2
                  KC_LSFT,  _______,  _______,  _______,  KC_DEL,                   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,    KC_BSPC,

                   // row 3
                   LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), KC_BSPC, LGUI(KC_B),
                   KC_BSPC, RCTL(KC_M),  RCTL(KC_QUES),RCTL(KC_SLASH), KC_DEL,

                   // 4
                   KC_TRNS, KC_TRNS, KC_BSPC, MO(_FN)),
	[_FN] = LAYOUT( // Function layer
                  // 1
                  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
                  KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,

                  // 2
                  KC_MPLY, KC_MUTE, KC_VOLD, KC_VOLU, KC_G,
                  KC_H, SGUI(KC_3), SGUI(KC_4), KC_F11, KC_F12,

                  // 3
                  KC_MPRV, KC_MNXT, KC_BRMD, KC_BRMU, XXXXXXX,
                  KC_N, DF(0), DF(1), KC_DOT, C(G(KC_Q)),
                  _______, _______, KC_LCTL, _______),
	[_MOUSE] = LAYOUT( // Function layer
                     // 1
                     XXXXXXX, RCTL(KC_W), KC_MS_U, XXXXXXX, RCTL(KC_T),
                     KC_ACL0, KC_WH_D, KC_MS_U, KC_WH_U, KC_ACL2,
                     // 2
                     RCTL(KC_A), RSFT(KC_TAB), KC_LALT, KC_TAB, RSFT(KC_TAB),
                     KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL0,

                     // 3
                     XXXXXXX, RCTL(KC_X), RCTL(KC_C), RCTL(KC_V), KC_ESC,
                     KC_BTN3, KC_BTN2, XXXXXXX, XXXXXXX, KC_ACL1,

                     // 4
                     KC_ACL1, KC_ACL2,
                     TO(0), KC_BTN1)
};
