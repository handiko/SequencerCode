/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.3 Standard
Automatic Program Generator
� Copyright 1998-2011 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 12/4/2018
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
#include "pindef.h"

void main(void)
{
        // Port A initialization
        // Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
        // State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
        PORTA=0x00;
        DDRA=0x00;

        // Port D initialization
        // Func7=In Func6=In Func5=In Func4=In Func3=In Func2=Out Func1=In Func0=In 
        // State7=T State6=T State5=T State4=T State3=P State2=0 State1=T State0=T 
        PORTD=0x08;
        DDRD=0x04;

        // Analog Comparator initialization
        // Analog Comparator: Off
        // Analog Comparator Input Capture by Timer/Counter 1: Off
        ACSR=0x80;
        SFIOR=0x00;

        while (1)
        {
                // Place your code here   
                PTT_LED=0;
        }
}
