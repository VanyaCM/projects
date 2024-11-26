/*****************************************************
This program was produced by the
CodeWizardAVR V2.04.4a Advanced
Automatic Program Generator
© Copyright 1998-2009 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 24.03.2010
Author  : NeVaDa
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 1,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*****************************************************/

#include <mega32.h>

// Declare your global variables here

unsigned char kletka[9];

unsigned char hod=1;

void output(void)
{
if (kletka[0]==1) PORTA.0=1;
if (kletka[0]==2) PORTA.1=1;
if (kletka[1]==1) PORTA.0=1;
if (kletka[1]==2) PORTA.1=1;
if (kletka[2]==1) PORTA.0=1;
if (kletka[2]==2) PORTA.1=1;
if (kletka[3]==1) PORTA.0=1;
if (kletka[3]==2) PORTA.1=1;
if (kletka[4]==1) PORTA.0=1;
if (kletka[4]==2) PORTA.1=1;
if (kletka[5]==1) PORTA.0=1;
if (kletka[5]==2) PORTA.1=1;
if (kletka[6]==1) PORTA.0=1;
if (kletka[6]==2) PORTA.1=1;
if (kletka[7]==1) PORTA.0=1;
if (kletka[7]==2) PORTA.1=1;                                                                      
if (kletka[8]==1) PORTA.0=1;
if (kletka[8]==2) PORTA.1=1;
}


unsigned char  pobed (void)
{
if  ((kletka[0]==1)&&(kletka[4]==1)&&(kletka[8]==1))return 1;
if  ((kletka[0]==2)&&(kletka[4]==2)&&(kletka[8]==2))return 2;
if  ((kletka[2]==1)&&(kletka[4]==1)&&(kletka[6]==1))return 1;
if  ((kletka[2]==2)&&(kletka[4]==2)&&(kletka[6]==2))return 2;
if  ((kletka[0]==0)&&(kletka[1]==1)&&(kletka[2]==1))return 1;
if  ((kletka[0]==1)&&(kletka[1]==2)&&(kletka[2]==2))return 2;
if  ((kletka[3]==1)&&(kletka[4]==1)&&(kletka[5]==1))return 1;
if  ((kletka[3]==2)&&(kletka[4]==2)&&(kletka[5]==2))return 2;
if  ((kletka[6]==1)&&(kletka[7]==1)&&(kletka[8]==1))return 1;
if  ((kletka[6]==2)&&(kletka[7]==2)&&(kletka[8]==2))return 2;
if  ((kletka[0]==1)&&(kletka[3]==1)&&(kletka[6]==1))return 1;
if  ((kletka[0]==2)&&(kletka[3]==2)&&(kletka[6]==2))return 2;
if  ((kletka[1]==1)&&(kletka[4]==1)&&(kletka[7]==1))return 1;
if  ((kletka[1]==2)&&(kletka[4]==2)&&(kletka[7]==2))return 2;
if  ((kletka[2]==1)&&(kletka[5]==1)&&(kletka[8]==1))return 1;
if  ((kletka[2]==2)&&(kletka[5]==2)&&(kletka[8]==2))return 2;


if ((kletka[0])&&(kletka[1])&&(kletka[2])&&(kletka[3])&&(kletka[4])&&(kletka[5])&&(kletka[6])&&(kletka[7])&&(kletka[8]==3))return 3;

return 0;
}

 vvod(void)
{
unsigned char tek;
tek=svob_plus(0);


if(PIND.0==0) {
                delay_ms(20); 
                if(PIND.0==0)
                             {
                              
                               if (tek<8){tek=svob_plus(tek+1);}  
                             }   
              }
              
if(PIND.1==0) {
                delay_ms(20);
                if(PIND.1==0)
                              {
                                         
                                if (tek>0)tek=svob_plus(tek-1);}
                              }
if(PIND.3==0) {delay_ms(20); if(PIND.3==0){
                                           if ((hod==1)&&(temp[tek]==0))temp[tek]==1; }
                                           if ((hod==2)&&(temp[tek]==0))temp[tek]==2; }
                                            if(hod==1)hod=2; else hod=1;
                                           }

}

unsigned char svob_plus (unsigned char num)
{
while((num<9)&&(kletka[num]!=0))
    {
     num++;
    }
return num;
// возвращает 9 если не осталось свободной
}


unsigned char svob_minus (unsigned char num)
{
while((num>0)&&(kletka[num]!=0))
    {
     num--;
    }
return num;

} 

void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=Out 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=0 
PORTA=0x00;
DDRA=0x01;

// Port B initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTB=0x00;
DDRB=0x00;

// Port C initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTC=0x00;
DDRC=0x00;

// Port D initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=T 
PORTD=0x00;
DDRD=0x00;

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: Timer 0 Stopped
// Mode: Normal top=FFh
// OC0 output: Disconnected
TCCR0=0x00;
TCNT0=0x00;
OCR0=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: Timer1 Stopped
// Mode: Normal top=FFFFh
// OC1A output: Discon.
// OC1B output: Discon.
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
TCCR1A=0x00;
TCCR1B=0x00;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: Timer2 Stopped
// Mode: Normal top=FFh
// OC2 output: Disconnected
ASSR=0x00;
TCCR2=0x00;
TCNT2=0x00;
OCR2=0x00;

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
// INT2: Off
MCUCR=0x00;
MCUCSR=0x00;

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=0x00;

// Analog Comparator initialization
// Analog Comparator: Off
// Analog Comparator Input Capture by Timer/Counter 1: Off
ACSR=0x80;
SFIOR=0x00;



while (1)
      {
      // Place your code here
      vvod();
      output();
      if(pobed()){        delay_ms();}
      delay_ms(300);

      };
}
