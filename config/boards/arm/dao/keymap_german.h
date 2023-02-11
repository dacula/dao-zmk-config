/* Copyright 2015-2016 Matthias Schmidtt
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

#ifndef KEYMAP_GERMAN
#define KEYMAP_GERMAN

#include <dt-bindings/zmk/keys.h>

// normal characters
#define DE_Z Y
#define DE_Y Z

#define DE_A A
#define DE_B B
#define DE_C C
#define DE_D D
#define DE_E E
#define DE_F F
#define DE_G G
#define DE_H H
#define DE_I I
#define DE_J J
#define DE_K K
#define DE_L L
#define DE_M M
#define DE_N N
#define DE_O O
#define DE_P P
#define DE_Q Q
#define DE_R R
#define DE_S S
#define DE_T T
#define DE_U U
#define DE_V V
#define DE_W W
#define DE_X X

#define DE_0 0
#define DE_1 1
#define DE_2 2
#define DE_3 3
#define DE_4 4
#define DE_5 5
#define DE_6 6
#define DE_7 7
#define DE_8 8
#define DE_9 9

#define DE_DOT DOT
#define DE_COMM COMMA

#define DE_SS MINUS // scharf s 
#define DE_AE SQT // ä
#define DE_OE SEMI //ö
#define DE_UE LBKT // ü 

#define DE_CIRC GRAVE // accent circumflex ^ and ring °
#define DE_ACUT EQUAL // accent acute ´ and grave `
#define DE_PLUS RBKT // + and * and ~
#define DE_HASH BSLH // # and '
#define DE_LESS NON_US_BSLH // < and > and |
#define DE_MINS FSLH // - and _

// shifted characters
#define DE_RING LS(DE_CIRC) // °
#define DE_EXLM LS(1) // !
#define DE_DQOT LS(2) // "
#define DE_PARA LS(3) // §
#define DE_DLR  LS(4) // $
#define DE_PERC LS(5) // %
#define DE_AMPR LS(6) // &
#define DE_SLSH LS(7) // /
#define DE_LPRN LS(8) // (
#define DE_RPRN LS(9) // )
#define DE_EQL  LS(0) // =
#define DE_QST  LS(DE_SS) // ?
#define DE_GRV  LS(DE_ACUT) // `
#define DE_ASTR LS(DE_PLUS) // *
#define DE_QUOT LS(DE_HASH) // '
#define DE_MORE LS(DE_LESS) // >
#define DE_COLN LS(DE_DOT) // :
#define DE_SCLN LS(DE_COMM) // ;
#define DE_UNDS LS(DE_MINS) // _

// Alt Gr-ed characters
#define DE_SQ2 RA(2) // ²
#define DE_SQ3 RA(3) // ³
#define DE_LCBR RA(7) // {
#define DE_LBRC RA(8) // [
#define DE_RBRC RA(9) // ]
#define DE_RCBR RA(0) // }
#define DE_BSLS RA(DE_SS) // backslash
#define DE_AT  RA(Q) // @
#define DE_EURO RA(E) // €
#define DE_TILD RA(DE_PLUS) // ~
#define DE_PIPE RA(DE_LESS) // |

#endif