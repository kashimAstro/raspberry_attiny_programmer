# raspberry_attiny_programmer

ISP programming Attiny with Raspberrypi and avrdude<br>

![alt tag](https://github.com/kashimAstro/raspberry_attiny_programmer/blob/master/gpio-attiny85.jpg)

<b>dependencies</b><br>
<code>sudo apt-get install avrdude</code>

<br>
<b>configure avrdude</b><br>
<code>sudo vim /etc/avrdude.conf</code>

<b>add programmer for attiny ISP with avrdude</b><br>
<code>
programmer
  id    = "AttinyGPIO";
  desc  = "Attiny GPIO interface SPI programmer";
  type  = "linuxgpio";
  reset = 17;
  sck   = 11;
  mosi  = 10;
  miso  = 9;
;
</code><br>

<b>spi terminal</b> <br>
<code>./tools/terminal.sh 85 AttinyGPIO</code><br><br>

<b>flash hex</b><br>
<code>./tools/flash.sh 85 AttinyGPIO led-arduino-mk/bin/ledtest.hex</code><br><br>

<b>example code arduino:</b> led-arduino-mk<br>
<b>example code avr toolchain:</b> led-avr-mk<br>

<b>avrdude programmer definition</b><br>
http://www.nongnu.org/avrdude/user-manual/avrdude_12.html
