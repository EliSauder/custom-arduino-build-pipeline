#include <avr/io.h>

#define ARDUINO_DP0 PE0
#define ARDUINO_DP0_PORT PORTE
#define ARDUINO_DP0_DDR DDRE
#define ARDUINO_DP0_IN PINE

#define ARDUINO_DP1 PE1
#define ARDUINO_DP1_PORT PORTE
#define ARDUINO_DP1_DDR DDRE
#define ARDUINO_DP1_IN PINE

#define ARDUINO_DP2 PE4
#define ARDUINO_DP2_PORT PORTE
#define ARDUINO_DP2_DDR DDRE
#define ARDUINO_DP2_IN PINE

#define ARDUINO_DP3 PE5
#define ARDUINO_DP3_PORT PORTE
#define ARDUINO_DP3_DDR DDRE
#define ARDUINO_DP3_IN PINE

#define ARDUINO_DP4 PG5
#define ARDUINO_DP4_PORT PORTG
#define ARDUINO_DP4_DDR DDRG
#define ARDUINO_DP4_IN PING

#define ARDUINO_DP5 PE3
#define ARDUINO_DP5_PORT PORTE
#define ARDUINO_DP5_DDR DDRE
#define ARDUINO_DP5_IN PINE

#define ARDUINO_DP6 PH3
#define ARDUINO_DP6_PORT PORTH
#define ARDUINO_DP6_DDR DDRH
#define ARDUINO_DP6_IN PINH

#define ARDUINO_DP7 PH4
#define ARDUINO_DP7_PORT PORTH
#define ARDUINO_DP7_DDR DDRH
#define ARDUINO_DP7_IN PINH

#define ARDUINO_DP8 PH5
#define ARDUINO_DP8_PORT PORTH
#define ARDUINO_DP8_DDR DDRH
#define ARDUINO_DP8_IN PINH

#define ARDUINO_DP9 PH6
#define ARDUINO_DP9_PORT PORTH
#define ARDUINO_DP9_DDR DDRH
#define ARDUINO_DP9_IN PINH

#define ARDUINO_DP10 PB4
#define ARDUINO_DP10_PORT PORTB
#define ARDUINO_DP10_DDR DDRB
#define ARDUINO_DP10_IN PINB

#define ARDUINO_DP11 PB5
#define ARDUINO_DP11_PORT PORTB
#define ARDUINO_DP11_DDR DDRB
#define ARDUINO_DP11_IN PINB

#define ARDUINO_DP12 PB6
#define ARDUINO_DP12_PORT PORTB
#define ARDUINO_DP12_DDR DDRB
#define ARDUINO_DP12_IN PINB

#define ARDUINO_DP13 PB7
#define ARDUINO_DP13_PORT PORTB
#define ARDUINO_DP13_DDR DDRB
#define ARDUINO_DP13_IN PINB

#define ARDUINO_DP14 PJ1
#define ARDUINO_DP14_PORT PORTJ
#define ARDUINO_DP14_DDR DDRJ
#define ARDUINO_DP14_IN PINJ

#define ARDUINO_DP15 PJ0
#define ARDUINO_DP15_PORT PORTJ
#define ARDUINO_DP15_DDR DDRJ
#define ARDUINO_DP15_IN PINJ

#define ARDUINO_DP16 PH1
#define ARDUINO_DP16_PORT PORTH
#define ARDUINO_DP16_DDR DDRH
#define ARDUINO_DP16_IN PINH

#define ARDUINO_DP17 PH0
#define ARDUINO_DP17_PORT PORTH
#define ARDUINO_DP17_DDR DDRH
#define ARDUINO_DP17_IN PINH

#define ARDUINO_DP18 PD3
#define ARDUINO_DP18_PORT PORTD
#define ARDUINO_DP18_DDR DDRD
#define ARDUINO_DP18_IN PIND

