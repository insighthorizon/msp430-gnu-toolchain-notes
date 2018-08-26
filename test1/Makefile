test:
	msp430-gcc -O0 -g -std=c99 main.c -mmcu=msp430g2553
	gnome-terminal -e "mspdebug rf2500 \"prog a.out\"  \"gdb \""
	gnome-terminal -e "msp430-gdb a.out"

