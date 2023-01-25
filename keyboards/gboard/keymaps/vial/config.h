#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { B0 }
#define MATRIX_COL_PINS { B3 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* NKRO */
#define FORCE_NKRO

#define VIAL_KEYBOARD_UID {0xB0, 0x35, 0x1D, 0x05, 0x17, 0x34, 0x3C, 0xDB}

