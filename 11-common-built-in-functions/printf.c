/*
---------------------------------------------------------------------------------------------------------------------------------
 Tutorial: This tutorial is about how to use printf function in c language.
           - Printf() is one of the primary output functions in C programming. A prepared output is sent to the screen by the function.
           - We must use the #include <stdio.h> declaration to include the stdio.h header file in order to use printf() in our application.
           - We use %d format specifier to print int types. %d gets replaced by the variable's value.
           - To print float, we use %f format specifier.
           - to print char, we use %c format specifier.
           - To print double type , we use %lf format specifier.
           - You can also perform some arithmetic operations in it.
           - printf function returns the number of characters printed and negative if error occurs
-----------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>   // The "#include stdio.h>"" declaration must be used to include
                    // the stdio.h header file if we want to utilise printf().

int main() {  // The main function
  // print whole string using double quotation marks ("").
  printf("Hello World \n");  // \n is used for line break

  // you can also print the number of element in print function
  int x = printf("Hi github");
  printf("\n %d \n", x);  // 9 is the output (note: the space character is counted)

  // Declaring variables
  int a = 10;
  char c = 'c';
  float f = 12.3;
  double d = 15.43;

  // For printing int types, we utilise the %d format specifier. The value
  // of the variable is substituted for by %d.
  printf("Integer a = %d \n", a);

  // To print char type, %c is used.
  printf("Character c = %c \n", c);

  // To print float, we use %f format specifier.
  printf("Float f = %f \n", f);

  // To print double type, %lf is used.
  printf("Double d = %lf \n", d);

  // You can do some operation printf function and result will be displayed.
  printf("a + d = %lf \n", a+d);

  return 0;
}
/*
--------------------------------------------------------------------------------------------------------------------------------------
Challenge: Take input from user in variable a and b, print number of elements present in each variable and then print sum of number of
            elements present in a and b.
            example: 
              - a = 12343212 and b = 887788
              - number of elements in a is 8 and in b is 6.
              - sum is 14.
            

--------------------------------------------------------------------------------------------------------------------------------------
*/
