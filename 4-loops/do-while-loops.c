/* 
------------------------------------------------------------------------------------
 Tutorial: Do while loop
Unlike for and while loops, which test the loop condition at the top of the loop, the do...while loop in C programming checks its condition at the bottom of the loop.
A do...while loop is similar to a while loop, except the fact that it is guaranteed to execute at least one time.
 ------------------------------------------------------------------------------------
 The general syntax for do-while-llops in C is: 
 do {
   statement(s);
} while( condition );
------------------------------------------------------------------------------------
*/

// Example
#include <stdio.h>
int main(){  // this is where the program start excution
// local variable declaration
int number = 2;
// do loop execution
do {
printf("The number is: %d\n", number);
// increament in every step
number = number+1;
// while loop execution
}while (number < 5);
return 0;
}
/*
------------------------------------------------------------------------------------
 Challenges:
 1. Print all the numbers from 1 to 10.
 2. Print all even numbers up to 5.
------------------------------------------------------------------------------------
*/
