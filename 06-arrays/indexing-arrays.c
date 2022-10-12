/* 
------------------------------------------------------------------------------------
 Tutorial: This tutorial is about indexing array in c language.
           - Instead of defining distinct variables for each item, arrays are used to hold numerous values in a single variable.
           - To access an array element, refer to its index number.
           - Array indexes start with 0: [0] is the first element. [1] is the second element, etc.
           - The last element in array is at n-1th position (where n is total number of elements present in the array.
           - consider the following example:
           
           ---------------------------------------------------------------------
           |    11  |    12   |    13   |    14   |    15   |   16   |    17   |   <----------- this is array x with 7 number of elements (n = 7)
           --------------------------------------------------------------------                 
               0         1        2          3         4        5       6 (n-1)
------------------------------------------------------------------------------------
*/
#include <stdio.h>  // Include this header file to use printf() function
int main() {  // main function
  // declaring array x
  // array x have 7 elements
  int x[]={11, 12, 13, 14, 15, 16, 17};  // you can also define it as x[7].
  // access element at 0th postion
  printf("element at 0th position is = %d \n", x[0]);
  // acess element at 4th position
  printf("element at 4th position is = %d \n", x[4]);
  // access last element of array
  printf("the last element of array x is = %d \n", x[6]);
  return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge: Define a array x[]={5, 6, 3, 8, 29, 33, 2, 7} and print the sum of all elements whose postion is even.
            example:
                    - you have a array y[]={12, 22, 43, 54, 35}
                    - even postions are 0, 2, 4
                    - elements present on these potions are 12, 43, 35 respectively
                    - so the sum should be 12+43+35=90
                    - so output should be 90.
 ------------------------------------------------------------------------------------
*/
