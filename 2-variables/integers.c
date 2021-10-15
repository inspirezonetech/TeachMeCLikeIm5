/* 
------------------------------------------------------------------------------------
 Tutorial: int (integer) is one of the data types in C programming.
 The size of int is at least 2, usually 4 bytes.
 Integers are whole numbers -> zero, positive and negative values but no decimal values. 
 For example, 0, -3, 11.
------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
  int age;  // declaring a variable

  age = 27;  // assigning value to an integer variable
  printf("My name is Ruan and I'm %d years old.\n", age);

  return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge: Read two integer values, in this case for variables 'a' and 'b'. Then calculate the sum 
 between them and assign it to a variable called 'sum'. Then print the value of the 'sum' variable.
------------------------------------------------------------------------------------
*/
