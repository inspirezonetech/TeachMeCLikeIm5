/* 
------------------------------------------------------------------------------------
 Tutorial: #ifdef (if defined)
------------------------------------------------------------------------------------
*/

/*
We can check if a symbolic constant or a macro is defined using #ifdef
We can also use #if defined to do the same task.
*/

#include <stdio.h>
#define VALUE 1

int main(void)
{
    #ifdef VALUE
        printf("Value is defined\n");
    #else
        printf("Value is not defined\n");
    #endif
}
/*
------------------------------------------------------------------------------------
 Challenge: What does the following code output
 
 #include <stdio.h>
 #define UNIX 1

 int main()
 {
    #ifdef UNIX
        printf("UNIX specific function calls go here.\n");
    #endif

    printf("TechOnTheNet is over 10 years old.\n");

    return 0;
 }
------------------------------------------------------------------------------------
*/
