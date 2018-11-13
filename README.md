# hwcontrol_respeaker2HAT


APA102LED and button control exeamples for Seeed's ReSpeaker 2 HAT with Raspberry Pi (3B+ or Zero W) 

Usage:

1) Setup bcm2385 library
wget http://www.airspayce.com/mikem/bcm2835/bcm2835-1.50.tar.gz
tar zxvf bcm2835-1.50.tar.gz
cd bcm2835-1.xx
./configure
make
sudo make check
sudo make install

2) Compile codes
   a) Button
      - g++ -o button button.cpp -l wiringPi   
   b) APA102 LED
      - g++ -o LEDtest LEDtest_main.cpp spiLED.h -l bcm2835


References:
[1] http://www.elec-tron.org/?page_id=1296
[2] https://cpldcpu.wordpress.com/2014/11/30/understanding-the-apa102-superled/
[3] https://github.com/leonyuhanov/rpi_apa102driver