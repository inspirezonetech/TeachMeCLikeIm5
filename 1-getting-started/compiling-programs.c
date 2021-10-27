/* 
------------------------------------------------------------------------------------
   Tutorial: Compiling a C program using gcc
    Compiling refers to the translation of source code into object code using a compiler.
    In this tutorial we'll get to know about gcc, which is the abbreviation gor GNU compiler collection.
    We'll be using command prompt to compile our C program.
------------------------------------------------------------------------------------
*/

/* ------------------------------------------------------------------------------------
    Installing gcc:
    1. Open command prompt, by searching for the same in the search bar and type gcc -v and press Enter.
    2. If the command prompt shows you the version for gcc, you are good to go, else you;ll need to install gcc, from their official website.

    Running the program:
    1. Download any code editing app, like Visual Studio Code or Sublime Text.
    2. Create a myProgram.c file in the desired location on your PC.
    3. Use the code editor to write code and compile it using the methods mentioned below.

    Alternatively, you can also download an app like codeblocks which has an inbuilt code editor and compiler, but this tutorial focuses on using the GCC compiler as it is one of the most standard and widely used approach.
    
    
    Compiling the program:
    1. Open the command prompt and using the cd command change the directory to the location of your C program.
    Alternatively, you can go to the location of your program and on the Address bar and type cmd. It takes you to the command prompt with the current folder as the working directory.
    2. Type the command: gcc <name of your file>.c
    Eg: gcc palindrome.c
    3. Your program is now compiled.

    Displaying the output:
    1. Once your program is compiled, an executable file a.out is created.
    2. To run this file type ./a.out
    3. The output would be displayed on your screen.

    You can also change the name your executable using the following format in command prompt:
    gcc -o <name of your exe> <name of your file>.c

------------------------------------------------------------------------------------
*/

// Challenge:
#include <stdio.h>
int main()
{
    printf("Hello, World!");
    return 0;
}

// Find out the output of the above written program via the gcc compiler method explained above
