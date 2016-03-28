# Reversing-CPP
Learn C++ by reversing it's code. Compiler is: g++ (GCC) 5.3.0. The article that used in this work is attached.

## GDB setting up

### Why I need it
This repository has some gdb-scripts, that are used to show the main point of one or another article section and, respectively, executable.

### Setting up
#### Temporary solution
You can just use ["--with-auto-load-safe-path"](https://sourceware.org/gdb/onlinedocs/gdb/Auto_002dloading-safe-path.html) gdb flag on running to set current directory as safe to auto-load gdb scripts.
#### Permanent solutoin
To set gdb up to aumatically load attached gdb-scripts, you need to set ["auto-load safe-path"](https://sourceware.org/gdb/onlinedocs/gdb/Auto_002dloading-safe-path.html) option in your [~/.gdbinit](https://sourceware.org/gdb/onlinedocs/gdb/gdbinit-man.html) or ./.gdbinit file.

### Comments
Executables are named respectively to article chapters or subsections.
