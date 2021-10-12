/* 
------------------------------------------------------------------------------------
 The switch statement is used to perform different actions based on different conditions. The switch expression is evaluated once and this value is compared with the values 
 of each case. If there is a match then the block of code associated with the case is executed else the default code block is executed. Integer and charecter values can be
 used in the check condition. When char variable are used, always initialize them within ''(single quotes). The break statements are used to terminate a statement sequence. 
 If there are no break statements between cases then the cases following the matched case will get executed until a break statement gets executed.
 Syntax:

	switch (choice)
	{
  	  case 1: // Statement or block of code which will be executed if choice = 1
  	      break;
  	  case 2: // Statement or block of code which will be executed if choice = 2
  	      break;
 	    .
 	    .
 	    .
 	  case n: // Statement or block of code which will be executed if choice = n
 	       break;
    	  default: // Statement or block of  code which will be  executed if choice does not match any of the cases
	}

------------------------------------------------------------------------------------
*/

// Code here explaining concept with comments to guide
#include <stdio.h>
int main()
{
    int ch;
    printf("Enter your choice (1,2,3,4) : ");  // Asking user to enter a choice
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\nChoice is 1\n");  // Statement or block of code which will be executed if choice = 1
        break;
    case 2:
        printf("\nChoice is 2\n");  // Statement or block of code which will be executed if choice = 2
        break;
    case 3:
        printf("\nChoice is 3\n");  // Statement or block of code which will be executed if choice = 3
    case 4:    
        printf("\nGets executed as there is no break in case 3\n");
        break;
    default:
        printf("\nChoice entered is not on of the options 1, 2, 3, 4\n");  // Statement or block of  code which will be  executed if choice does not match any of the cases
        break;
    }
    return 0;
}

/*
------------------------------------------------------------------------------------
 Challenge: Make a small calculator using switch statement. A menu can be displayed and user can enter a choice. Try making the choice charecter variables.
------------------------------------------------------------------------------------
*/
