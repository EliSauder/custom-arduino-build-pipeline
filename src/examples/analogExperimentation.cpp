#include <avr/io.h>
#include "../util.h"

// ADMUX

#define REF_AREF (0 << REFS1) | (0 << REFS0)
#define REF_AVCC (0 << REFS1) | (1 << REFS0)
#define REF_INTERNAL_1_1 (1 << REFS1) | (0 << REFS0)
#define REF_INTERNAL_2_56 (1 << REFS1) | (1 << REFS0)

#define ADJUST_LEFT (1 << ADLAR)
#define ADJUST_RIGHT (0 << ADLAR)

#define PIN_0
#define PIN_1
#define PIN_2
#define PIN_3
#define PIN_4
#define PIN_5
#define PIN_6
#define PIN_7
// and gains

// ADCSRB

#define AUTO_TRIGGER_SOURCE_FREE 						(0 << ADTS2) | (0 << ADTS1) | (0 << ADTS0) 
#define AUTO_TRIGGER_ANALOG_COMPARATOR 					(0 << ADTS2) | (0 << ADTS1) | (1 << ADTS0)
#define AUTO_TRIGGER_ANALOG_EXTERNAL_INTERRUPT 			(0 << ADTS2) | (1 << ADTS1) | (0 << ADTS0)
#define AUTO_TRIGGER_ANALOG_TIMER_COUNTER_0_COMPARE_A 	(0 << ADTS2) | (1 << ADTS1) | (1 << ADTS0)
#define AUTO_TRIGGER_ANALOG_TIMER_COUNTER_0_OVERFLOW 	(1 << ADTS2) | (0 << ADTS1) | (0 << ADTS0)
#define AUTO_TRIGGER_ANALOG_TIMER_COUNTER_1_COMPARE_B 	(1 << ADTS2) | (0 << ADTS1) | (1 << ADTS0)
#define AUTO_TRIGGER_ANALOG_TIMER_COUNTER_1_OVERFLOW 	(1 << ADTS2) | (1 << ADTS1) | (0 << ADTS0)
#define AUTO_TRIGGER_ANALOG_TIMER_COUNTER_1_EVENT 		(1 << ADTS2) | (1 << ADTS1) | (1 << ADTS0)

#define PIN_8
#define PIN_9
#define PIN_10
#define PIN_11
#define PIN_12
#define PIN_13
#define PIN_14
#define PIN_15

// ADCSRA

#define ENABLE_ADC (1 << ADEN)
#define START_CONVERSION (1 << ADSC)
#define AUTO_TRIGGER (1 << ADATE)
#define INTERRUPT_FLAG (1 << ADIF) // ADC Conversion completed
#define INTERRUPT_ENABLE (1 << ADIE)
#define PRESCALER(N) (N > 128 ? 3 : log2<N>::value)
#define PRESCALER_2 PRESCALER(2)
#define PRESCALER_4 PRESCALER(4)
#define PRESCALER_8 PRESCALER(8)
#define PRESCALER_16 PRESCALER(16)
#define PRESCALER_32 PRESCALER(32)
#define PRESCALER_64 PRESCALER(64)
#define PRESCALER_128 PRESCALER(128)


int main() {
	
	// Enable ADC
	ADCSRA |= (1 << ADEN);

	// Set ADC Mode (single/auto trigger/free running)
	//ADCSRA |=(1 << )

	// Set ADC prescaling to be `CPU Clcok / 128` (125 kHz)
	// For full 10bit accuracy ADC Should be between 50kHz and 200kHz
	// Max ADC can be 1000kHz
	ADCSRA |= (1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2);

	// Reference Selection
	ADMUX |= (0 << REFS1) | (1 << REFS0);

	// Start ADC Reading
	ADCSRA |= (1 << ADSC);

	//ADC Result Registeres
	//ADCL
	//ADCH

	return 0;
}