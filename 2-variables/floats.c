/* 
------------------------------------------------------------------------------------
 Tutorial: float is a datatype which is used to represent the floating point numbers.
 It has 6 decimal digits of precision.
 For example, 10.327, -3.14, 11.234.
------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
int main()
{
    float x = 50.621;
    int y = 40;
    printf("The float value : %f\n", x);
    printf("The sum of float and int variable : %f\n", (x + y));
    return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge: Make a program that reads a salesperson's name, 
 his fixed salary and the total sales made by him in the month (in cash).
 Knowing that this seller earns 15% commission on his sales made,
 inform the total receivable at the end of the month, with two decimal places.
------------------------------------------------------------------------------------
*/
