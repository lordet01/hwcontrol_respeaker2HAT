#!/bin/sh

g++ -o LEDtest LEDtest_main.cpp spiLED.cpp -lbcm2835
