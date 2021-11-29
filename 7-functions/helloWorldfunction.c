/*
------------------------------------------------------------------------------------
 Tutorial: brief description of tutorial content
------------------------------------------------------------------------------------
A function is a set of statements that take inputs, do some specific computation, and produces an output. 
Functions help to improve readability of code and minimize the code that would need to be stored in main().

The general form of a function is:

return_type function_name([argument1_type argument1_name, ...]) {

your code here

}

Return types examples:
String
Int
Float


Example of a function

int addTwoNumbers(int one, int two){

int total = 0;

total = one + two;

this one has a return of the variable total.
return total;

}

int main(){
int one = 1;
int two = 2;

addTwoNumbers();
}

*/

// Code here explaining concept with comments to guide

// must declare to use printf() function
#include <stdio.h>
// This is the function which is void. Meaning that it doesn't return any data type. Instead it will print out the phrase "Hello World" when called
void hello() {
  // Only job is to print out "Hello World" Doesn't require a return or type.
  printf("Hello World");
}
int main()
{
// This calls the function hello.
  hello();
}
/*
------------------------------------------------------------------------------------
 Challenge: list challenges to be completed here. minimum of one challenge per tutorial
------------------------------------------------------------------------------------


Change the message to "Hello Wonderland."


Another challenge:
Use the example function and change the numbers. 

int addTwoNumbers(int one, int two){

int total = 0;

total = one + two;

this one has a return of the variable total.
return total;

}

int main(){
int one = 1;
int two = 2;

addTwoNumbers();
}

*/
