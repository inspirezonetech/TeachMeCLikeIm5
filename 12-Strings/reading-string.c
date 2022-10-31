/* 
------------------------------------------------------------------------------------
There are various functions to read input string from users.

 I) The scanf() function reads the sequence of characters until it encounters whitespace (space, newline, tab, etc.).

 Note: Also notice that we have used the code input_string_variable_name instead of  ' &input_string_variable_name ' with scanf().
  eg: scanf("%s", name);
  This is because name is a char array, and we know that array names decay to pointers in C.Thus, the name in scanf() already points to the address of the first element in the string, which is why we don't need to use &.

 II) To read entire line fgets() function is used.
fgets(name, sizeof(name), stdlin); // read string

Note: The gets() function can also be to take input from the user. However, it is removed from the C standard.

------------------------------------------------------------------------------------
*/

// Code here explaining concept with comments to guide
#include<stdio.h>
int main()
{
  char name[30];
  printf("Enter full name: ");
  fgets(name, sizeof(name), stdin);  // read string
  printf("You entered the following name: ");
  puts(name);    // display string
  return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge: Develope a program to accept user name and a an integer value indicating their number of PRs made in Hacktoberfest and display the message as follows

 1. If no of PRs>=4:

  Hello <user's name>, You have successfully completed Hacktoberfest.

 2. In all other cases:

  Hello <user's name>,
  You need minimum 4 PRs to complete the Hacktoberfest Challenge.
------------------------------------------------------------------------------------
*/
