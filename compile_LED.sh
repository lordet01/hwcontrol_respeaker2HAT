#!/bin/sh

g++ -o LEDtest LEDtest_main.cpp spiLED.cpp -l bcm2835
