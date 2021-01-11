#ifndef _MAP_
#define _MAP_

#include "../util.h"

#define _P(pin) ARDUINO_DP##pin
#define _PORT(pin) ARDUINO_DP##pin##_PORT
#define _DDR(pin) ARDUINO_DP##pin##_DDR
#define _PIN(pin) ARDUINO_DP##pin##_IN

#define SET_PIN(pin, highLow) highLow == HIGH ? __ENABLE_BIT(_PORT(pin), _P(pin)) : __DISABLE_BIT(_PORT(pin), _P(pin))
#define TOGGLE_PIN(pin) __TOGGLE_BIT(_PORT(pin), _P(pin))
#define ENABLE_PIN(pin) __ENABLE_BIT(_PORT(pin), _P(pin))
#define DISABLE_PIN(pin) __DISABLE_BIT(_PORT(pin), _P(pin))

#define SET_PIN_MODE(pin, readWrite) readWrite == WRITE ? (__ENABLE_BIT(_DDR(pin), _P(pin))) : (__DISABLE_BIT(_DDR(pin), _P(pin)))

void board_init();

#if defined __AVR_ATmega2560__
	#include "__AVR_ATmega2560__.h"
#endif


#define ENABLE_ADC __DISABLE_BIT(ADC_PRR, ADC)
#define DISABLE_ADC __ENABLE_BIT(ADC_PRR, ADC)

#endif