#define ARDUINO_DP19 PD2
#define ARDUINO_DP19_PORT PORTD
#define ARDUINO_DP19_DDR DDRD
#define ARDUINO_DP19_IN PIND

#define ARDUINO_DP20 PD1
#define ARDUINO_DP20_PORT PORTD
#define ARDUINO_DP20_DDR DDRD
#define ARDUINO_DP20_IN PIND

#define ARDUINO_DP21 PD0
#define ARDUINO_DP21_PORT PORTD
#define ARDUINO_DP21_DDR DDRD
#define ARDUINO_DP21_IN PIND

#define ARDUINO_DP22 PA0
#define ARDUINO_DP22_PORT PORTA
#define ARDUINO_DP22_DDR DDRA
#define ARDUINO_DP22_IN PINA

#define ARDUINO_DP23 PA1
#define ARDUINO_DP23_PORT PORTA
#define ARDUINO_DP23_DDR DDRA
#define ARDUINO_DP23_IN PINA

#define ARDUINO_DP24 PA2
#define ARDUINO_DP24_PORT PORTA
#define ARDUINO_DP24_DDR DDRA
#define ARDUINO_DP24_IN PINA

#define ARDUINO_DP25 PA3
#define ARDUINO_DP25_PORT PORTA
#define ARDUINO_DP25_DDR DDRA
#define ARDUINO_DP25_IN PINA

#define ARDUINO_DP26 PA4
#define ARDUINO_DP26_PORT PORTA
#define ARDUINO_DP26_DDR DDRA
#define ARDUINO_DP26_IN PINA

#define ARDUINO_DP27 PA5
#define ARDUINO_DP27_PORT PORTA
#define ARDUINO_DP27_DDR DDRA
#define ARDUINO_DP27_IN PINA

#define ARDUINO_DP28 PA6
#define ARDUINO_DP28_PORT PORTA
#define ARDUINO_DP28_DDR DDRA
#define ARDUINO_DP28_IN PINA

#define ARDUINO_DP29 PA7
#define ARDUINO_DP29_PORT PORTA
#define ARDUINO_DP29_DDR DDRA
#define ARDUINO_DP29_IN PINA

#define ARDUINO_DP30 PC7
#define ARDUINO_DP30_PORT PORTC
#define ARDUINO_DP30_DDR DDRC
#define ARDUINO_DP30_IN PINC

#define ARDUINO_DP31 PC6
#define ARDUINO_DP31_PORT PORTC
#define ARDUINO_DP31_DDR DDRC
#define ARDUINO_DP31_IN PINC

#define ARDUINO_DP32 PC5
#define ARDUINO_DP32_PORT PORTC
#define ARDUINO_DP32_DDR DDRC
#define ARDUINO_DP32_IN PINC

#define ARDUINO_DP33 PC4
#define ARDUINO_DP33_PORT PORTC
#define ARDUINO_DP33_DDR DDRC
#define ARDUINO_DP33_IN PINC

#define ARDUINO_DP34 PC3
#define ARDUINO_DP34_PORT PORTC
#define ARDUINO_DP34_DDR DDRC
#define ARDUINO_DP34_IN PINC

#define ARDUINO_DP35 PC2
#define ARDUINO_DP35_PORT PORTC
#define ARDUINO_DP35_DDR DDRC
#define ARDUINO_DP35_IN PINC

#define ARDUINO_DP36 PC1
#define ARDUINO_DP36_PORT PORTC
#define ARDUINO_DP36_DDR DDRC
#define ARDUINO_DP36_IN PINC

#define ARDUINO_DP37 PC0
#define ARDUINO_DP37_PORT PORTC
#define ARDUINO_DP37_DDR DDRC
#define ARDUINO_DP37_IN PINC

#define ARDUINO_DP38 PD7
#define ARDUINO_DP38_PORT PORTD
#define ARDUINO_DP38_DDR DDRD
#define ARDUINO_DP38_IN PIND

