// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef I2C_LCD_H
#define I2C_LCD_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>
#include <stdbool.h>
#include "mcc_generated_files/mcc.h" // MCC rendszerelemek elérése
#include "mcc_generated_files/i2c_master.h" // Közvetlenül az I2C master fejléc bevonása

#define LCD_I2C_ADDR 0x27 // PCF8574 I2C cím (ha nem m?ködik, próbáld 0x3F-re)

#define LCD_RS         0x01
#define LCD_RW         0x02
#define LCD_EN         0x04
#define LCD_BACKLIGHT  0x08

#define LCD_CURSOR_BLINK_ON  0x0F
#define LCD_CURSOR_OFF       0x0C

void LCD_Init(void);
void LCD_Command(uint8_t cmd);
void LCD_Char(char data);
void LCD_String(const char *str);
void LCD_SetCursor(uint8_t row, uint8_t col);
void LCD_Clear(void);
void LCD_Typewriter(uint8_t row, uint8_t col, const char *str, uint16_t delay_ms_per_char);
void delay_ms(uint16_t ms); //Az LCD_Typewriter függvényhez kell, mert csak konstans értékeket fogad el a fordító a __delay_ms-ben

#endif