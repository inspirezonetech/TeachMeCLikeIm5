/* 
------------------------------------------------------------------------------------
 Tutorial: In this tutorial we will see about commenting in C program
 Commenting in code is considered as a best practice since programmer can keep short notes explaining what the code does.  During execution of a program all the comments are ommitted.
 Commenting doesn't have any restrictions or scope.  It can be placed anywhere in the program.
 There are two types of comments:
 1. Single line comment
 2. Multi line comment
 Explore the below code to get a clear view about commenting in c.
------------------------------------------------------------------------------------
*/

// Code here explaining concept with comments to guide
#include <stdio.h>
int main()
{
    // I am a single line comment
    int a = 5;
    /*
    I am a multiline comment
    I start with '/*' and ends with '*/'
    */
    printf ("%d", a);  // We can also put comments onto side of a line like this
    return 0;  /* Even multiline comments can also be placed onto a side of a line */
}
/*
------------------------------------------------------------------------------------
 Challenge 1:
 Write a C program for addition of two numbers and include comments briefly explaining the each and every line of code.
------------------------------------------------------------------------------------
*/
