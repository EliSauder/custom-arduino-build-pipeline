#include <avr/io.h>
#include <util/delay.h>

#include "../pinouts/map.hpp"

#define PIN 2

int main(void) { 

    board_init();

	DP_MODE(PIN, WRITE);

	DP_LOW(PIN);

	while(1) {

		DP_TOGGLE(PIN);

		_delay_ms(1000);
	}
}