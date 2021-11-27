/* 
------------------------------------------------------------------------------------
 Tutorial: This tutorial explains the concepts of pointers in C programming.

 Pointers (pointer variables) are special variables that are used to store addresses rather than values.

 Pointer Syntax

   Pointers can be declared in the following three ways:

    dataType* pointerVariableName;  
    dataType *pointerVariableName; 
    dataType * pointerVariableName; 

    e.g., int *p; // declares pointer variable p of type int

 NOTE:
    1. * is called the dereference operator (when working with pointers)
    2. The pointer variable should be of the same datatype as that of the variable whose address is to be stored in it.

 Assigning addresses to Pointers:
  
    pointerVariabaleName = &var; 
    // & is the address of operator
    // here var refers to the variable whose address is to be stored

    e.g., int *p, c;
         p=&c; // assigning of c's address to p

------------------------------------------------------------------------------------
*/

// Code here explaining concept with comments to guide
#include<stdio.h>

int main()
{
    int *pc, c;
    c = 22;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);

    pc = &c;  // assigning value of c's address to pc
    printf("Address of c: %p\n", pc);
    printf("Content of c: %d\n", *pc);  // 22
    printf("Address of pc: %p\n", &pc);
    printf("Content of pc: %p\n\n", pc);  // same as the address of c

    c = 11;  // assigning new value to c
    printf("Address of c: %p\n", pc);
    printf("Content of c: %d\n\n", *pc);  // 11

    *pc = 2;  // assigning new value to c using it's pointer variable pc
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);  // 2
    return 0;
}
/*
----------------------------------------------------------------------------------------------------------------------------------
 Challenge: Write a C program declaring a float variable and display the memory address of the variable using a pointer variable.

----------------------------------------------------------------------------------------------------------------------------------
*/