#define ARDUINO_DP39 PG2
#define ARDUINO_DP39_PORT PORTG
#define ARDUINO_DP39_DDR DDRG
#define ARDUINO_DP39_IN PING

#define ARDUINO_DP40 PG1
#define ARDUINO_DP40_PORT PORTG
#define ARDUINO_DP40_DDR DDRG
#define ARDUINO_DP40_IN PING

#define ARDUINO_DP41 PG0
#define ARDUINO_DP41_PORT PORTG
#define ARDUINO_DP41_DDR DDRG
#define ARDUINO_DP41_IN PING

#define ARDUINO_DP42 PL7
#define ARDUINO_DP42_PORT PORTL
#define ARDUINO_DP42_DDR DDRL
#define ARDUINO_DP42_IN PINL

#define ARDUINO_DP43 PL6
#define ARDUINO_DP43_PORT PORTL
#define ARDUINO_DP43_DDR DDRL
#define ARDUINO_DP43_IN PINL

#define ARDUINO_DP44 PL5
#define ARDUINO_DP44_PORT PORTL
#define ARDUINO_DP44_DDR DDRL
#define ARDUINO_DP44_IN PINL

#define ARDUINO_DP45 PL4
#define ARDUINO_DP45_PORT PORTL
#define ARDUINO_DP45_DDR DDRL
#define ARDUINO_DP45_IN PINL

#define ARDUINO_DP46 PL3
#define ARDUINO_DP46_PORT PORTL
#define ARDUINO_DP46_DDR DDRL
#define ARDUINO_DP46_IN PINL

#define ARDUINO_DP47 PL2
#define ARDUINO_DP47_PORT PORTL
#define ARDUINO_DP47_DDR DDRL
#define ARDUINO_DP47_IN PINL

#define ARDUINO_DP48 PL1
#define ARDUINO_DP48_PORT PORTL
#define ARDUINO_DP48_DDR DDRL
#define ARDUINO_DP48_IN PINL

#define ARDUINO_DP49 PL0
#define ARDUINO_DP49_PORT PORTL
#define ARDUINO_DP49_DDR DDRL
#define ARDUINO_DP48_IN PINL

#define ARDUINO_DP50 PB3
#define ARDUINO_DP50_PORT PORTB
#define ARDUINO_DP50_DDR DDRB
#define ARDUINO_DP50_IN PINB

#define ARDUINO_DP51 PB2
#define ARDUINO_DP51_PORT PORTB
#define ARDUINO_DP51_DDR DDRB
#define ARDUINO_DP51_IN PINB

#define ARDUINO_DP52 PB1
#define ARDUINO_DP52_PORT PORTB
#define ARDUINO_DP52_DDR DDRB
#define ARDUINO_DP52_IN PINB

#define ARDUINO_DP53 PB0
#define ARDUINO_DP53_PORT PORTB
#define ARDUINO_DP53_DDR DDRB
#define ARDUINO_DP53_IN PINB

void board_init()
{
    DDRA = 0xff;
    DDRB = 0xff;
    DDRC = 0xff;
    DDRD = 0xff;
    DDRE = 0xff;
    DDRF = 0xff;
    DDRG = 0xff;
    DDRH = 0xff;
    DDRJ = 0xff;
    DDRK = 0xff;
    DDRL = 0xff;

    PORTA = 0x00;
    PORTB = 0x00;
    PORTC = 0x00;
    PORTD = 0x00;
    PORTE = 0x00;
    PORTF = 0x00;
    PORTG = 0x00;
    PORTH = 0x00;
    PORTJ = 0x00;
    PORTK = 0x00;
    PORTL = 0x00;

    DDRA = 0x00;
    DDRB = 0x00;
    DDRC = 0x00;
    DDRD = 0x00;
    DDRE = 0x00;
    DDRF = 0x00;
    DDRG = 0x00;
    DDRH = 0x00;
    DDRJ = 0x00;
    DDRK = 0x00;
    DDRL = 0x00;
}