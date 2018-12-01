/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.3 Standard
Automatic Program Generator
© Copyright 1998-2011 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 12/2/2018
Author  : Handiko Gesang
Company : SDL Labs
Comments: 


Chip type               : ATmega16A
Program type            : Application
AVR Core Clock frequency: 4.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*****************************************************/

#include <mega16a.h>
#include <delay.h>

#define PTT_SIG PIND.3

#define PTT_LED PORTD.2
#define EVENT_1 PORTA.4
#define EVENT_2 PORTA.5
#define EVENT_3 PORTA.6
#define EVENT_4 PORTA.7

void blink_leds(int time)
{
        PTT_LED=1;
        EVENT_1=1;
        EVENT_2=1;
        EVENT_3=1;
        EVENT_4=1; 
        
        delay_ms(time);
        
        PTT_LED=0;
        EVENT_1=0;
        EVENT_2=0;
        EVENT_3=0;
        EVENT_4=0; 
        
        delay_ms(time);
}

void main(void)
{
        // Func7=Out Func6=Out Func5=Out Func4=Out Func3=In Func2=In Func1=In Func0=In 
        // State7=0 State6=0 State5=0 State4=0 State3=T State2=T State1=T State0=T 
        PORTA=0x00;
        DDRA=0xF0;

        // Func7=In Func6=In Func5=In Func4=In Func3=In Func2=Out Func1=In Func0=In 
        // State7=T State6=T State5=T State4=T State3=P State2=0 State1=T State0=T 
        PORTD=0x08;
        DDRD=0x04;
    
        ACSR=0x80;
        SFIOR=0x00;

        while (1)
        {
                if(PTT_SIG)     blink_leds(1000);
                else            blink_leds(500);
        }
}
