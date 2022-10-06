/* 
------------------------------------------------------------------------------------
 Tutorial: Some of the operators that are frequently used in loops or if conditions are the relational operators. 
           To examine the relationship between the two variables, relational operators are frequently employed in C. 
           It will return value 1 if the relation is true. If not, it returns a value of 0.
           
           ------------------------------------------------------------------------------------------
           | Operator |    Usage    |          Description               |         Example          |
           ------------------------------------------------------------------------------------------
           |  ==      |     x==y    |    x is equals to y                |  10==9 returns true [1]  |
           |-----------------------------------------------------------------------------------------
           |  !=      |    x!=y     |   x is not equals to y             | 5!=6 returns true [1]    |
           |-----------------------------------------------------------------------------------------
           |  >       |   x>y       |  x is greater than y               | 9>10 returns false [0]   |
           |-----------------------------------------------------------------------------------------
           | >=       |  x>=y       | x is greater than or equals to y   | 10>=9 returns true [1]   |
           |-----------------------------------------------------------------------------------------
           |  <       |  x<y        | x is less than y                   | 5<3 returns false [0]    |
           |-----------------------------------------------------------------------------------------
           |  <=      |  x<=y       | x is less than or equals to y      | 8<=8 returns true [1]    |
           ------------------------------------------------------------------------------------------
           
------------------------------------------------------------------------------------
*/
#include <stdio.h>   // To use printf() function

int main() {   // The main function
  // Defining variables
  int a = 5, b = 10;
  // To check whether a is greater than b
  if (a > b)
    printf("%d is greater than %d\n", a, b);
  else
    printf("%d is less than or equal to %d\n", a, b);
  // To check whether a is greater than equal to b
  if (a >= b)
    printf("%d is greater than or equal to %d\n", a, b);
  else
    printf("%d is lesser than %d\n", a, b);
  // To check whether a is less than b
  if (a < b)
    printf("%d is less than %d\n", a, b);
  else
    printf("%d is greater than or equal to %d\n", a, b);
  // To check whether a is less than or equal to b
  if (a <= b)
    printf("%d is lesser than or equal to %d\n", a, b);
  else
    printf("%d is greater than %d\n", a, b);
  // To check whether a is equals to b
  if (a == b)
    printf("%d is equal to %d\n", a, b);
  else
    printf("%d is not equals to %d\n", a, b);
  // To check whether a is not equal to b
  if (a != b)
    printf("%d is not equal to %d\n", a, b);
  else
    printf("%d is equal %d\n", a, b);
  return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge: Take input from user and compare it with 10, if user input is greater than 10 then print "greater", 
            if input is less than 10 then print "less" and if input is equals to 10 then print "equal".
            -Example:
               - if user input 11 then output should be "greater".
               - if user input 8 then output should be "less".
               - if user input 10 then output should be "equal".
------------------------------------------------------------------------------------
*/
