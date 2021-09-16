#include <avr/io.h>
#include "A2.h"
#define _A1_h_
#include <util/delay.h>
void LCD_CMD( unsigned char command )
{
	PORT_B = (PORT_B & 0x0F) | (command & 0xF0); // Taking Upper nibble only
	PORT_B &= ~ (1<<LCD_RS); // Making LCD_RS=0
	PORT_B |= (1<<LCD_EN); // Enabling EN=1
	_delay_us(5);
	PORT_B &= ~ (1<<LCD_EN);

	_delay_us(250);

	PORT_B = (PORT_B & 0x0F) | (command << 4); //Taking Lower nibble only
	PORT_B |= (1<<LCD_EN);
	_delay_us(5);
	PORT_B &= ~ (1<<LCD_EN);
	_delay_ms(50);
}

void LCD_CHAR_WISE( unsigned char ch )
{
	PORT_B = (PORT_B & 0x0F) | (ch & 0xF0); /* sending upper nibble */
	PORT_B |= (1<<LCD_RS);		/* LCD_RS=1, ch reg. */
	PORT_B|= (1<<LCD_EN);
	_delay_us(5);
	PORT_B &= ~ (1<<LCD_EN);

	_delay_us(250);

	PORT_B = (PORT_B & 0x0F) | (ch << 4);
	PORT_B |= (1<<LCD_EN);
	_delay_us(5);
	PORT_B &= ~ (1<<LCD_EN);
	_delay_ms(50);
}

void LCD_INITIALIZATION(void)
{
	LCD_DIRECTION = 0xFF; // LCD port as output
	_delay_ms(50);

	LCD_CMD(0x02);	// 4 bit LCD
	LCD_CMD(0x28);  // 5x7 Matrix(2 line)
	LCD_CMD(0x0c);  // Display On cursor Off
	LCD_CMD(0x06);  // Increment cursor
	LCD_CMD(0x01);  // LCD Clear
	_delay_ms(5);
}
void LCD_DISPLAY (char *temperature_value)
{
	int Index;
	for(Index=0;temperature_value[Index]!=0;Index++)
	{
		LCD_CHAR_WISE(temperature_value[Index]);
	}
}
void CLEAR_LCD()
{
	LCD_CMD (0x01);	// LCD Clear
	_delay_ms(50);
	LCD_CMD (0x80);	// cursor back to start position
}
void  InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN) | (7<<ADPS0);
}
uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return (ADC);
}
void A2()
{
           InitADC();
           uint16_t temp=0;
           temp=ReadADC(0);  //select channel 0
          _delay_ms(200);
}
