ARDUINO_IDE_INSTALL_DIRECTORY = C:/Program\ Files\ \(x86\)/Arduino

# avrdude configuration
ARDUINO_AVRDUDE = ${ARDUINO_IDE_INSTALL_DIRECTORY}/hardware/tools/avr/bin/avrdude
ARDUINO_AVRDUDE_CONFIGURATION = ${ARDUINO_IDE_INSTALL_DIRECTORY}/hardware/tools/avr/etc/avrdude.conf

# Device Information
DEVICE 		= atmega2560
PROGRAMMER 	= wiring
PORT 		= COM3
BAUD 		= 115200

# Start Point Info
START_POINT = src/main.c

# Compiler setup
CCOMPILER = avr-gcc
DEFINES = -D __AVR_ATmega2560__ -D F_CPU=16000000L
CFLAGS = -Wall -Os -mmcu=${DEVICE} ${DEFINES}

default: init compile upload

init:
	mkdir -p build/
	rm -f build/output.o
	rm -f build/output.elf
	rm -f build/output.hex

compile:
	${CCOMPILER} ${CFLAGS} -c ${START_POINT} -o build/output.o
	${CCOMPILER} ${CFLAGS} -o build/output.elf build/output.o
	avr-objcopy -j .text -j .data -O ihex build/output.elf build/output.hex
	avr-size --format=avr --mcu=${DEVICE} build/output.elf

upload:build/output.hex
	${ARDUINO_AVRDUDE} -C ${ARDUINO_AVRDUDE_CONFIGURATION} -v -p ${DEVICE} -c ${PROGRAMMER} -P ${PORT} -b ${BAUD} -D -U flash:w:build/output.hex:i