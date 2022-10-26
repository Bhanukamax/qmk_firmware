#pragma once
#include QMK_KEYBOARD_H

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

#define RAISE_NUM LT(2, KC_ESC)

#define TOP_DOT KC_DOT
#define NUM_DOT RCTL_T(KC_DOT)


#define NUM_COMM KC_COMM
#define NUM_K KC_K
