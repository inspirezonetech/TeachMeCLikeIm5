/* 
------------------------------------------------------------------------------------
 Tutorial: This tutorial is about Keyword typedef

Typedef is a keyword used in C programming to provide some meaningful names to the already existing variable in the C program.

Syntax of typedef:

    typdef <existing_name> <alias_name>

Example:

    typedef unsigned int uint; 

Now we can write ' uint ' instead of writing 'unsigned int 'in our program.

Create variable of type unsigned int by writing the following statement

    uint a,b; // instead of unsigned int a,b;


NOTE: typedef can be used with structure to define a new data type and then use that data type to define structure variables directly as follow

typedef struct structure_name
{
    type member1;
    type member2;
    type member3;
} type_name;

Here type_name represents the stucture definition associated with it. Now this type_name can be used to declare a variable of this stucture type.

type_name t1, t2;
------------------------------------------------------------------------------------
*/

// Code here explaining concept
#include <stdio.h>
#include <string.h>

// struct with typedef person
typedef struct Person {
  char name[50];
  int citNo;
  float salary;
} person;

int main() {
  // create  Person variable
  person p1;  // equivalent to -> struct Person p1

  // assign value to name of p1
  snprintf(p1.name, sizeof(p1.name), "Steve Holland");

  // assign values to other p1 variables
  p1.citNo = 1984;
  p1.salary = 2500;

  // print struct variables
  printf("Name: %s\n", p1.name);
  printf("Citizenship No.: %d\n", p1.citNo);
  printf("Salary: %.2f", p1.salary);

  return 0;
}
/*
----------------------------------------------------------------------------------------------------------------------------------------------------------------
 Challenge: Write a C program to store and display infomation of books in a library using structure but without using the 'struct' keyword in the main function.
----------------------------------------------------------------------------------------------------------------------------------------------------------------
*/ 
