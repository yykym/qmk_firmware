/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define DYNAMIC_KEYMAP_LAYER_COUNT 4
//#define USE_MATRIX_I2C

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

/* serial driver setting */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_DRIVER SIOD0
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

/* I2C driver setting */ 
//#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP18
#define I2C1_SCL_PIN GP19

// USB connection
#define USB_VBUS_PIN GP24
#define SPLIT_HAND_PIN GP21
#define SPLIT_USB_TIMEOUT 10000      // wait 10sec
#define SPLIT_USB_TIMEOUT_POLL 25    // 25ms interval for USB check

#ifdef MOUSEKEY_ENABLE 
    #define MOUSEKEY_MOVE_DELTA 2
    //#define MOUSEKEY_TIME_TO_MAX 50
    //#define MOUSEKEY_MAX_SPEED 8
#endif

//OLED orientation
#define LEFTHAND_OLED_UPSIDEDOWN