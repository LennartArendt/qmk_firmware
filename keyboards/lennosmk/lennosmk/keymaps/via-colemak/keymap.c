// Copyright 2025 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
        _______, MO(2), KC_LBRC, KC_RBRC, KC_SPC, KC_HOME,      KC_END,  KC_DEL, KC_GRV,   KC_EQL, MO(1),   _______,
        _______, _______, _______, _______, KC_ENT, KC_GRV,    KC_LGUI,  KC_RALT, _______, _______, _______, _______
    ),
    [1] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    RM_NEXT,    RM_TOGG,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
        _______, MO(2), KC_LBRC, KC_RBRC, KC_SPC, KC_HOME,      KC_END,  KC_DEL, KC_GRV,   KC_EQL, _______, _______,
        _______, _______, _______, _______, KC_ENT, KC_GRV,    KC_LGUI,  KC_RALT, _______, _______, _______, _______
    )
    
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 0, 1, 2, 3, 4, 5 },
  { 6, 7, 8, 9, 10, 11 },
  { 12, 13, 14, 15, 16, 17 },
  { 18, 19, 20, 21, 22, 23 },
  { 24, 25, 27, 28, 26, NO_LED },
  { 29, 30, NO_LED, NO_LED, NO_LED, NO_LED },

  { 61, 60, 59, 58, 57, 56 },
  { 55, 54, 53, 52, 51, 50 },
  { 49, 48, 47, 46, 45, 44 },
  { 43, 42, 41, 40, 39, 38 },
  { 37, 36, 34, 33, 35, NO_LED },
  { 32, 31, NO_LED, NO_LED, NO_LED, NO_LED }
 
}, {
  // LED Index to Physical Position
    {84 ,  2},{68 ,  2},{52 ,  1},{35 ,  2},{18 ,  9},{1  ,  9},
    {86 , 13},{70 , 13},{54 , 12},{37 , 13},{19 , 19},{1  , 20},
    {87 , 25},{70 , 24},{55 , 23},{37 , 24},{19 , 31},{1  , 31},
    {85 , 36},{69 , 35},{54 , 34},{36 , 35},{18 , 42},{1  , 42},
    {96 , 54},{83 , 49},{70 , 46},{52 , 44},{34 , 45},
    {87 , 62},{75 , 58},
    {149, 58},{137, 62},{189, 45},{172, 44},{154, 46},{140, 49},
    {128, 54},{223, 42},{205, 42},{188, 35},{170, 34},{154, 35},
    {139, 36},{223, 31},{205, 31},{187, 24},{169, 23},{153, 24},
    {137, 25},{223, 20},{205, 19},{187, 13},{169, 12},{153, 13},
    {137, 13},{223, 9},{206, 9},{188, 2},{171, 1},
    {156, 2},{140, 2}
  }, {
  // LED Index to Flag
  4,  4,  4,  4,  4,  4,
  4,  4,  4,  4,  4,  4,
  4,  4,  4,  4,  4,  4,
  4,  4,  4,  4,  4,  4,
  4,  4,  4,  4,  4, 
  4,  4,
  4,  4,  4,  4,  4,  4,
  4,  4,  4,  4,  4,  4,
  4,  4,  4,  4,  4,  4,
  4,  4,  4,  4,  4,  4,
  4,  4,  4,  4,  4, 
  4,  4
} };


//void keyboard_post_init_user(void) {
//  debug_matrix=true;
//  debug_enable=true;
//}