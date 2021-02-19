/* Copyright 2018 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1
#define _AL 2
#define _LL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
  [_BL] = LAYOUT(
  KC_P7, KC_P8  , KC_P9        , KC_NO       , KC_LGUI     , KC_Q   , KC_W        , KC_E, KC_R, KC_T  , KC_Y, KC_U , KC_I         , KC_O   , KC_P   , KC_BSPC, KC_DEL ,  \
  KC_P4, KC_P5  , KC_P6        , MO(3)       , LT(2,KC_TAB), KC_A   , KC_S        , KC_D, KC_F, KC_G  , KC_H, KC_J , KC_K         , KC_L   , KC_SCLN,        , KC_ENT ,  \
  KC_P1, KC_P2  , KC_P3        , KC_SLSH     , KC_LSFT     , KC_NO  , KC_Z        , KC_X, KC_C, KC_V  , KC_B, KC_N , KC_M         , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,  \
  KC_P0, KC_PDOT, LT(1,KC_PENT), LT(2,KC_ESC), KC_LCTL     , KC_LALT, LT(1,KC_ESC),             KC_SPC,       KC_NO, LT(2,KC_BSPC), KC_QUOT, KC_GRV , KC_ENT , KC_RCTL,

  /* Keymap _FL: Function Layer
  */
  [_FL] = LAYOUT(
  KC_TAB , KC_UP  , KC_BSPC, KC_NO  , KC_TRNS, KC_HOME, KC_UP  , KC_END , KC_PGUP, KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, \
  KC_LEFT, KC_DOWN, KC_RGHT, KC_NO  , KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO  , \
  KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, KC_TRNS,          KC_NO  , KC_BSPC, KC_DEL , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  , KC_NO  , \
  KC_EQL , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,        KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS,

  [_AL] = LAYOUT(
  KC_PSCR, KC_SLCK, KC_PAUS, KC_VOLU, KC_TRNS, KC_1   , KC_2   , KC_3   , KC_4 , KC_5   , KC_6   , KC_7   , KC_8   , KC_9, KC_0   , KC_TRNS, KC_TRNS, \
  KC_INS , KC_HOME, KC_PGUP, KC_VOLD, KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO  , KC_PAST, KC_4   , KC_5   , KC_6, KC_MINS,        , KC_PAST, \
  KC_DEL , KC_END , KC_PGDN, KC_MPLY, KC_TRNS,        , KC_LBRC, KC_RBRC, KC_NO, KC_NO  , KC_BSLS, KC_PSLS, KC_1   , KC_2, KC_3   , KC_EQL , KC_PSLS, \
  KC_CALC, KC_MSEL, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_LGUI,                 KC_TRNS,          KC_NO  , KC_TRNS, KC_0, KC_NO  , KC_TRNS, KC_TRNS,

  [_LL] = LAYOUT(
  KC_NLCK, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_NO , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  , RESET  , \
  KC_NO  , KC_NO, KC_NO, KC_NO, KC_TRNS, KC_F5  , KC_F6 , KC_F7 , KC_F8 , KC_NO , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  ,          \
  KC_NO  , KC_NO, KC_NO, KC_NO, KC_TRNS,          KC_F9 , KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  , KC_NO  , \
  KC_NO  , KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_ESC,                 KC_TRNS,       KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS,
};
