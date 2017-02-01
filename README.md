# raspberry_attiny_programmer

#install avrdude and core arduino for scripting in arduino mode
sudo apt-get install avrdude arduino-mk arduino-core

![alt tag](https://github.com/kashimAstro/raspberrypi_attiny_programmer/blob/master/gpio-attiny85.jpg)

#configure avrdude
sudo vim /etc/avrdude.conf 

#add programmer for attiny ISP with avrdude
programmer
  id    = "AttinyGPIO";
  desc  = "Attiny GPIO interface SPI programmer";
  type  = "linuxgpio";
  reset = 17;
  sck   = 11;
  mosi  = 10;
  miso  = 9;
;

#spi terminal 
./tools/terminal.sh 85 AttinyGPIO

#flash hex
./tools/flash.sh 85 AttinyGPIO led-arduino-mk/bin/ledtest.hex

#example code arduino
led-arduino-mk

#example code avr toolchain
led-avr-mk

#avrdude programmer definition
http://www.nongnu.org/avrdude/user-manual/avrdude_12.html
