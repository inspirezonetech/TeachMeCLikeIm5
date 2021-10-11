/* 
------------------------------------------------------------------------------------
 Tutorial: if-else statement
 If...else statement or the so called conditional statement is if the Boolean expression 
 evaluates to true, then the if block will be executed, otherwise, the else block will be executed.
 ------------------------------------------------------------------------------------
 The general syntax for if-else in C is: 
 if(boolean_expression) {
    statement (If the expression is true it will excute this line)
  } else {
    statement(If the expression is false it will excute this line)
  }
------------------------------------------------------------------------------------
*/

// Example
int main(){ // this is where the program start excution
	
	/* local variable declaration */
   int number = 12;
 
   /* check the boolean condition using if...else statement
   The program will check if the number is greater than zero or not*/
   if( number > 0 ) {
      /* if condition is true then it will print the following statement*/
      printf("%d is a positive number", number );
   } else {
      /* if condition is false then print the following statement*/
      printf("%d is a negative number", number );
   }
   return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge: list challenges to be completed here. minimum of one challenge per tutorial
 1. Check if a number is greater than 18 or not.
 2. Check if a number is a even or odd. Hint: use '%' sign to get the remainder and check.
------------------------------------------------------------------------------------
*/
