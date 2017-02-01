# raspberry_attiny_programmer

ISP programming Attiny with Raspberrypi and avrdude<br>

![alt tag](https://github.com/kashimAstro/raspberrypi_attiny_programmer/blob/master/gpio-attiny85.jpg)

configure avrdude<br>
sudo vim /etc/avrdude.conf 

add programmer for attiny ISP with avrdude<br>
<code><pre>
programmer
  id    = "AttinyGPIO";
  desc  = "Attiny GPIO interface SPI programmer";
  type  = "linuxgpio";
  reset = 17;
  sck   = 11;
  mosi  = 10;
  miso  = 9;
;
</pre></code><br>

spi terminal <br>
./tools/terminal.sh 85 AttinyGPIO<br><br>

flash hex<br>
./tools/flash.sh 85 AttinyGPIO led-arduino-mk/bin/ledtest.hex<br><br>

example code arduino<br>
led-arduino-mk<br><br>

example code avr toolchain<br>
led-avr-mk<br><br>

avrdude programmer definition<br>
http://www.nongnu.org/avrdude/user-manual/avrdude_12.html
