tui enable
layout split
layout asm
layout split
layout regs
focus cmd

break main
break animal::animal(int)
run

echo \n\nHere we can see how often this program uses di register
echo \nand how it initialized before the constructor call.\n
echo \n\n Press enter to continue.

continue

echo \n\n Now we can see, that "di" register is used in this
echo \nfunction without initialization.\n
