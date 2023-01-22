
#define  _DVORAK 0
#define  _COLMAK 1
#define  _NAV 2
#define _NUM 3
#define _FN 4
#define _MUS 5
#define _GAME 6

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
#define BASE TO(_DVORAK)

#define ____DVORAK_L1____ KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y
#define ____DVORAK_L2____ HM_A,    HM_O,    HM_E,   HM_U, KC_I
#define ____DVORAK_L3____ KC_SCLN, KC_Q,    KC_J,   KC_K, KC_X
#define __DVORAK_MOD_L__  NAV_ESC, KC_SPC

#define ____DVORAK_R1____ KC_F,       KC_G,   KC_C, KC_R, KC_L
#define ____DVORAK_R2____ KC_D,       HM_H,   HM_T, HM_N, HM_S
#define ____DVORAK_R3____ KC_B,       KC_M,   KC_W, KC_V, KC_Z
#define __DVORAK_MOD_R__  NUM_BSPC,   LT(_MUS, KC_ENT)


#define ____NAV_L1____ XX,      KC_PGUP,         KC_PGDN,         KC_DEL,          XX
#define ____NAV_L2____ KC_LSFT, LCTL_T(C(KC_S)), LALT_T(C(KC_D)), LGUI_T(KC_ENT),  S(KC_6)
#define ____NAV_L3____ C(KC_Z), C(KC_X),         C(KC_C),         C(KC_V),         XX
#define __NAV_MOD_L__  XX,      XX

#define ____NAV_R1____ KC_HOME, KC_PGUP, KC_PGDN, KC_END,  XX
#define ____NAV_R2____ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSPC
#define ____NAV_R3____ S(KC_6),      KC_RBRC, KC_RCBR, KC_RPRN, S(KC_DOT)
#define __NAV_MOD_R__  KC_BSPC, MO(_FN)

#define ____NUM_L1____ KC_1,     KC_2,            KC_3,            KC_4,            KC_5
#define ____NUM_L2____ SHFT_TAB, LCTL_T(KC_GRV), LALT_T(S(KC_GRV)), LGUI_T(S(KC_2)), KC_SLASH
#define ____NUM_L3____ KC_PLUS,  KC_EQL,          KC_UNDS,         KC_MINUS,        S(KC_SLASH)
#define __NUM_MOD_L__  XX,       XX

#define ____NUM_R1____ KC_6,         KC_7,               KC_8,                KC_9,               KC_0
#define ____NUM_R2____ KC_BSLASH,    RGUI_T(KC_LPRN), RALT_T(KC_RPRN),  RCTL_T(KC_LBRC),    RSFT_T(KC_RBRC)
#define ____NUM_R3____ S(KC_BSLASH), S(KC_LBRC),            S(KC_RBRC),          S(KC_COMM),        KC_BSPC
#define __NUM_MOD_R__  XX,           XX


#define ____NUM_OLD_L1____ KC_1,     KC_2,            KC_3,            KC_4,            KC_5
#define ____NUM_OLD_L2____ SHFT_TAB, LCTL_T(KC_LPRN), LALT_T(KC_LCBR), LGUI_T(KC_LBRC), KC_SLASH
#define ____NUM_OLD_L3____ KC_PLUS,  KC_EQL,          KC_UNDS,         KC_MINUS,        S(KC_SLASH)
#define __NUM_OLD_MOD_L__  XX,       XX

#define ____NUM_OLD_R1____ KC_6,         KC_7,            KC_8,            KC_9,            KC_0
#define ____NUM_OLD_R2____ KC_BSLASH,    LGUI_T(KC_RBRC), RALT_T(KC_RCBR), RCTL_T(KC_RPRN), RSFT_T(KC_GRV)
#define ____NUM_OLD_R3____ S(KC_BSLASH), S(KC_5),         S(KC_7),      S(KC_2),       S(KC_DOT)
#define __NUM_OLD_MOD_R__  XX,           XX

#define ____MUS_L1____ S(KC_1),     S(KC_2),            S(KC_3),            S(KC_4),            S(KC_5)
#define ____MUS_L2____ XX, XX, XX, XX, XX
#define ____MUS_L3____ XX, KC_ACL2, KC_ACL1, KC_ACL0, XX
#define __MUS_MOD_L__ XX, XX

#define ____MUS_R1____ S(KC_6), KC_WH_U, KC_MS_U, KC_WH_D, XX
#define ____MUS_R2____ XX, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN1
#define ____MUS_R3____ XX, XX, XX, XX, KC_BTN2
#define __MUS_MOD_R__ XX, XX

#define ____GAME_L1____ KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R
#define ____GAME_L2____ KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F
#define ____GAME_L3____ KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V
#define __GAME_MOD_L__ XX, KC_SPC

#define ____GAME_R1____ XX, XX, XX, XX, BASE
#define ____GAME_R2____ XX, XX, XX, XX, XX
#define ____GAME_R3____ XX, XX, XX, XX, XX
#define __GAME_MOD_R__ XX, XX

#define ____FN_L1____ KC_F1,  KC_F2, KC_F3, KC_F4,  KC_F5
#define ____FN_L2____ KC_F11, KC_F2, KC_MPRV, KC_F4, KC_F5
#define ____FN_L3____ KC_VOLD,  KC_VOLU, KC_F3, KC_F4, KC_F5

#define ____FN_R1____ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10
#define ____FN_R2____ KC_F11, KC_MEDIA_PLAY_PAUSE, KC_MNXT, KC_F11, KC_F12
#define ____FN_R3____ KC_F6,  TO(_GAME), RGB_TOG, KC_BRID, KC_BRIU


#define LAYOUT_bmax_wrapper(...) LAYOUT_split_3x5_2(__VA_ARGS__)
#define LAYOUT_wrapper(...) LAYOUT_5x6(__VA_ARGS__)
#define LAYOUT_planck_grid_wrapper(...) LAYOUT_planck_grid(__VA_ARGS__)

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define PERMISSIVE_HOLD
