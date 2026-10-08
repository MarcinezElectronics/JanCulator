#ifndef TCA8418_H
#define TCA8418_H

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include "i2c_master.h"

// Alapértelmezett I2C cím (ADDR pin GND-re kötve: 0x34)
#define TCA8418_I2C_ADDR    0x34

// TCA8418 Regiszter címek
#define TCA8418_REG_CFG     0x01 // Configuration Register
#define TCA8418_REG_INT_STAT 0x02 // Interrupt Status Register
#define TCA8418_REG_KEY_LCK_EC 0x03 // Key Lock and Event Counter
#define TCA8418_REG_KEY_EVENT_A 0x04 // Key Event Register A (FIFO fej)
#define TCA8418_REG_KP_GPIO1 0x1D // Keypad / GPIO Select 1 (ROW0-ROW7)
#define TCA8418_REG_KP_GPIO2 0x1E // Keypad / GPIO Select 2 (COL0-COL7)
#define TCA8418_REG_KP_GPIO3 0x1F // Keypad / GPIO Select 3 (COL8-COL9)

// Könyvtár függvények
bool TCA8418_Init(uint8_t rows, uint8_t cols);
uint8_t TCA8418_GetEventsCount(void);
char TCA8418_GetKey(bool *pressed);
void TCA8418_ClearInterrupt(void);

#endif