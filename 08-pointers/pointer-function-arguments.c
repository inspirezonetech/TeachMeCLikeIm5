/* 
------------------------------------------------------------------------------------
 Tutorial: This tutorial explains the concept of function pointers as argument in C.

 We cannot pass a function as an argument to another function, but we can pass the
 reference of a function as a parameter by using a function pointer. This process is
 known as call by reference. 

 C programming allows you to create a pointer pointing to the function, which can be
 further passed as an argument to the function. We can create a function pointer as follows:

(return_type) (*point_name) (parameter1, parameter2, ...);

In the above syntax:
  -> return_type: the variable type which is returned by the function
  -> *pointer_name: the function pointer
  -> parameter1, parameter2, ... : the list of parameters passed to the function

e.g:
  float (*add)();     this is a valid declaration for the function pointer
  float *add();       this is an illegal declaration for the funciton pointer

A function pointer can also point to another function, or we can say that it holds
the address of another function.

We can then pass the function pointer as a parameter:

 1. We need a function F1 that takes as a parameter a function pointer of type TYPE1.
 2. We need a function of type TYPE1, meaning it has the same return type and same type
    of arguments in order. Let's call this function Function2
 3. We declare a pointer function of type TYPE1. Let's call it FunctionPointer.
 4. We assign Function2 to FunctionPointer:   FunctionPointer = Function2
 5. We then call function F1 with FunctionPointer as a parameter. 

We shall see an illustration of this in the example below.
------------------------------------------------------------------------------------
*/

// Code here explaining concept with comments to guide
#include <stdio.h>

// function declaration
int add(int a, int b)
{
        return a + b;
}

void f(int x)
{
  printf("%d\n", x);
}

// another function declaration
void display(void (*p)(int))
{
    for (int i=1; i <= 5; i++)
    {
        p(i);
    }
}

int main()
{
    /* declaration of a pointer to a function that returns a integer and takes as arguments
    2 integers */
    int (*a)(int, int);
    // assigning address of add() to the function pointer "a"
    a = add;      // Now, 'a' is a pointer pointing to the add()

    // We can call the add() function by using the pointer, i.e., 'a'.
    printf("%d", a(2, 3));  // prints add(2,3) = 5.0


    // How we can pass a function pointer as parameter

    void (*p)(int);     // void function pointer declaration
    p = f;
    printf("The values are :");
    display(p);  // prints 1, 2, 3, 4, 5 each in a new line
    return 0;
}

/*
------------------------------------------------------------------------------------
 Challenge: 
 1. Write a function that prints "I love pointers!"
 2. Declare a corresponding function pointer and assign the previous function to it.
 3. Write a second function with the correspoing function pointer type as parameter.
 4. Call the second function with the first function as a parameter.
------------------------------------------------------------------------------------
*/
