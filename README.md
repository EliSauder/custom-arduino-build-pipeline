# Setup Instructions

## Windows
#### Dependancies:

* [Arduino IDE](https://www.arduino.cc/en/software)
* [avrdude](https://www.nongnu.org/avrdude/) - For this tutorial we will be utilizing the built in copy of avrdude from the Arduino IDE. The reason for this is it has some custom development to support the Arduino chips properly.
* [AVR Toolchains](https://www.microchip.com/en-us/development-tools-tools-and-software/avr-and-sam-downloads-archive#AVR%20and%20ARM%20Toolchains)
* [GNU Make for Windows](http://gnuwin32.sourceforge.net/packages/make.htm)

#### Instructions:
1. Clone this repository 
2. Make sure you have downloaded and installed all of the dependancies. I wrote this tutorial while they were on the following versions:
    * Arduino IDE: 1.8.13
    * avrdude: &lt;From Arduino IDE&gt;
    * AVR Toolchains: AVR 8-bit & 32-bit v3.4.1
    * GNU Make for Windows: 3.81
3. Update the makefile - If you are unsure of any of the values see: [MakeFile Values Help](#makefile-values-help)
    1. Change the `ARDUINO_IDE_INSTALL_DIRECTORY` variable with the install directory of your installation of Arduino IDE. 
    The default install location for Arduino IDE is: `C:\Program Files (x86)\Android`. 
    *Note: The make file expects the path to not end in a \\*
    2. Update the `DEVICE` variable with the main processor of your Arduino.
    3. Update the `PROGRAMMER` variable with the programmer you are using.
    4. Update the `PORT` variable with the COM port the Arduino board is connected to.
    5. Update the `BAUD` variable with the update communication baud rate.
    6. Update the `DEFINES` variable with the appropreate chip define and F_CPU (clock rate of the processor in hz) values.
    7. Update
4. Open a command bash in the folder and run the `make` command.
5. If you want to open this in vscode to make changes, I would recommend installing the Arduino extention and running the Arduino initialize script in the F1 menu. This will setup your `.vscode/c_cpp_properties.json` with the needed includes.
Note: The initialize script will create a file, make sure you don't specify an existing file as it will overwrite it.
6. I personally also made these additional changes to the `.vscode/c_cpp_properties.json`
    * Removed `compilerPath` - The reason is that I won't be using vscode to build.
    * Changed `cStandard` to `c99` - c99 is the most recent c standard that AVR supports.
    * Changed `cppStandard` to `c++98` - c++98 is the most recent c++ standard that AVR supports.
    * Changed `intelliSenseMode` to `gcc-x86` - the AVR compiler is a variant of the gcc compiler.
    * Set `defines` to include the `DEFINES` value from the makefile
    * Removed `forcedInclude`

## Makefile Values Help
If you don't know what the different make value values should be you can copy some of the values from the `<Your Arduino IDE Install Directory>\hardware\arduino\avr\boards.txt` file.
After opening the file, you can search for your Arduino board (for example "Arduino Uno", "Arduino Mega", etc.). If you have an Arduino Mega board, make sure you select the correct one.
Once you have located your board you can copy the following values into the make file:
* &lt;Arduino Type&gt;.build.mcu - Copy to `DEVICE`
* &lt;Arduino Type&gt;.upload.protocol - Copy to `PROGRAMMER`
* &lt;Arduino Type&gt;.upload.speed - Copy to `BAUD`
* Defines:
    * Replace `__AVR_ATmega2560__` with your `DEVICE` for example: atmega328p becomes `__AVR_ATmega328P__`. 
    If you want a full list of all the defines you can find it in the `#include <avr/io.h>` header file.
    * Set `F_CPU=<Arduino Type>.build.f_cpu `

# Contents
* makefile - The makefile for the project.
* README.md - This file
* src/main.c - A simple blink example on pin 2
* src/pinouts.h - This contains a translation layer from the AVR chip's PORTS and PINs to the Arduino's labeled Pins. Currently the only board supported by this is the *Arduino Mega 2560* 
* src/util.h - Contains some defines to use for readability and ease of use.
