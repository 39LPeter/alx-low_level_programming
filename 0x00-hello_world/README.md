# 0x00. C - Hello, World

## Notes

Example program:

![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/e40f7999-fe3d-410b-bc88-f75dd29d2e82)


The 4 main steps are:
 * **Pre-processing** - We can view the results of the preprocessor by running `gcc` with the option `-E`, which suppresses the compilation process after this first step.

![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/767c2746-405f-46e9-b910-d0ab1de93c4f)

 * **Compilation** - converts source code to assembly/machine code.  Assembly code, or assembly language (often abbreviated asm), is a high-level programming language that corresponds programming code with the given architecture’s machine code instructions. To halt the compiling process at this second step, we can run our example file `main.c` with the `gcc` option `-c`. Then, we can view the resulting, mostly unreadable mess of assembly code.

![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/afaacbb4-e7ac-4052-98d8-f886dbda0e79)

 * **Assembly** - converts assembly/machine code to object code.  Where assembly code represents a correspondence between program and machine code, object code represents pure machine code (ie. binary). Our `main.c` file’s assembly code wasn’t unreadable enough for me. Let’s run `gcc` with the `-S` option to halt the compiler at the assembly step

 ![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/b0217e3e-c9cb-4def-b2f3-94a5cacb9ba8)

 * **Linking**. Preprocessed, compiled, and assembled, the now-object code is finally ready to be converted into an executable. To do so, the compiler takes one last step and sends the code to the linker, which takes all object codes and libraries passed to it and links them together into a single executable file.

Within the scope of our example, `main.c` is being compiled without any additional links or files, so the program will be converted into an executable by itself. Alas, for the grand finale, let’s run the full shebang (no computing reference intended here), `gcc main.c` without any options, to preprocess, compile, assemble, and link the program all at once.

![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/256a4e01-a5d8-4ebd-9f75-34acd0b8b7b0)

 This link contains important `gcc` flags: https://linuxhandbook.com/gcc-flags/

This folder contains `Bash` scripts and `C`code written to implement the following:

## Scripts :page_with_curl:

* **0. Preprocessor**
  * [0-preprocessor](./0-preprocessor): Bash script that runs a C file saved in the
  variable `$CFILE` through the preprocessor and saves the result in the file `c`.

* **1. Compiler**
  * [1-compiler](./1-compiler): Bash script that compiles a C file saved in the
  variable `$CFILE` that does not link; saves the result in an output file of the
  same name but with a `.o` extension.
    * Example: If the C file is `main.c`, the output is `main.o`.

* **2. Assembler**
  * [2-assembler](./2-assembler): Bash script that generates the assembly code of a
  C file saved in the variable `$CFILE`; saves the result in an output file of the
  same name but with a `.s` extension.
    * Example: If the C file is `main.c`, the result is `main.s`.

* **3. Name**
  * [3-name](./3-name): Bash Script that compiles a C file saved in the variable
  `$CFILE` and creates an executable `cisfun`.

* **4. Hello, puts**
  * [4-puts.c](./4-puts.c): C program that prints exactly `"Programming is like building
  a multilingual puzzle`, followed by a new line, using the function `puts`.

* **5. Hello, printf**
  * [5-printf.c](./5-printf.c): C program that prints exactly `with proper grammer, but
  the outcome is a piece of art,`, followed by a new line, using the function `printf`.

* **6. Size is not grandeur, and territory does not make a nation**
  * [6-size.c](./6-size.c): C program that prints the size of various types on the computer
  it is compiled and run on.

* **7. Intel**
  * [100-intel](./100-intel): Bash script that generates assembly code in Intel syntax of a
  C file saved in the variable $CFILE; saves the result in an output file of the same name
  but with a `.s` extension.
    * Example: If the C file is `main.c`, the output is `main.s`.

* **8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**
  * [101-quote.c](./101-quote.c): C program that prints exactly `and that piece of art is
  useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error,
  without using any functions listed in the NAME sesction of the man(3) `printf` or man(3)
  `puts`.
  ***
