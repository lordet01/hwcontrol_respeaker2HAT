// apiLED.h 
// Original codes --> https://github.com/leonyuhanov/rpi_apa102driver by leonyuhanov
// Redesigned for Raspberry Pi + ReSpeaker 2 HAT by Kwang Myung Jeon, 2018-11-13

#ifndef _spiLED_H_
#define _spiLED_H_

#include <bcm2835.h>
#include <stdio.h>
#include <math.h>

void spiLED_initData();
void spiLED_getColor(int16_t colourIndex, uint8_t brightIndex, uint8_t *currentColour);
int spiLED_start(int duration, int mode, int speed);

#endif