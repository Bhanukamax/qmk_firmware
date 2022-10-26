
#define  _DVORAK 0
#define  _COLMAK 1
#define  _NAV 2
#define _NUM 3
#define  _FN 4


#define HM_A LSFT_T(KC_A)
#define HM_O LCTL_T(KC_O)
#define HM_E LALT_T(KC_E)
#define HM_U LGUI_T(KC_U)

#define HM_S RSFT_T(KC_S)
#define HM_N RCTL_T(KC_N)
#define HM_T RALT_T(KC_T)
#define HM_H RGUI_T(KC_H)


#define HM_L_P LSFT_T(KC_A)
#define HM_L_R LCTL_T(KC_R)
#define HM_L_M LALT_T(KC_S)
#define HM_L_I LGUI_T(KC_T)

#define HM_R_P LSFT_T(KC_O)
#define HM_R_R LCTL_T(KC_I)
#define HM_R_M LALT_T(KC_E)
#define HM_R_I LGUI_T(KC_N)


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

#define ____DVORAK_L1____ KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y
#define ____DVORAK_R1____  KC_F, KC_G, KC_C, KC_R, KC_L


#define ____DVORAK_L2____ HM_A, HM_O, HM_E, HM_U, KC_I
#define ____DVORAK_R2____ KC_D, HM_H, HM_T, HM_N, HM_S

#define ____DVORAK_L3____ KC_SCLN, KC_Q, KC_J, KC_K, KC_X
#define ____DVORAK_R3____ KC_B, KC_M, KC_W, KC_V, KC_Z

#define __DVORAK_MOD_L__ NAV_ESC, KC_SPC
#define __DVORAK_MOD_R__ NUM_BSPC, KC_ENT


#define ____NAV_L1____ XX, KC_PGUP, KC_PGDN, KC_ENT, XX
#define ____NAV_R1____ KC_HOME, KC_PGDN, KC_PGUP, KC_END, XX

#define ____NAV_L2____ KC_LSFT, LCTL_T(C(KC_S)), LALT_T(C(KC_D)), XX, XX
#define ____NAV_R2____ KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC

#define ____NAV_L3____ C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XX
#define ____NAV_R3____ XX, KC_RBRC, KC_RCBR, KC_RPRN, S(KC_DOT)

#define __NAV_MOD_L__ XX, XX
#define __NAV_MOD_R__ KC_BSPC, XX


#define ____NUM_L1____ KC_1, KC_2, KC_3, KC_4, KC_5
#define ____NUM_R1____ KC_6, KC_7, KC_8, KC_9, KC_0

#define ____NUM_L2____ SHFT_TAB, LCTL_T(KC_LPRN), LALT_T(KC_LCBR), LGUI_T(KC_LBRC), KC_SLASH
#define ____NUM_R2____ KC_BSLASH, LGUI_T(KC_RBRC), RALT_T(KC_RCBR), RCTL_T(KC_RPRN), RSFT_T(KC_GRV)

#define ____NUM_L3____ KC_PLUS, KC_EQL, KC_UNDS, KC_MINUS, S(KC_SLASH)
#define ____NUM_R3____ S(KC_BSLASH), S(KC_5), S(KC_COMM), S(KC_DOT), S(KC_2)

#define __NUM_MOD_L__ XX, XX
#define __NUM_MOD_R__ XX, XX


#define LAYOUT_bmax_wrapper(...) LAYOUT_split_3x5_2(__VA_ARGS__)
#define LAYOUT_wrapper(...) LAYOUT_5x6(__VA_ARGS__)
