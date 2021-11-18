/* 
------------------------------------------------------------------------------------
 
 Tutorial: Ternary operator  
 
 Ternary operators are just like if...else statements and used for conditional flow.
 They follow the same procedure as if...else, if a condition is true then follow one path otherwise follow another path.
 It provides a simpler way to write this in a single line, saving space and is used for single statements.
 
 ------------------------------------------------------------------------------------
 The general syntax for ternary operator in C is: 
 
  Expression1 ? Expression2 : Expression3 
 
------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    // Defining variables for use
    int a = 10, b = 5, c = 15;

    // Using ternary operator to print a particular result based on a condition
    // the below statement is equivalent to :
    /*
    if(a>b) {printf("%d is greater", a);}
    else {("%d is greater", b);}
    */
    a > b ? printf("\n%d is greater", a) : printf("\n%d is greater", b);
    // OUTPUT : 10 is greater

    // Using ternary operator to store the results based on a condition
    // The below code assigns a-b to result if a>b , or b-a if it is not.
    int result = a > b ? a-b : b-a;
    printf("\nresult : %d ", result);
    // OUTPUT : result : 5

    // Nested ternary operators - This mean using a ternary statement as one of the expressions, i.e., one ternary statement inside another.
    // Using ternary operator to find largest of three numbers
    // The below code compares two numbers first then compares the bigger number with the third number to find the largest.

    a > b ? (a > c? printf("\n%d is largest", a) : printf("\n%d is largest", c))
        : (b > c? printf("\n%d is largest", b) : printf("\n%d is largest", c));
    // OUTPUT : 15 is largest
    return 0;
}

/*
------------------------------------------------------------------------------------
 Challenge: Use Ternary operators to perform the following:
 1. Check if two numbers are equal or not and print appropriate results.
 2. Check if a single number is a even or odd and print appropriate results. 
 3. Use ternary statement to find the smallest number among 3 numbers.
------------------------------------------------------------------------------------
*/
