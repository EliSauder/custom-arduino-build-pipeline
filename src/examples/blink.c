#include <avr/io.h>
#include <util/delay.h>

#include "../pinouts/map.h"

#define PIN 2

int main(void) { 

    board_init();

	SET_PIN_MODE(PIN, WRITE);

	DISABLE_PIN(PIN);

	while(1) {

		TOGGLE_PIN(PIN);

		_delay_ms(100);
	}
}