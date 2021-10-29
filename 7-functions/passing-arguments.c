/* 
------------------------------------------------------------------------------------
 Tutorial: This tutorial is about how arguments are passed to a function.

INTRODUCTION:
 - In order to call a specific function in C, we need to match the function call with 
 the function signature i.e, if any function in taking one argument of type of int,
 then inorder to call that function we also need to paas one parameter of type int
 in its calling.

- The parameter that is passed from the funciton calling is refered as the Actual Parameter
of the function.

- The parameter or expression which is referenced in the parameter list of the function
is refered as the Formal parameter.

- In order to call a function we need to pass the same number of actual parameters with
the same type as required by the formal parameter in the function call.
------------------------------------------------------------------------------------
*/

// Including header file.
#include<stdio.h>  // For using printf()

/**
 * @brief function which will square of its parameters.
 * 
 * @param x 
 * @return int 
 */
int Square(int x){
    return x*x;
}

/**
 * @brief function which will return the Addition of its parameters.
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int Sum(int x, int y){
    return x+y;
}

/**
 * @brief function which will return the Subtraction of its parameters.
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int Sub(int x, int y){
    return x-y;
}

/**
 * @brief main() function or the driving function.
 * 
 * @return int 
 */
int main()
{
    // Calling Square() function and printing the result on to the console.
    printf("\nSquare of 3: %d", Square(3));

    // Calling Sum() function and printing the result on to the console.
    printf("\nAddition of 30 + 50: %d", Sum(30, 50));

    // Calling Sub() function and printing the result on to the console.
    printf("\nDifference of 50 - 30: %d", Sub(50, 30));

    return 0;
    // End of main() function.
}
/*
------------------------------------------------------------------------------------
 Challenge: Write a program for a menu driven console based calculator.
------------------------------------------------------------------------------------
*/
