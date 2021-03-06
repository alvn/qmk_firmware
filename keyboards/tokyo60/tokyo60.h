#ifndef TOKYO60_H
#define TOKYO60_H

#include "quantum.h"

/* tokyo60 Keymap*/
#define TOKYO_KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K1D,\
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K2D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K3D, \
    K30, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3C, K4D, \
         K41, K42,           K45,                          K4B, K4C       \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, KC_NO, K2D }, \
    { K30, KC_NO, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D }, \
    { KC_NO, K41, K42, KC_NO, KC_NO, K45, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K4B, K4C, K4D }  \
}

#endif
