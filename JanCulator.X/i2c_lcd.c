/*
 * File:   i2c_lcd.c
 * Author: admin
 *
 * Created on October 2, 2026, 1:13 PM
 */
#include "i2c_lcd.h"

static uint8_t backlight_state = LCD_BACKLIGHT;
static uint8_t i2c_tx_buffer[1];

static void I2C_Write_Byte(uint8_t addr, uint8_t data) {
    i2c_tx_buffer[0] = data;

    // 1. Busz nyitása az adott címmel
    if (I2C_Open(addr) == I2C_NOERR) {
        // 2. Puffer hozzárendelése
        I2C_SetBuffer(i2c_tx_buffer, 1);
        
        // 3. Írás elindítása (a fsm megvárja a küldés végét)
        I2C_MasterWrite();
        
        // 4. Busz lezárása
        I2C_Close();
    }
}

static void LCD_Write_Nibble(uint8_t nibble, uint8_t mode) {
    uint8_t data = (nibble & 0xF0) | mode | backlight_state;
    
    // EN High -> Impulzus indítása
    I2C_Write_Byte(LCD_I2C_ADDR, data | LCD_EN);
    __delay_us(1);
    
    // EN Low -> Adat beolvasása az LCD által
    I2C_Write_Byte(LCD_I2C_ADDR, data & ~LCD_EN);
    __delay_us(50);
}

static void LCD_Send(uint8_t value, uint8_t mode) {
    LCD_Write_Nibble(value & 0xF0, mode);
    LCD_Write_Nibble((uint8_t)(value << 4), mode);
}

void LCD_Command(uint8_t cmd) {
    LCD_Send(cmd, 0);
    if (cmd == 0x01 || cmd == 0x02) {
        __delay_ms(2);
    }
}

void LCD_Char(char data) {
    LCD_Send((uint8_t)data, LCD_RS);
}

void LCD_String(const char *str) {
    while (*str) {
        LCD_Char(*str++);
    }
}

void LCD_SetCursor(uint8_t row, uint8_t col) {
    uint8_t address = (row == 0) ? (0x80 + col) : (0xC0 + col);
    LCD_Command(address);
}

void LCD_Clear(void) {
    LCD_Command(0x01);
}

void LCD_Init(void) {
    __delay_ms(50);
    
    LCD_Write_Nibble(0x30, 0);
    __delay_ms(5);
    LCD_Write_Nibble(0x30, 0);
    __delay_us(150);
    LCD_Write_Nibble(0x30, 0);
    LCD_Write_Nibble(0x20, 0);
    
    LCD_Command(0x28); 
    LCD_Command(0x0C); 
    LCD_Clear();
    LCD_Command(0x06); 
}

void LCD_Typewriter(uint8_t row, uint8_t col, const char *str, uint16_t delay_ms_per_char) {
    // 1. Pozicionálás a kezd?pontra
    LCD_SetCursor(row, col);
    
    // 2. Villogó kurzor bekapcsolása
    LCD_Command(LCD_CURSOR_BLINK_ON); 
    
    // 3. Karaktereikénti kiírás késleltetéssel
    while (*str != '\0') {
        LCD_Char(*str);
        delay_ms(delay_ms_per_char); // Pl. 100-200 ms karakterenként
        str++;
    }
}

void delay_ms(uint16_t ms) {
    while (ms > 0) {
        __delay_ms(1); // Mivel az 1 konstans, az XC8 elfogadja
        ms--;
    }
}