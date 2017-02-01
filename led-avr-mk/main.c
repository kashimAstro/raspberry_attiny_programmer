#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB = 1<<4;
  PORTB = 0x0;

  while (1)
  {
    PORTB = 1<<4;
    _delay_ms(500);
    PORTB = 0X0;
    _delay_ms(250);
  }
}
