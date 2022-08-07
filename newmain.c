#include<xc.h>
#define PD0 PORTDbits.RD0
#define PD1 PORTDbits.RD1
#define PD2 PORTDbits.RD2
#define PD3 PORTDbits.RD3
void main (void)
{
    unsigned char conbyte = 0xc;
    unsigned char regALSB;
    unsigned char x;
    regALSB=conbyte;
    
    unsigned char conbyt = 0x06;
    unsigned char regALSB1;
    
    regALSB1=conbyt;
    
    unsigned char conby = 0x03;
    unsigned char regALSB2;
    
    regALSB2=conby;
    
    unsigned char conbyte1 = 0x09;
    unsigned char regALSB3;
    
    regALSB3=conbyte1;
    
    TRISDbits.TRISD0 =0;
    TRISDbits.TRISD1 =0;
    TRISDbits.TRISD2 =0;
    TRISDbits.TRISD3 =0;
    for(x=0; x<8; x++)
    {
        PD0 = regALSB & 0x01;
        regALSB = regALSB >> 1;
      
        PD1 = regALSB1 & 0x01;
        regALSB1 = regALSB1 >> 1;
        
        PD2 = regALSB2 & 0x01;
        regALSB2 = regALSB2 >> 1;
        
        PD3 = regALSB3 & 0x01;
        regALSB3 = regALSB3 >> 1;
      
        }
    
    
}
