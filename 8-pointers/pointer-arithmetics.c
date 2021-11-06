/* 
------------------------------------------------------------------------------------
 Tutorial: This tutorial explains the concept of pointer arithme
 tic in C.
 The operations that can be performed on pointers are:

 1. Increment/Decrement of a Pointer

 -> When a pointer is incremented/decremented, it increments/ decrements by the number equal to the size of the data type for which it is a pointer

   new_address= current_address + size_of(data type) // increment
   new_address= current_address - size_of(data type) // decrement

 2. Addition of integer to a pointer

   new_address= current_address + (number * size_of(data type))  

 3. Subtraction of integer to a pointer

   new_address= current_address - (number * size_of(data type))  

 4. Subtracting two pointers of the same type

 -> Difference between two pointers gives the number of elements of its data type that can be stored between the two pointers

 For Example: 
    Two integer pointers say ptr1(address:1000) and ptr2(address:1016) are subtracted. The difference between address is 16 bytes. Since the size of int is x (say) bytes, therefore the increment between ptr1 and ptr2 is given by (16/x)

 NOTE: Only pointers to similar datatypes can be subtracted 

------------------------------------------------------------------------------------
*/

// Code here explaining concept with comments to guide
#include <stdio.h>

int main()
{
    int number = 50, *p, s1, s2;  // integer variable and pointer to integer
    int no = 90, *ptr;
    char ch  ='A', *c;  // char variable and pointer to char

    // computing size of datatypes

    s1 = sizeof(int);
    s2 = sizeof(char);

    printf("The size of int: %d\n", s1);
    printf("The size of char: %d\n\n", s2);

    p = &number;
    ptr = &no;
    c = &ch;

    // Increment and Decrement

    printf("Address of p variable is %d \n", p);
    p = p + 1;
    printf("After increment: Address of p variable is %u \n\n", p);  // p is incremented by s1 bytes


    printf("Address of c variable is %d \n", c);
    c = c - 1;
    printf("After decrement: Address of c variable is %d \n\n", c);  // c is decremented by s2 byte

    // Addition and subtraction

    printf("Address of p variable is %d \n", p);
    p = p + 5;  // adding 5 to int pointer variable
    printf("After adding 5: Address of p variable is %d \n\n", p);  // p is increased by 5*s1 bytes

    printf("Address of c variable is %d \n", c);
    c = c - 8;  // subtracting 8 from char pointer variable
    printf("After subtracting 8: Address of c variable is %d \n\n", c);  // c is decremented by 8*s2 bytes

    // subtracting two pointers

    printf("Address of p variable is %d \n", p);
    printf("Address of ptr variable is %d \n", ptr);

    printf("The increment between ptr and p is %ld\n", p-ptr);

    return 0;
}
/*
----------------------------------------------------------------------------------------------
 Challenge: Write a C program to show pointer arithmetic using float and double datatypes.
----------------------------------------------------------------------------------------------
*/
