/* 
------------------------------------------------------------------------------------
 Tutorial: Using of scanf to read different data types.
------------------------------------------------------------------------------------
*/

// All functions related to standard input(read) and output(write)
// are included in stdio.h.
// stdio: STanDard Input and Output.
#include <stdio.h>

// Scanf is a function to read some data given by keyboard.
int main()
{
    // Declare variables and initialize them.
    char letter = 's';
    int num = 100;
    float decimal = 3.1415;

    // Print them
    printf("Initial values:\n");
    printf("%c\n", letter);
    printf("%d\n", num);
    printf("%f\n", decimal);

    // Modify its content through scanf
    printf("Enter the new value of letter: ");
    scanf("%c", &letter);

    printf("Enter the new value of num: ");
    scanf("%d", &num);

    printf("Enter the new value of decimal: ");
    scanf("%f", &decimal);

    // As you can see scanf needs at least two parameters
    // a format identifier (%d, %f, %c) and an & followed by the variable
    // name (if you ARE using pointers, in that case you must
    // ommit the "&").
    // Format identifier tells to scanf the data type of the data you want
    // to read.

    // Print new values:
    printf("New values:\n");
    printf("%c\n", letter);
    printf("%d\n", num);
    printf("%f\n", decimal);
}
/*
------------------------------------------------------------------------------------
 Scanf can read multiple values at once, you just need to type the format identifiers 
 between ", then type format identifiers separated by an space, that will be the first 
 argument, after that, all the following arguments will be an & followed by 
 the variable's name. If you want to read two int variables at once the syntax will be
 scanf("%d %d", &num1, &num2)
 
 Challenge: Read "Hello" letter by letter and print all the letters 
            together. 

------------------------------------------------------------------------------------
*/
