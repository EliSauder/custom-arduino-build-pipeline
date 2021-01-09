#include <avr/io.h>
#include <util/delay.h>
#include "pinouts.h"

int main() {

	SET_PIN_MODE(2, WRITE);

	DISABLE_PIN(2);

	while(1) {

		TOGGLE_PIN(2);

		_delay_ms(1000);
	}

	return 0;
}