#include QMK_KEYBOARD_H

#include "muse.h"
#include "keycodes.h"

/* Base layer 0 layout uses home row mods. See the following guide for details:
 * https://precondition.github.io/home-row-mods
 */

#define TOP_QUOT LCTL_T(KC_QUOT)
#define TOP_L RCTL_T(KC_L)

#define HM_A LSFT_T(KC_A)
#define HM_O LCTL_T(KC_O)
#define HM_E LALT_T(KC_E)
#define HM_U LGUI_T(KC_U)

#define HM_S RSFT_T(KC_S)
#define HM_N RCTL_T(KC_N)
#define HM_T RALT_T(KC_T)
#define HM_H RGUI_T(KC_H)


#define GUI_Z RGUI_T(KC_Z)

#define OSM_SHFT_GUI OSM(MOD_LSFT|MOD_LGUI)

#define DVORAK 0
#define GIMP 1
#define NUMBER 2
#define NAV 3
#define FUN 4

#define RAISE_NUM TT(2)

#define TAP_COMM LT(NUMBER, KC_COMM)
#define NUM_DOT RCTL_T(KC_DOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[DVORAK] = LAYOUT(// Dvorak
               // 1
               TOP_QUOT, TAP_COMM, KC_DOT, KC_P, KC_Y,
               KC_F, KC_G, KC_C, KC_R, TOP_L,

               // 2
               HM_A, HM_O, HM_E, HM_U, KC_I,
               KC_D, HM_H, HM_T, HM_N, HM_S,

               // 3
               KC_SCLN, KC_Q, KC_J, KC_K, KC_X,
               KC_B, KC_M, KC_W, KC_V, GUI_Z,

               // 4
               MO(3), LALT_T(KC_SPC),
               RAISE_NUM, LCTL_T(KC_ENT)),

	[GIMP] = LAYOUT( //  colmaksu GIMP
            KC_LBRC,  KC_RBRC, KC_F, KC_P, KC_O,
            KC_J, KC_L, KC_U, KC_Y, KC_SCLN,


            KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_P,
            KC_H, KC_N, KC_E, KC_I, RCTL_T(KC_O),

            KC_D, RSFT(KC_B), RCTL(KC_Z), RCTL(KC_Y), KC_X,
            KC_D, RSFT(KC_B), RCTL(KC_Y), RCTL(KC_Z), KC_X,

            MO(3), KC_SPACE, MO(2), KC_ENT),
	[NUMBER] = LAYOUT( //  Number/symbol layer
                // 1
            KC_LT, KC_LBRC, KC_LPRN, KC_LCBR, KC_TAB,
            KC_ESC, KC_7, KC_8, KC_9, NUM_DOT,

            // 2
            LSFT_T(KC_GT), LCTL_T(KC_RBRC), KC_RPRN, KC_RCBR, KC_SLASH,
            KC_QUES, KC_4, KC_5, KC_6, KC_BSPC,

            // 3
            KC_MINS, KC_EQL, KC_UNDS, KC_PLUS, KC_GRV,
            KC_0, KC_1, KC_2, KC_3, KC_BSLS,

            // 4
            KC_LCTL, TO(0), KC_TRNS, KC_TRNS),
	[NAV] = LAYOUT( // Nav layer

            // row 1
            LALT(KC_F1), OSM_SHFT_GUI, OSM_SHFT_GUI, OSM_SHFT_GUI, LALT(KC_F12),
            KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS,

            // row 2
            KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_ESC,
            KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC,

            // row 3
            LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B),
            RGUI(KC_GRV), RCTL(KC_M),  RCTL(KC_QUES),RCTL(KC_SLASH), KC_DEL,

            // 4
            KC_TRNS, KC_TRNS, MO(3), KC_TRNS),
	[FUN] = LAYOUT( // Function layer
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
