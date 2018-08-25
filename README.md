# msp430-gnu-toolchain-notes

Using Ubuntu 16.04

1) Install software:
  $ sudo apt-get install binutils-msp430 gcc-msp430 msp430-libc mspdebug
  $ sudo apt-get install gdb-msp430
  
  ($ man mspdebug)

2) write source code and makefile ....

3) $ mspdebug rf2500
   $ prog a.out

4) In project directory create file .gdbinit with the following contents:

   target remote localhost:2000
   monitor reset halt
   load

5) Open the project directory in other terminal
   $ msp430-gdb a.out
   #now you are debugging with gdb


 
