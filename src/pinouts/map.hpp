#ifndef _MAP_
#define _MAP_

#include "../util.hpp"

#define _P(pin, pinType) (pinType == PIN_TYPE_DIGITAL ? ARDUINO_##DP##pin : ARDUINO_##AP##pin)
#define _PORT(pin, pinType) (pinType == PIN_TYPE_DIGITAL ? ARDUINO_##DP##pin##_PORT : ARDUINO_##AP##pin##_PORT)
#define _DDR(pin, pinType) (pinType == PIN_TYPE_DIGITAL ? ARDUINO_##DP##pin##_DDR : ARDUINO_##AP##pin##_DDR)
#define _PIN(pin, pinType) (pinType == PIN_TYPE_DIGITAL ? ARDUINO_##DP##pin##_IN : ARDUINO_##AP##pin##_IN)


#define __P_SET(pin, pinType, highLow) (highLow == HIGH ? __BIT_HIGH(_PORT(pin, pinType), _P(pin, pinType)) : __BIT_LOW(_PORT(pin, pinType), _P(pin, pinType)))
#define __P_TOGGLE(pin, pinType) (__BIT_TOGGLE(_PORT(pin, pinType), _P(pin, pinType)))
#define __P_HIGH(pin, pinType) (__BIT_HIGH(_PORT(pin, pinType), _P(pin, pinType)))
#define __P_LOW(pin, pinType) (__BIT_LOW(_PORT(pin, pinType), _P(pin, pinType)))

#define DP_SET(pin, highLow) (__P_SET(pin, PIN_TYPE_DIGITAL, highLow))
#define DP_TOGGLE(pin) (__P_TOGGLE(pin, PIN_TYPE_DIGITAL))
#define DP_HIGH(pin) (__P_HIGH(pin, PIN_TYPE_DIGITAL))
#define DP_LOW(pin) (__P_LOW(pin, PIN_TYPE_DIGITAL))

#define __SET_PIN_MODE(pin, pinType, readWrite) (readWrite == WRITE ? (__BIT_HIGH(_DDR(pin, pinType), _P(pin, pinType))) : (__BIT_LOW(_DDR(pin, pinType), _P(pin, pinType))))
#define DP_MODE(pin, readWrite) __SET_PIN_MODE(pin, PIN_TYPE_DIGITAL, readWrite)

#if defined __AVR_ATmega2560__
	#include "__AVR_ATmega2560__.h"
#endif

#define ENABLE_ADC __BIT_LOW(ADC_PRR, ADC)
#define DISABLE_ADC __BIT_HIGH(ADC_PRR, ADC)

#endif