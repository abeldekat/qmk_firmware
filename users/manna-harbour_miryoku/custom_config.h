// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// ... but thumb tap keys are mirrored onto some layers for use with auto-repeat ...:
// del: NAV
// backspace: NAV
// enter: NAV
// tab: FUN
// space: FUN
// escape: NA

// Opposite layers
// NUM NAV
// SYM MOUSE
// FUN MEDIA

// Important when using mini.jump:
#define CAPS_WORD_INVERT_ON_SHIFT

// Customized miryoku babel in order to change home mods!

// MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
// Changed the tap part of thumb keys. Used to be esc spc tab - ent bspc del
// Also flipped mouse and nav to ensure left thumb rests on nav.
// For symmetry also flipped num and sym.
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LALT_T(KC_A),      LGUI_T(KC_R),      LSFT_T(KC_S),      LCTL_T(KC_T),      KC_G,              KC_M,              LCTL_T(KC_N),      LSFT_T(KC_E),      LGUI_T(KC_I),      LALT_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_DEL),LT(U_MOUSE,KC_ENT),LT(U_NAV,KC_BSPC), LT(U_NUM,KC_SPC),  LT(U_SYM,KC_ESC),  LT(U_FUN,KC_TAB),  U_NP,              U_NP

// TODO: MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY thumb keys

// MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM
// Dot is duplicated from the base layer...

// MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM
// Open Parenthesis is duplicated next to Close Parenthesis...

// MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_VI
// Swapped backspace and enter. On the base layer backspace is also the outer thumb.
#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LALT,           KC_LGUI,           KC_LSFT,           KC_LCTL,           U_NA,              KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           CW_TOGG,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BSPC,           KC_ENT,            KC_DEL,            U_NP,              U_NP

// MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE
// TODO: Move KC_WH_U and KC_WH_D to index column?

// #define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN
// #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA

// Not used:
// MIRYOKU_LAYER_BUTTON MIRYOKU_ALTERNATIVES_BUTTON
// MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH
