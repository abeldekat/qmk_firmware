// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// Generated with:
// MIRYOKU_ALPHAS=QWERTY -e MIRYOKU_EXTRA=COLEMAKDH -e MIRYOKU_TAP=QWERTY -e MIRYOKU_NAV=INVERTEDT -e MIRYOKU_LAYERS=FLIP

// Customized miryoku babel in order to change home mods!

// MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP
// TODO: test U_BUTTON
// Changed thumb keys.
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LALT_T(KC_A),      LGUI_T(KC_S),      LSFT_T(KC_D),      LCTL_T(KC_F),      KC_G,              KC_H,              LCTL_T(KC_J),      LSFT_T(KC_K),      LGUI_T(KC_L),      LALT_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_ESC), LT(U_SYM,KC_BSPC),  LT(U_MOUSE,KC_SPC),LT(U_NAV,KC_ENT),  LT(U_MEDIA,KC_TAB),U_NP,              U_NP

// MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP
// TODO: test U_TD_U_NAV and U_TD_U_NUM
// Moved KC_PGUP and KC_DOWN to index column.
// Swapped backspace and enter. On base backspace is also the outer thumb.
#define MIRYOKU_LAYER_NAV \
KC_INS,            KC_HOME,           KC_UP,             KC_END,            KC_PGUP,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
CW_TOGG,           KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_PGDN,           U_NA,              KC_LCTL,           KC_LSFT,           KC_LGUI,           KC_LALT,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_NAV),    TD(U_TD_U_NUM),    KC_ALGR,           U_NA,              _\
U_NP,              U_NP,              KC_DEL,            KC_ENT,            KC_BSPC,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP
// TODO: Also adjust mouse layer. Swap mouse and nav thumbs.

// TODO:
// MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP

// Not used:
// MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
// MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP
