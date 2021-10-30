/* 
------------------------------------------------------------------------------------
 Tutorial: brief description of tutorial content
------------------------------------------------------------------------------------


This tutorial will help you learn how to use a header files for your code. Header files store your set of declarations in a separate file that can be referenced/linked to your code.


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
The <> are used to signify that these are pre-existing header files already available in the C compiler.


*/

// Code here explaining concept with comments to guide

//This will be using #include <stdio.h> header file so we can use inputs and outputs such as printf() and scanf() which are declared in the header file. 




///reference the stdio header
#include <stdio.h>




int main() {

   //identifying variable ch which is a character
	char ch;
	

	//printf will print phrase "Enter this character" \n signals to create new line afterwards
	printf("Enter any character \n");
	//scanf will accept input from user. %c is character and stores it in &ch
	scanf("%c", &ch);
	//This line will print the character that was stored by the previous scanf
	printf("Entered character is %c \n", ch);
	//Now we will ask for a phrase or sentence up to 100 characters
	

	return 0;

}
/*
------------------------------------------------------------------------------------
 Challenge: list challenges to be completed here. minimum of one challenge per tutorial
------------------------------------------------------------------------------------


Challenge using stdio.h header file

Create your own program that takes input from the user and prints it out using printf() and scanf() in which you reference the stdio.h file. 


*/
