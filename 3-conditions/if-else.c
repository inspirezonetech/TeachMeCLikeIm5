/* 

------------------------------------------------------------------------------------

 Tutorial: if...else statement
 If...else statement or the so called conditional statement is if the Boolean expression 
 evaluates to true, then the if block will be executed, otherwise, the else block will be executed.


------------------------------------------------------------------------------------

*/




// All functions related to standard input(read) and output(write)

// They are included in stdio.h.

// stdio: STanDard Input and Output.

#include <stdio.h>



// Scanf is a function to read some data given by keyboard.
int main()

{

    // Declare variables and initialize.

   int number;
   printf("Enter a number: ");
   scanf("%d",&number);




    // check the boolean condition using if...else statement
    
    // The program will check if the number is greater than zero or not.
   
   
   if(number > 0) {
   	
      // if condition is true then it will print the following statement
      
      printf("%d is a positive number", number);
      
   } else {
   	
      // if condition is false then print the following statement
      printf("%d is a negative number", number);
   }




}

/*

------------------------------------------------------------------------------------

 Challenge: 1. Check if a number is greater than 18 or not.
 
	    2. Check if a number is a even or odd. Hint: use '%' sign to get the remainder and check.


------------------------------------------------------------------------------------

*/
