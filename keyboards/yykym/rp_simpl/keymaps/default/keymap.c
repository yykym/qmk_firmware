// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┼───┼───┼───┤       ├───┼───┼───┼───┴───┘
      *         │ 1 │ 2 │ 3 │       │ 4 │ 5 │ 6 │
      *         └───┴───┴───┘       └───┴───┴───┘
      */


    [0] = LAYOUT_split_3x5_3(
                                LALT_T(KC_Q), KC_W, KC_E, KC_R, KC_T,     KC_Y, KC_U, KC_I, KC_O, RALT_T(KC_P),
                                LCTL_T(KC_A), KC_S, KC_D, KC_F, KC_G,     KC_H, KC_J, KC_K, KC_L, RCTL_T(KC_SCLN),
                                LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B,     KC_N, KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH),
                                              KC_LGUI, MO(1), KC_SPC,     KC_NO, MO(2), KC_ESC
    ),

    [1] = LAYOUT_split_3x5_3(
                                LALT_T(KC_1), KC_2, KC_3, KC_4, KC_5,              KC_6, KC_7, KC_8, KC_9, RALT_T(KC_0),
                                LCTL_T(KC_TAB), KC_MINS, KC_EQL, KC_LNG2, KC_LNG1, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, RCTL_T(KC_BSPC),
                                KC_LSFT, KC_GRV, KC_NO, KC_NO, KC_NO,              KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_TRNS,
                                              KC_TRNS, KC_NO, KC_TRNS,         KC_ENT, MO(3), KC_TRNS
    ),

    [2] = LAYOUT_split_3x5_3(
                                LALT_T(KC_F1), KC_F2, KC_F3, KC_F4, KC_F5,    KC_F6, KC_F7, KC_F8, KC_F9, RALT_T(KC_F10),
                                KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO,      KC_SCLN, KC_QUOT, KC_DOT, KC_LBRC, RCTL_T(KC_RBRC),
                                KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_COMM, KC_BSLS, KC_TRNS, 
                                                  KC_TRNS, MO(3), KC_TRNS,    KC_TRNS, KC_NO, KC_TRNS
    ),

    [3] = LAYOUT_split_3x5_3(
                                LALT_T(KC_F11), KC_F12, KC_NO, KC_NO, KC_APP,        KC_NO, KC_NO, KC_INS, KC_NO, RALT_T(KC_PSCR),
                                KC_TRNS, KC_SCRL, LCA(KC_DEL), MS_BTN1, MS_BTN2,    MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_DEL,
                                KC_TRNS, KC_NO, KC_CAPS, UG_VALU, UG_VALD,          UG_TOGG, UG_NEXT, UG_HUEU, UG_SATU, RSFT_T(UG_SATD),
                                                KC_NO, KC_NO, KC_NO,                KC_NO, KC_NO, KC_NO
    )
};