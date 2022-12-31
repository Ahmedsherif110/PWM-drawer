/*
 * Lcd.h
 *
 * Created: 12/31/2022 8:34:54 PM
 *  Author: as588
 */ 
#ifndef LCD_H_
#define LCD_H_

#include <util\delay.h>
#include "Dio.h"
#include "Lcd_Types.h"

#define LCD_MASK				0xF0
#define NO_CSTOM_CHAR    		(8)
#define NO_CSTOM_CHAR_BYTES 	(8)

void Lcd_Init(void);
void Lcd_Cmd(lcd_Cmd_Type cmd);
void Lcd_DisplayChr(u8 chr);
void Lcd_DisplayStr(u8* str);
void Lcd_Goto_Row_Column(u8 row, u8 col);
void Lcd_DisplayNum(u16 num);
void Lcd_DisplayFloat(f64 floatNum);
void Lcd_Display2Num(u8 num);
void Lcd_Display3Num(u16 num);

#endif