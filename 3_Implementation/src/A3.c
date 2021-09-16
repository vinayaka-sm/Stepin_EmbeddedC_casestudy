#include <avr/io.h>
#include<util/delay.h>
#include "A3.h"
#include "A2.h"
#define F_CPU 1600000UL

char A3()
{
        char Temp[20];
        char start[]="Temperature :)";
        TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
        TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);//choosing 64 as prescalar as a function oc clock
        DDRB|=(1<<PB1); //set portB
        A2();
        if((ADC>=0) && (ADC<=209))
        {
        CLEAR_LCD();
        OCR1A=205;
        Temp[0] = '2';
        Temp[1] = '0';
        Temp[2] = 223;
        Temp[3] = 'C';
        Temp[4] = ' ';
        Temp[5] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(20);
        _delay_ms(200);
        }
        else if ((ADC>=210) && (ADC<=509))
        {
        CLEAR_LCD();
        OCR1A=410;
        Temp[0] = '2';
        Temp[1] = '5';
        Temp[2] = 223;
        Temp[3] = 'C';
        Temp[4] = ' ';
        Temp[5] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(200);
        }
        else if((ADC>=510) && (ADC<=709))
        {
        CLEAR_LCD();
        OCR1A=717;
        Temp[0] = '2';
        Temp[1] = '9';
        Temp[2] = 223;
        Temp[3] = 'C';
        Temp[4] = ' ';
        Temp[5] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(200);
        }
        else if((ADC>=710) && (ADC<=1024))
        {
        CLEAR_LCD();
        OCR1A=974;
        Temp[0] = '3';
        Temp[1] = '3';
        Temp[2] = 223;
        Temp[3] = 'C';
        Temp[4] = ' ';
        Temp[5] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(200);
        }

}

