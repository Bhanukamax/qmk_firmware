
#define  _DVORAK 0
#define  _COLMAK 1
#define  _NAV 2
#define  _NUM 3


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

#define ____DVORAK_L1____ KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y
#define ____DVORAK_R1____  KC_F, KC_G, KC_C, KC_R, KC_L


#define ____DVORAK_L2____ HM_A, HM_O, HM_E, HM_U, KC_I
#define ____DVORAK_R2____ KC_D, HM_H, HM_T, HM_N, HM_S

#define ____DVORAK_L3____ KC_SCLN, KC_Q, KC_J, KC_K, KC_X
#define ____DVORAK_R3____ KC_B, KC_M, KC_W, KC_V, KC_Z

#define __DVORAK_MOD_L__ NAV_ESC, KC_SPC
#define __DVORAK_MOD_R__ NUM_BSPC, KC_ENT


#define LAYOUT_bmax_wrapper(...) LAYOUT_split_3x5_2(__VA_ARGS__)
