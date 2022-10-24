#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_5x6( \
     L11, L12, L13, L14, L15,                          R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24, L25,                          R20, R21, R22, R23, R24, \
     L31, L32, L33, L34, L35,                          R30, R31, R32, R33, R34, \
     L43, L44,                                    R42, R43 \
 ) { \
    { XXX, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { XXX, L31, L32, L33, L34, L35 }, \
    { XXX, XXX, XXX, L43, L44, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX }, \
\
    { XXX, XXX, XXX, XXX, XXX, XXX }, \
    { R10, R11, R12, R13, R14, XXX }, \
    { R20, R21, R22, R23, R24, XXX }, \
    { R30, R31, R32, R33, R34, XXX }, \
    { XXX, XXX, R42, R43, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX } \
}
