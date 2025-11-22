# C64-Rock-Paper-Scissors
Rock Paper Scissors for the Commodore 64 maxi
# Running it on the C64
You can simply open your favorite C64 emulator, then drag and drop the rpsg.prg file
Or put that file into a tape or floppy, then plug it into your C64 and run: 
```
   LOAD "RPSG.PRG",8,1  
   RUN
```
# Building from source
Make sure CC65 is installed for this:
To install for Debian-based systems, run:
```
sudo apt install cc65
```
For arch-based systems, use:
```
sudo pacman -S cc65
```
then run:
```
cl65 -t c64 -o rps.prg rps.c
```
