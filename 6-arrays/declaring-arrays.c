/* 
------------------------------------------------------------------------------------
 Tutorial: arrays a kind of data structure that can store a fixed-size sequential collection of 
 elements of the same type. Is used to store a collection of data, but it is often more
 useful to think of an array as a collection of variables of the same type.
 Above is an example to declare an array in C:
 type arrayName [ arraySize ];
------------------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
  int numbers[ 10 ];  /* n is an array of 10 integers */
  int index;

  /* initialize elements of array n to 0 */
  for ( index = 0; index < 10; index++ )
  {
     numbers[index] = index;  // adding the index number inside of the array
  }
  /* output each element inside numbers array */
  for (index = 0; index < 10; index++ )
  {
     printf("Number[%d] = %d\n", index, numbers[index]);
  }

  return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge:
 01 - Write a program that reads an X vector [10]. Next, replace all the null and 
 negative values of vector X with 1. Then show vector X. 
 
 02 - Read a value and make a program that puts the value read in the first position
 of an array N[10]. On each subsequent position, place double the value of the 
 previous position. For example, if the value read is 1, the vector values must be
 1,2,4,8, and so on. Show the following vector. 
------------------------------------------------------------------------------------
*/
