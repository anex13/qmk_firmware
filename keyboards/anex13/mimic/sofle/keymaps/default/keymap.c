/* Copyright 2023 Brian Low
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

enum layers {
    LAYER_ALPHA = 0,
    LAYER_NAV,
    LAYER_NUM,
    LAYER_MEDIA
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * ALPHA
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  [{  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+------|
 * | LCTL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | Del  | L2   | /Enter  /       \Space \  |  L1  | Bspc | RGUI | Menu |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
 
[LAYER_ALPHA] = LAYOUT(
    KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE, KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
               KC_LGUI, KC_LALT, KC_DEL,  MO(2),   KC_ENT,                 KC_SPC,  MO(1),   KC_BSPC, KC_APP, KC_RCTL
),

 
[LAYER_NAV] = LAYOUT(
    KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_EQL,
    KC_TAB,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                  KC_NO,   KC_HOME, KC_UP,   KC_END,  KC_F12,   KC_RBRC,
    KC_LSFT,   KC_NO,   KC_BTN2, KC_BTN3, KC_BTN1, KC_NO,                  KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_BSLS,
    KC_LCTL,   KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_FIND, KC_NO, KC_NO,  KC_NO,   KC_PGUP, KC_NO,   KC_PGDN, KC_NO,   KC_RSFT,
               KC_LGUI, KC_LALT, KC_ESC,  MO(3),   KC_ENT,                 KC_SPC,  KC_TRNS, KC_RGUI, KC_APP,  KC_RCTL
),

 
[LAYER_NUM] = LAYOUT(
    KC_ESC,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, KC_PSCR, KC_DEL,
    KC_TAB,    KC_NO,   KC_MAIL, KC_MSEL, KC_CALC, KC_MYCM,                KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_NO,   KC_NO,
    KC_LSFT,   KC_NO,   KC_BTN2, KC_BTN3, KC_BTN1, KC_NO,                  KC_P4,   KC_P5,   KC_P6,   KC_PCMM, KC_NO,   KC_NO,
    KC_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_NO,   KC_RSFT,
               KC_LGUI, KC_LALT, KC_NO,   KC_TRNS, KC_PENT,                KC_SPC,  MO(3),   KC_P0,   KC_PDOT, KC_RCTL
),

[LAYER_MEDIA] = LAYOUT(
    KC_F13,    KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,                 KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
    RGB_HUI,   RGB_SAI, RGB_VAI, RGB_MOD, RGB_SPI, KC_NO,                  KC_NO,   KC_NO,   KC_VOLU, KC_NO,   KC_BRIU, KC_NO,
    RGB_HUD,   RGB_SAD, RGB_VAD, RGB_RMOD, RGB_SPD, KC_NO,                 KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_BRID, KC_NO,
    RGB_TOG,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_MUTE, KC_NO,  KC_NO,   KC_NO,   KC_VOLD, KC_NO,   KC_NO,   KC_NO,
               KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_NO,                  KC_NO,   KC_TRNS, KC_NO,   KC_NO,   KC_NO
),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [LAYER_ALPHA] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [LAYER_NAV] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [LAYER_NUM] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [LAYER_MEDIA] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),          ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif
