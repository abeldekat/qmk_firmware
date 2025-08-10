// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// Generated with:
// MIRYOKU_ALPHAS=QWERTY -e MIRYOKU_EXTRA=COLEMAKDH -e MIRYOKU_TAP=QWERTY -e MIRYOKU_NAV=INVERTEDT -e MIRYOKU_LAYERS=FLIP

// NOTE: ... Auto Shift for numbers and symbols. ...

// ... but thumb tap keys are mirrored onto some layers for use with auto-repeat ...:
// del: NAV
// backspace: NAV
// enter: NAV
// tab: FUN, NAV(added)
// space: FUN
// escape: NA

// Opposite layers:
// NUM NAV
// SYM MOUSE
// FUN MEDIA

// Important when using mini.jump:
#define CAPS_WORD_INVERT_ON_SHIFT

// Customized miryoku babel in order to change home mods!

// MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP
// Changed the tap part of thumb keys. Used to be del backspace enter - tab space escape
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LALT_T(KC_A),      LGUI_T(KC_S),      LSFT_T(KC_D),      LCTL_T(KC_F),      KC_G,              KC_H,              LCTL_T(KC_J),      LSFT_T(KC_K),      LGUI_T(KC_L),      LALT_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_ESC), LT(U_SYM,KC_BSPC),  LT(U_MOUSE,KC_SPC),LT(U_NAV,KC_ENT),  LT(U_MEDIA,KC_TAB),U_NP,              U_NP

// MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP
// Changed thumb keys.
#define MIRYOKU_LAYER_TAP \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_ESC,            KC_BSPC,           KC_SPC,            KC_ENT,            KC_TAB,            U_NP,              U_NP

// MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM_FLIP
// Dot is duplicated from the base layer...
// U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MINS,           KC_0,              KC_DOT,            U_NP,              U_NP
// MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM_FLIP
// Open Parenthesis is duplicated next to Close Parenthesis... However, using flipped, the "0" has the opening parenthesis, which is not consistent.
// Changed thumb keys.
#define MIRYOKU_LAYER_SYM \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,           \
KC_LALT,           KC_LGUI,           KC_LSFT,           KC_LCTL,           U_NA,              KC_PLUS,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_COLN,           \
U_NA,              KC_ALGR,           TD(U_TD_U_MOUSE),  TD(U_TD_U_SYM),    U_NA,              KC_PIPE,           KC_EXLM,           KC_AT,             KC_HASH,           KC_TILD,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_UNDS,           KC_RPRN,           KC_LPRN,           U_NP,              U_NP

// MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP
// Moved KC_PGUP and KC_DOWN to index column.
// Swapped backspace and enter. On the base layer backspace is also the outer thumb.
// NOTE: Not using KC_INS. Text entry overtype mode. Replace with tab.
#define MIRYOKU_LAYER_NAV \
KC_TAB,            KC_HOME,           KC_UP,             KC_END,            KC_PGUP,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
CW_TOGG,           KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_PGDN,           U_NA,              KC_LCTL,           KC_LSFT,           KC_LGUI,           KC_LALT,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_NAV),    TD(U_TD_U_NUM),    KC_ALGR,           U_NA,              _\
U_NP,              U_NP,              KC_DEL,            KC_ENT,            KC_BSPC,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP
// Moved KC_WH_U and KC_WH_D to index column.
#define MIRYOKU_LAYER_MOUSE \
U_NU,              KC_WH_L,           KC_MS_U,           KC_WH_R,           KC_WH_U,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_R,           KC_WH_D,           U_NA,              KC_LCTL,           KC_LSFT,           KC_LGUI,           KC_LALT,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_MOUSE),  TD(U_TD_U_SYM),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// #define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN_FLIP
// Thumbs: KC_TAB KC_SPC KC_APP
// #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP
// Thumbs: KC_MUTE KC_MPLY KC_MSTP

// Not used:
// MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
// MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
// MIRYOKU_LAYER_BUTTON MIRYOKU_ALTERNATIVES_BUTTON
