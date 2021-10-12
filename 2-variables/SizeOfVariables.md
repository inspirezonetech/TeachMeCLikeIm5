## Finding Size of Variables is an Important concept.

To find size of Variables of any Datatype be it Int, float, double.
We can use **sizeof()** operator.

We can understand more from following example

```c

#include <stdio.h>
int main() 
{
   printf("Size of int data type : %d\n",sizeof(int));
   printf("Size of char data type : %d\n",sizeof(char));
   printf("Size of float data type : %d\n",sizeof(float));
   printf("Size of double data type : %d\n",sizeof(double));
   
   
   int i = 32;
   printf("Size of i : %d\n",sizeof(i));
   return 0;
}

//Check output of above code, you will get to know it will print respective sizes of int, char, float and double.
//Also its been demonstrated by making an integer 'i', we can find size of i by using 'sizeof()'.

```
