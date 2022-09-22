#pragma once
#include QMK_KEYBOARD_H

enum bmax_layers {
    _QWERTY,
    _COLEMAK,
    _NUMBER,
    _NAV,
    _FN,
    _MOUSE
};

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

#define RAISE_NUM LT(2, KC_ESC)

#define TOP_DOT LT(NUMBER, KC_DOT)
#define TOP_C LT(NUMBER, KC_C)
#define NUM_DOT RCTL_T(KC_DOT)

#define TOP_G LT(NUMBER, KC_G)
#define TOP_P LT(NUMBER, KC_P)
#define NUM_COMM LT(NUMBER, KC_COMM)

#define NUM_I LT(NUMBER, KC_I)
#define NUM_R LT(NUMBER, KC_R)
