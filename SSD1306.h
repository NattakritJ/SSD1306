/*
  SSD1306.h - Library for communicate with SSD1306 via SPI communication interface.
  Created by Nattakrit Jatupattaradit, May 14, 2021.
  Based on Arduino sketch by Instructables
  https://www.instructables.com/How-to-use-SSD1306-display-arduino-module/
*/

#ifndef SSD1306_h
#define SSD1306_h

#include "Arduino.h"

class SSD1306
{
  public:
    SSD1306(int CLK_PIN, int MOSI_PIN, int RST_PIN, int DC_PIN);
    void LEDPIN_Init(void);;
    void LED_WrDat(unsigned char data);
    void LED_WrCmd(unsigned char cmd);
    void LED_Set_Pos(unsigned char x, unsigned char y);
    void LED_Fill(unsigned char bmp_data);
    void LED_CLS(void);
    void LED_DLY_ms(unsigned int ms);
    void SetStartColumn(unsigned char d);
    void SetAddressingMode(unsigned char d);
    void SetColumnAddress(unsigned char a, unsigned char b);
    void SetPageAddress(unsigned char a, unsigned char b);
    void SetStartLine(unsigned char d);
    void SetContrastControl(unsigned char d);
    void Set_Charge_Pump(unsigned char d);
    void Set_Segment_Remap(unsigned char d);
    void Set_Entire_Display(unsigned char d);
    void Set_Inverse_Display(unsigned char d);
    void Set_Multiplex_Ratio(unsigned char d);
    void Set_Display_On_Off(unsigned char d);
    void SetStartPage(unsigned char d);
    void Set_Common_Remap(unsigned char d);
    void Set_Display_Offset(unsigned char d);
    void Set_Display_Clock(unsigned char d);
    void Set_Precharge_Period(unsigned char d);
    void Set_Common_Config(unsigned char d);
    void Set_VCOMH(unsigned char d);
    void Set_NOP(void);
    void LED_Init(void);
    void LED_P6x8Char(unsigned char x, unsigned char y, unsigned char ch);
    void LED_P6x8Str(unsigned char x, unsigned char y, char ch[]);
    void LED_P8x16Str(unsigned char x, unsigned char y, char ch[]);
    void LED_PrintBMP(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, unsigned char bmp[]);
    void LED_PrintValueC(unsigned char x, unsigned char y, char data);
    void LED_PrintValueI(unsigned char x, unsigned char y, int data);
    void LED_PrintValueFP(unsigned char x, unsigned char y, unsigned int data, unsigned char num);
    void LED_PrintValueF(unsigned char x, unsigned char y, float data, unsigned char num);
    void LED_Cursor(unsigned char cursor_column, unsigned char cursor_row);
  private:
    int _CLK_PIN, _MOSI_PIN, _RST_PIN, _DC_PIN;
};

#endif
