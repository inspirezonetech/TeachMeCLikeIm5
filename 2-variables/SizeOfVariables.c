/* 
------------------------------------------------------------------------------------
Finding Size of Variables is an Important concept.
To find size of Variables of any Datatype be it Int, float, double. We can use **sizeof()** operator,
We need to write name of variable, or datatype whose size we want to know in the bracket region of 'sizeof(_writehere_)' (Italic space).
Also one thing to keep in mind is that sizes of Datatypes are compiler based, it may differ in diferrent places. 

But, generally size of 
int is 4 bytes.
char is 1 byte.
float is 4 byte.
double is 8 byte.

------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    printf("Size of int data type : %d\n", sizeof(int));
    printf("Size of char data type : %d\n", sizeof(char));
    printf("Size of float data type : %d\n", sizeof(float));
    printf("Size of double data type : %d\n", sizeof(double));

    // Check output of above code, you will get to know it will print respective sizes of int, char, float and double.

    int i = 32;
    printf("Size of i : %d\n", sizeof(i));  // Also its been demonstrated by making an integer 'i', we can find size of i by using 'sizeof()'.

    return 0;
}

/*
------------------------------------------------------------------------------------
Try finding out Sizes of following variables
(a) Size of char alpha =  'A'.
(b) Size of long Int.
(c) Size of long double.
------------------------------------------------------------------------------------
*/
