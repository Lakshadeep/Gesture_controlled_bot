#include <avr/io.h>
#define F_CPU 12000000
#include <util/delay.h>
#include "adc.h"				//header file for ADC
#include "lcd118010.h"
#include "uart.h"

int main(void)
{
 int x,y,z;
 
 adc_init();					//initialization of ADC
 lcd_init();
 uart_init();
 while(1)
  {
   lcd_gotoxy(0,0);
    lcd_showvalue(getdata(0));	
   lcd_char(',');
    lcd_showvalue(getdata(1));	
   lcd_char(',');
    lcd_showvalue(getdata(2));	
   lcd_char(',');
   
      
   x=getdata(0);                                                                          
   y=getdata(1);
   z=getdata(2);


 
  if ((y>78 && y< 90) && (x>91  && x<110))
  {
     uart_char('5');
     lcd_gotoxy(1,1);
     lcd_showvalue('5');
  }
  else if ((y>72 && y<=78)  && (x>95  && x<110))
  {
     uart_char('6');
     lcd_gotoxy(1,1);
     lcd_showvalue('6');
  }
  else if ((y>64 && y<=72)  && (x>95  && x<110))
  {
     uart_char('7');
     lcd_gotoxy(1,1);
     lcd_showvalue('7');
  }
  
  else if ((y>56 && y<=64)  && (x>95  && x<110))
  {
     uart_char('8');
     lcd_gotoxy(1,1);
     lcd_showvalue('8');
  }
  else if ((y>48 && y<=56)  && (x>95  && x<110))
  {
     uart_char('9');
     lcd_gotoxy(1,1);
     lcd_showvalue('9');
  }
 
  else if ((y>90 && y<=96)  && (x>95  && x<110))
  {
     uart_char('1');
     lcd_gotoxy(1,1);
     lcd_showvalue('1');
  }
  else if ((y>96 && y<=102)  && (x>95  && x<110))
  {
     uart_char('2');
     lcd_gotoxy(1,1);
     lcd_showvalue('2');
  }
  else if ((y>102 && y<=108)  && (x>95  && x<110))
  {
     uart_char('3');
     lcd_gotoxy(1,1);
     lcd_showvalue('3');
  }
  else if ((y>108 && y<=116)  && (x>95  && x<110))
  {
     uart_char('4');
     lcd_gotoxy(1,1);
     lcd_showvalue('4');
  }
  else if ((x>110 && x<=118)  && (y>75  && y<90))
  {
     uart_char('p');
     lcd_gotoxy(1,1);
     lcd_showvalue('p');
  }
  else if ((x>118 && x<=124)  && (y>75  && y<90))
  {
     uart_char('q');
     lcd_gotoxy(1,1);
     lcd_showvalue('q');
  }
  else if ((x>124 && x<=138)  && (y>75  && y<90))
  {
     uart_char('r');
     lcd_gotoxy(1,1);
     lcd_showvalue('r');
  }
  else if ((x>138 && x<=144)  && (y>75  && y<90))
  {
     uart_char('s');
     lcd_gotoxy(1,1);
     lcd_showvalue('s');
  }
  else if ((x>85 && x<=89)  && (y>75  && y<90))
  {
     uart_char('a');
     lcd_gotoxy(1,1);
     lcd_showvalue('a');
  }
  else if ((x>77 && x<=85)  && (y>75  && y<90))
  {
     uart_char('b');
     lcd_gotoxy(1,1);
     lcd_showvalue('b');
  }
  else if ((x>69 && x<=77) && (y>75  && y<90))
  {
     uart_char('c');
     lcd_gotoxy(1,1);
     lcd_showvalue('c');
  
  }
  else if ((x>58 && x<=69) && (y>75  && y<90))
  {
     uart_char('d');
     lcd_gotoxy(1,1);
     lcd_showvalue('d');
  
  }
 
  }
}
