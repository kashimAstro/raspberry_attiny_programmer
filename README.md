# raspberry_attiny_programmer

ISP programming Attiny with Raspberrypi and avrdude<br>

![alt tag](https://github.com/kashimAstro/raspberry_attiny_programmer/blob/master/gpio-attiny85.jpg)

<br>
<b>configure avrdude</b><br>
sudo vim /etc/avrdude.conf 

<b>add programmer for attiny ISP with avrdude</b><br>
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

<b>spi terminal</b> <br>
./tools/terminal.sh 85 AttinyGPIO<br><br>

<b>flash hex</b><br>
./tools/flash.sh 85 AttinyGPIO led-arduino-mk/bin/ledtest.hex<br><br>

<b>example code arduino</b><br>
led-arduino-mk<br><br>

<b>example code avr toolchain</b><br>
led-avr-mk<br><br>

<b>avrdude programmer definition</b><br>
http://www.nongnu.org/avrdude/user-manual/avrdude_12.html
