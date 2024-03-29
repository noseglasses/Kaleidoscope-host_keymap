/* -*- mode: c++ -*-
 * Kaleidoscope-host_keymap -- A utility for the generation 
 *                          of Kaleidoscope host_keymap files 
 * Copyright (C) 2019 noseglasses (shinynoseglasses@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

// Output of evtest for a standard (pc105) keyboard

//     Event code 1 (KEY_ESC)
//     Event code 2 (KEY_1)
//     Event code 3 (KEY_2)
//     Event code 4 (KEY_3)
//     Event code 5 (KEY_4)
//     Event code 6 (KEY_5)
//     Event code 7 (KEY_6)
//     Event code 8 (KEY_7)
//     Event code 9 (KEY_8)
//     Event code 10 (KEY_9)
//     Event code 11 (KEY_0)
//     Event code 12 (KEY_MINUS)
//     Event code 13 (KEY_EQUAL)
//     Event code 14 (KEY_BACKSPACE)
//     Event code 15 (KEY_TAB)
//     Event code 16 (KEY_Q)
//     Event code 17 (KEY_W)
//     Event code 18 (KEY_E)
//     Event code 19 (KEY_R)
//     Event code 20 (KEY_T)
//     Event code 21 (KEY_Y)
//     Event code 22 (KEY_U)
//     Event code 23 (KEY_I)
//     Event code 24 (KEY_O)
//     Event code 25 (KEY_P)
//     Event code 26 (KEY_LEFTBRACE)
//     Event code 27 (KEY_RIGHTBRACE)
//     Event code 28 (KEY_ENTER)
//     Event code 29 (KEY_LEFTCTRL)
//     Event code 30 (KEY_A)
//     Event code 31 (KEY_S)
//     Event code 32 (KEY_D)
//     Event code 33 (KEY_F)
//     Event code 34 (KEY_G)
//     Event code 35 (KEY_H)
//     Event code 36 (KEY_J)
//     Event code 37 (KEY_K)
//     Event code 38 (KEY_L)
//     Event code 39 (KEY_SEMICOLON)
//     Event code 40 (KEY_APOSTROPHE)
//     Event code 41 (KEY_GRAVE)
//     Event code 42 (KEY_LEFTSHIFT)
//     Event code 43 (KEY_BACKSLASH)
//     Event code 44 (KEY_Z)
//     Event code 45 (KEY_X)
//     Event code 46 (KEY_C)
//     Event code 47 (KEY_V)
//     Event code 48 (KEY_B)
//     Event code 49 (KEY_N)
//     Event code 50 (KEY_M)
//     Event code 51 (KEY_COMMA)
//     Event code 52 (KEY_DOT)
//     Event code 53 (KEY_SLASH)
//     Event code 54 (KEY_RIGHTSHIFT)
//     Event code 55 (KEY_KPASTERISK)
//     Event code 56 (KEY_LEFTALT)
//     Event code 57 (KEY_SPACE)
//     Event code 58 (KEY_CAPSLOCK)
//     Event code 59 (KEY_F1)
//     Event code 60 (KEY_F2)
//     Event code 61 (KEY_F3)
//     Event code 62 (KEY_F4)
//     Event code 63 (KEY_F5)
//     Event code 64 (KEY_F6)
//     Event code 65 (KEY_F7)
//     Event code 66 (KEY_F8)
//     Event code 67 (KEY_F9)
//     Event code 68 (KEY_F10)
//     Event code 69 (KEY_NUMLOCK)
//     Event code 70 (KEY_SCROLLLOCK)
//     Event code 71 (KEY_KP7)
//     Event code 72 (KEY_KP8)
//     Event code 73 (KEY_KP9)
//     Event code 74 (KEY_KPMINUS)
//     Event code 75 (KEY_KP4)
//     Event code 76 (KEY_KP5)
//     Event code 77 (KEY_KP6)
//     Event code 78 (KEY_KPPLUS)
//     Event code 79 (KEY_KP1)
//     Event code 80 (KEY_KP2)
//     Event code 81 (KEY_KP3)
//     Event code 82 (KEY_KP0)
//     Event code 83 (KEY_KPDOT)
//     Event code 85 (KEY_ZENKAKUHANKAKU)
//     Event code 86 (KEY_102ND)
//     Event code 87 (KEY_F11)
//     Event code 88 (KEY_F12)
//     Event code 89 (KEY_RO)
//     Event code 90 (KEY_KATAKANA)
//     Event code 91 (KEY_HIRAGANA)
//     Event code 92 (KEY_HENKAN)
//     Event code 93 (KEY_KATAKANAHIRAGANA)
//     Event code 94 (KEY_MUHENKAN)
//     Event code 95 (KEY_KPJPCOMMA)
//     Event code 96 (KEY_KPENTER)
//     Event code 97 (KEY_RIGHTCTRL)
//     Event code 98 (KEY_KPSLASH)
//     Event code 99 (KEY_SYSRQ)
//     Event code 100 (KEY_RIGHTALT)
//     Event code 102 (KEY_HOME)
//     Event code 103 (KEY_UP)
//     Event code 104 (KEY_PAGEUP)
//     Event code 105 (KEY_LEFT)
//     Event code 106 (KEY_RIGHT)
//     Event code 107 (KEY_END)
//     Event code 108 (KEY_DOWN)
//     Event code 109 (KEY_PAGEDOWN)
//     Event code 110 (KEY_INSERT)
//     Event code 111 (KEY_DELETE)
//     Event code 113 (KEY_MUTE)
//     Event code 114 (KEY_VOLUMEDOWN)
//     Event code 115 (KEY_VOLUMEUP)
//     Event code 116 (KEY_POWER)
//     Event code 117 (KEY_KPEQUAL)
//     Event code 119 (KEY_PAUSE)
//     Event code 121 (KEY_KPCOMMA)
//     Event code 122 (KEY_HANGUEL)
//     Event code 123 (KEY_HANJA)
//     Event code 124 (KEY_YEN)
//     Event code 125 (KEY_LEFTMETA)
//     Event code 126 (KEY_RIGHTMETA)
//     Event code 127 (KEY_COMPOSE)
//     Event code 128 (KEY_STOP)
//     Event code 129 (KEY_AGAIN)
//     Event code 130 (KEY_PROPS)
//     Event code 131 (KEY_UNDO)
//     Event code 132 (KEY_FRONT)
//     Event code 133 (KEY_COPY)
//     Event code 134 (KEY_OPEN)
//     Event code 135 (KEY_PASTE)
//     Event code 136 (KEY_FIND)
//     Event code 137 (KEY_CUT)
//     Event code 138 (KEY_HELP)
//     Event code 183 (KEY_F13)
//     Event code 184 (KEY_F14)
//     Event code 185 (KEY_F15)
//     Event code 186 (KEY_F16)
//     Event code 187 (KEY_F17)
//     Event code 188 (KEY_F18)
//     Event code 189 (KEY_F19)
//     Event code 190 (KEY_F20)
//     Event code 191 (KEY_F21)
//     Event code 192 (KEY_F22)
//     Event code 193 (KEY_F23)
//     Event code 194 (KEY_F24)
//     Event code 240 (KEY_UNKNOWN)

#define HID_CODE_EVENT_CODE_AND_NAME(OP) \
   /* OP(HID CODE, EVENT_CODE, EVENT_NAME) */ \
   OP(0x29,  1, KEY_ESC) \
   OP(0x3a, 59, KEY_F1) \
   OP(0x3b, 60, KEY_F2) \
   OP(0x3c, 61, KEY_F3) \
   OP(0x3d, 62, KEY_F4) \
   OP(0x3e, 63, KEY_F5) \
   OP(0x3f, 64, KEY_F6) \
   OP(0x40, 65, KEY_F7) \
   OP(0x41, 66, KEY_F8) \
   OP(0x42, 67, KEY_F9) \
   OP(0x43, 68, KEY_F10) \
   OP(0x44, 87, KEY_F11) \
   OP(0x45, 88, KEY_F12) \
   OP(0x46, 99, KEY_SYSRQ) \
   OP(0x47, 70, KEY_SCROLLLOCK) \
   OP(0x48, 119, KEY_PAUSE) \
   OP(0x35, 41, KEY_GRAVE) \
   OP(0x1e, 2, KEY_1) \
   OP(0x1f, 3, KEY_2) \
   OP(0x20, 4, KEY_3) \
   OP(0x21, 5, KEY_4) \
   OP(0x22, 6, KEY_5) \
   OP(0x23, 7, KEY_6) \
   OP(0x24, 8, KEY_7) \
   OP(0x25, 9, KEY_8) \
   OP(0x26, 10, KEY_9) \
   OP(0x27, 11, KEY_0) \
   OP(0x2d, 12, KEY_MINUS) \
   OP(0x2e, 13, KEY_EQUAL) \
   OP(0x2a, 14, KEY_BACKSPACE) \
   OP(0x49, 110, KEY_INSERT) \
   OP(0x4a, 102, KEY_HOME) \
   OP(0x4b, 104, KEY_PAGEUP) \
   OP(0x53, 69, KEY_NUMLOCK) \
   OP(0x54, 98, KEY_KPSLASH) \
   OP(0x55, 55, KEY_KPASTERISK) \
   OP(0x56, 74, KEY_KPMINUS) \
   OP(0x2b, 15, KEY_TAB) \
   OP(0x14, 16, KEY_Q) \
   OP(0x1a, 17, KEY_W) \
   OP(0x08, 18, KEY_E) \
   OP(0x15, 19, KEY_R) \
   OP(0x17, 20, KEY_T) \
   OP(0x1c, 21, KEY_Y) \
   OP(0x18, 22, KEY_U) \
   OP(0x0c, 23, KEY_I) \
   OP(0x12, 24, KEY_O) \
   OP(0x13, 25, KEY_P) \
   OP(0x2f, 26, KEY_LEFTBRACE) \
   OP(0x30, 27, KEY_RIGHTBRACE) \
   OP(0x28, 28, KEY_ENTER) \
   OP(0x4c, 111, KEY_DELETE) \
   OP(0x4d, 107, KEY_END) \
   OP(0x4e, 109, KEY_PAGEDOWN) \
   OP(0x5f, 71, KEY_KP7) \
   OP(0x60, 72, KEY_KP8) \
   OP(0x61, 73, KEY_KP9) \
   OP(0x57, 78, KEY_KPPLUS) \
   OP(0x39, 58, KEY_CAPSLOCK) \
   OP(0x04, 30, KEY_A) \
   OP(0x16, 31, KEY_S) \
   OP(0x07, 32, KEY_D) \
   OP(0x09, 33, KEY_F) \
   OP(0x0a, 34, KEY_G) \
   OP(0x0b, 35, KEY_H) \
   OP(0x0d, 36, KEY_J) \
   OP(0x0e, 37, KEY_K) \
   OP(0x0f, 38, KEY_L) \
   OP(0x33, 39, KEY_SEMICOLON) \
   OP(0x34, 40, KEY_APOSTROPHE) \
   OP(0x32, 43, KEY_BACKSLASH) \
   OP(0x5c, 75, KEY_KP4) \
   OP(0x5d, 76, KEY_KP5) \
   OP(0x5e, 77, KEY_KP6) \
   OP(0xe1, 42, KEY_LEFTSHIFT) \
   OP(0x64, 86, KEY_102ND) \
   OP(0x1d, 44, KEY_Z) \
   OP(0x1b, 45, KEY_X) \
   OP(0x06, 46, KEY_C) \
   OP(0x19, 47, KEY_V) \
   OP(0x05, 48, KEY_B) \
   OP(0x11, 49, KEY_N) \
   OP(0x10, 50, KEY_M) \
   OP(0x36, 51, KEY_COMMA) \
   OP(0x37, 52, KEY_DOT) \
   OP(0x38, 53, KEY_SLASH) \
   OP(0xe5, 54, KEY_RIGHTSHIFT) \
   OP(0x52, 103, KEY_UP) \
   OP(0x59, 79, KEY_KP1) \
   OP(0x5a, 80, KEY_KP2) \
   OP(0x5b, 81, KEY_KP3) \
   OP(0x58, 96, KEY_KPENTER) \
   OP(0xe0, 29, KEY_LEFTCTRL) \
   OP(0xe3, 125, KEY_LEFTMETA) \
   OP(0xe2, 56, KEY_LEFTALT) \
   OP(0x2c, 57, KEY_SPACE) \
   OP(0xe6, 100, KEY_RIGHTALT) \
   OP(0xe7, 126, KEY_RIGHTMETA) \
   OP(0x65, 127, KEY_COMPOSE) \
   OP(0xe4, 97, KEY_RIGHTCTRL) \
   OP(0x50, 105, KEY_LEFT) \
   OP(0x51, 108, KEY_DOWN) \
   OP(0x4f, 106, KEY_RIGHT) \
   OP(0x62, 82, KEY_KP0) \
   OP(0x63, 83, KEY_KPDOT)
