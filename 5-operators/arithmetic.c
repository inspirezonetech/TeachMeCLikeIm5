/* 
------------------------------------------------------------------------------------
 Tutorial: This tutorial shows the working of arithmetic operators. The variable x is first used to store the sum of the two numbers, then their difference,
           product, and so on.
------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    int n1, n2, x, y, z;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    x = n1+n2;  // Addition
    printf("n1 + n2 = %d \n", x);
    x = n1-n2;  // Subtraction
    printf("n1 - n2 = %d \n", x);
    x = n1*n2;  // Multiplication
    printf("n1 * n2 = %d \n", x);
    x = n1/n2;  // Division
    printf("n1 / n2 = %d \n", x);
    x = n1%n2;  // Finding remainder
    printf("n1 %% n2 = %d \n", x);
    y = n1;  // Copying value of n1 to y
    z = n2;  // Copying value of n2 to z
    printf("Incremented value of n1 = %d \n", ++n1);
    printf("Incremented value of n2 = %d \n", ++n2);
    printf("Decremented value of n1 = %d \n", --y);
    printf("Decremented value of n2 = %d \n", --z);
}
/*
------------------------------------------------------------------------------------
 Challenge: Take 2 numbers as user inputs. Do the above operations on the inputs and
            check if the results are odd or even. 
------------------------------------------------------------------------------------
*/
