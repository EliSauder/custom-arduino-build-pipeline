#include <avr/io.h>
#include <util/delay.h>
#include "pinouts.h"

#define PIN 53

int main() {

	board_init();

	SET_PIN_MODE(PIN, WRITE);

	DISABLE_PIN(PIN);

	while(1) {

		TOGGLE_PIN(PIN);

		_delay_ms(100);
	}

	return 0;
}