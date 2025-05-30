// Copyright 2025 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, KC_DLR,  XXXXXXX, KC_UNDS,
        XXXXXXX, KC_7,    KC_9,    KC_K,    KC_Q,    XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_S,    KC_D,    KC_ENT,
        KC_2,    KC_1,    XXXXXXX, KC_B,    KC_J,    KC_Y,
        KC_SPC,  RM_TOGG,  RM_TOGG,  RM_NEXT,	RM_NEXT,    _______,
        RM_NEXT, 	 RM_TOGG,    _______, _______, _______, _______
    )
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 29, 28, 27, 26, 25, 24 },
  { 23, 22, 21, 20, 19, 18 },
  { 17, 16, 15, 14, 13, 12 },
  { 11, 10, 9, 8, 7, 6 },
  { 5, 4, 3, 2, NO_LED, NO_LED },
  { 1, 0, NO_LED, NO_LED, NO_LED, NO_LED },
 
}, {
  // LED Index to Physical Position
  {53, 61}, {33, 63}, {143, 45}, {112, 43}, {64, 50}, {35, 52}, {18, 55}, {207, 43}, {175, 43}, {142, 36}, {110, 35}, {80, 35}, {45, 35}, {206, 34}, {174, 34}, {143, 28}, {109, 26}, {80, 27}, {45, 26}, {208, 26}, {176, 25}, {143, 20}, {114, 18}, {82, 19}, {48, 17}, {208, 17}, {179, 17}, {147, 11}, {116, 10}, {86, 9}, {45, 8}
}, {
  // LED Index to Flag
  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4
} };