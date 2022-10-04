/* 
------------------------------------------------------------------------------------
 Tutorial: This tutorial is about how to declare function in C language.

 INTRODUCTION-
 - A function declaration tells the compiler about a function name and how to call the function. The actual body of the function can be defined separately.
 
 - A functon declaration consists of following:
 
   - return_type function_name( parameter list );
   - A return type is the datatype (like: int, char, float, etc.) of the variable or value which the function is going to return.
   - You can define function name according to your requirement, usually function name is given based on what that function is doing, 
     for better understanding of code.
   - A parameter list is name of all the parameters with its datatype which are going to be passed in the function.
     - Parameter names are not important in function declaration only their type is required.
     
 -Function declaration is required when you define a function in one source file and you call that function in another file. In such case, you should
  declare the function at the top of the file calling the function.
------------------------------------------------------------------------------------
*/

// Including Header file
#include<stdio.h>  // including <stdio.h> to use printf() function


int max(int num1, int num2);  // function declaration

/* Above function can also be declared as: int max(int, int);
 because while declaring a function parameter name is not important only their type is required.
*/

int main() {
  /* local variable definition */
  int a = 100;
  int b = 200;
  int ret;
  /* calling a function to get max value */
  ret = max(a, b);
  printf("Max value is : %d\n", ret);
  return 0;
}
/* @brief function returning the max between two numbers */
/*
   @return_type is "int"
   
   @ function_name is "max"
   
   @parameter_list is "int num1" and "int num2" 
*/
int max(int num1, int num2) {  // Defining the function
  /* local variable declaration */
  int result;
  if (num1 > num2)
    result = num1;  // comparing both of variables and returnig the result.
  else
    result = num2;
  return result;
}
/*
------------------------------------------------------------------------------------
 Challenge: Write a program using function to print factorial of number given by the user.
            - example:
            - if you called a function fact(5), the program should print 120 (the factorial of 5).
            - if you called a function fact(3), the program should return 6 (the factorial of 3).
------------------------------------------------------------------------------------
*/
