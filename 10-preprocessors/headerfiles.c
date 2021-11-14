/* 
------------------------------------------------------------------------------------
Tutorial: How to use Header files

This tutorial will help you learn how to use a header files for your code. 
Header files store your set of declarations in a separate file that can be referenced/linked to your code.
All header files end with an .h extension
Examples:
stdio.h
yourprogram.h
variable.h

They are referenced in your code by using the #include line.
Examples:
#include <stdio.h>
#include "example.h"
Difference between using <> and "" is the "" is used to reference a header file that you as the user have created.
The <> are used to signify that these are pre-existing header files already available in the C standard libraries.
------------------------------------------------------------------------------------
*/

/*
This will be using #include <stdio.h> header file so we can use inputs and outputs such as printf() and scanf() which are declared in the header file. 
reference the stdio header */
#include <stdio.h>
int main()
{
    // identifying variable ch which is a character
    char ch;
    // printf will print phrase "Enter this character" \n signals to create new line afterwards
    printf("Type a single character and press Enter: \n");
    // scanf will accept input from user. %c is character and stores it in &ch
    scanf("%c", &ch);
    // This line will print the character that was stored by the previous scanf
    printf("Entered character is %c \n", ch);
    return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge: Use the C library header file #include <string.h>
 Create a program that declares the following string:
 char my_string[] = "programming";
 Then use the the strlen() function from header file string.h to print the length of this string 
------------------------------------------------------------------------------------
*/
