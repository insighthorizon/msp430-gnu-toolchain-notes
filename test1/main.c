// Lets try to blink red LED (P1.O pin)


#include <msp430g2553.h>

int main(void) {
  WDTCTL = WDTPW | WDTHOLD; // stop watchdog timer

  P1DIR = (0x01 << 6) | (0x01); // setup pin 1 and pin 6 in port 1 as output
  
  P1OUT =  0x01; // set pin 1 to log. one


  for(;;)
    {
      P1OUT ^= 0x01; // toggle pin 1
      P1OUT ^= 0x01 << 6; // toggle pin 6

      for(int i = 0; i < 32767; i++);
    }
}
