/* 
------------------------------------------------------------------------------------
 Strings can be passed to a function in a similar way as arrays.

 To pass a one dimensional string to a function as an argument we just write the name of the string array variable.
 
 In the following example we have a string array variable str and it is passed to the function.

 Method 1: Pass by value / without using pointers

    void function(char str[]);  
    char str[50];
    function(str);     // Passing string to a function.    

 Method 2: Using Pointers

    void function(char* str);
    char str[50];
    function(str);     // Passing string to a function. 
------------------------------------------------------------------------------------
*/

// Code here explaining concept with comments to guide
#include <stdio.h>
void sayWelcome(char str[]);  // Passing string as reference
void sayGoodbye(char* str);  // Passing string as a pointer variable

int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    sayWelcome(str);  // Passing string to function
    sayGoodbye(str);
    return 0;
}
void sayWelcome(char str[])
{
    printf("Welcome, ");
    puts(str);
}
void sayGoodbye(char* str){
    printf("Good Bye, ");
    puts(str);
}
/*
------------------------------------------------------------------------------------
 Challenge: Create a user defined function which accepts string as argument and counts the total number of character in the inputed string.
------------------------------------------------------------------------------------
*/
