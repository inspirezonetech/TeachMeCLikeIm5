/* 
----------------------------------------------------------------------------------------------
 Tutorial: 
 The syntax of a while loop in C programming language is − while(condition) { statement(s); }
 Here, statement(s) may be a single statement or a block of statements. The condition may be 
 any expression, and true is any nonzero value. The loop iterates while the condition is true.
----------------------------------------------------------------------------------------------
*/

// This is a pre-processor directive. It includes the standard input output library in our program
#include <stdio.h>

// The function 'main' is the first entry point for the program
int main()
{
    // local variable definition and initialization
    int a = 1;

    /*
    while loop will run till condition (a<=5) is true, that is till a=5 loop will be executed,
    so loop will run 5 times.
    */
    while (a <= 5)
    {
        // The print function is used to output to the console
        printf("I know while loop \n");

        // incrementing a by +1 every time loop runs
        a++;
    }
    return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge: Edit the code above to print "I love while loop"  10 times to console
------------------------------------------------------------------------------------
*/
