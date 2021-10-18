/* 
------------------------------------------------------------------------------------
C uses char type to store characters and letters. 
But, underneath, C stores integer numbers instead of characters.
Char values are stored in 1 byte in memory,and value range from -128 to 127 or 0 to 255.
In order to represent characters, the computer has to map each integer 
with a corresponding character using a numerical code. 
The most common numerical code is ASCII.
------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    char character = 'R';
    printf("character = %c, Stored as char\n", character);
    printf("character = %d, Stored as integer\n", character);
    return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge:
 01 - Make a program that asks: "Do you are human ? ('y'or 'n')" and catch the answer on a char variable. 
 Then, print on the console the answer.

02 - Make a program that reads a character and tells you what class that character belongs to.
Consider the following classes: digit (characters from `0' to `9'); 
capital letters (characters from `A' to `Z'); 
lowercase letters (characters from `a' to `z') ; 
others (any others characters).
Tip: Check the ASCII codes for each character class. 
------------------------------------------------------------------------------------
*/
