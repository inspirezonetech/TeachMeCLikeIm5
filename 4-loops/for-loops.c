/* 
------------------------------------------------------------------------------------
 Tutorial: A for Loop is used to repeat a specific block of code a known number of times.
           Syntax: for ( initialize; condition; increment/decrement ) 
                    {
                      statement(s) / code;
                    }
------------------------------------------------------------------------------------
*/
#include <stdio.h>

int main()
{ int i;
   // for loop execution 
   for( i = 0; i < 10; i++ )
   {
      printf("Value of i: %d\n", i);
   }
 //loop executes and values of i, from 0 to 9, are printed new lines.
   return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge: Use a for loop to add nubers from 1 to 10.
------------------------------------------------------------------------------------
*/
