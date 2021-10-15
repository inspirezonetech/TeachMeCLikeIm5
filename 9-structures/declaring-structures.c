/* 
------------------------------------------------------------------------------------
 Tutorial: This tutorial explains the concept of structure in C programming

Structure is a user-defined data type in C, used to store a collection of different kinds of data.

How to create a structure?

'struct' keyword is used to create a structure.

Syntax of struct

    struct structureName
    {
        dataType member1;
        dataType member2;
        .....

    }structureVariable1, structureVariable2 ;

    //A structure variable can either be declared with structure declaration or as a separate declaration like basic types.

    int main(){

    struct structureName variable1, variable2....,variableN;

    }

Structure elements can be accessed through a structure variable using a dot (.) operator.
e.g.: structureVariable1.member1= valueAssigned;
 
------------------------------------------------------------------------------------
*/

#include <stdio.h>

// create struct with person1,person2 variable
struct Person
{
    char name[50];
    int citNo;
    float salary;
} person1;  // method I of declaring variable

int main()
{
    struct Person person2;  // declaring struct variable outside of struct declaration (method II)

    // assign value to name of person1
    snprintf(person1.name, sizeof(person1.name), "Steve Holland");
    /* 
    snprintf() function fromats and stores a serios of character and values in the array
    it is used to redirect the output of printf() function onto a buffer.
    
    */

    // assign values to other person1 variables
    person1.citNo = 1984;
    person1.salary = 2500;

    // assign value to name of person2
    snprintf(person2.name, sizeof(person2.name), "Jessica Roman");

    // assign values to other person2 variables
    person2.citNo = 1976;
    person2.salary = 25000;

    // print struct variables
    printf("Name: %s\n", person1.name);
    printf("Citizenship No.: %d\n", person1.citNo);
    printf("Salary: %.2f\n\n", person1.salary);

    printf("Name: %s\n", person2.name);
    printf("Citizenship No.: %d\n", person2.citNo);
    printf("Salary: %.2f\n", person2.salary);

    return 0;
}
/*
----------------------------------------------------------------------------------------------------------------------------------------------------
 Challenge: Write a C program to store and display infomation of books in a library using structure. (Tip: Use members like bookid, bookname etc..)
----------------------------------------------------------------------------------------------------------------------------------------------------
*/

