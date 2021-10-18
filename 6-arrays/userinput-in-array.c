/* 
------------------------------------------------------------------------------------
 Initializing Directly an array is easy. But in real cases programme works on data that is provided by the user. 
 So, in that case, the programme having an array needs user input. We can do this by using for loop as shown below.
------------------------------------------------------------------------------------
*/
// Demonstration of Program to take 5 values from the user and store them in an array
#include <stdio.h>

int main() {
  int Array[5];
  printf("Enter 5 integers: ");

  for (int i = 0; i < 5; ++i) // Taking input and storing it in an array
  {
    scanf("%d", & Array[i]);
  }
  printf("Displaying integers: ");

  for (int i = 0; i < 5; ++i) // printing elements of an array
  {
    printf("%d\n", Array[i]);
  }
  return 0;
}
/*
------------------------------------------------------------------------------------
 Challenge for you.
 Q. In a class 5 subjects are taught. Create an array to store marks of all 5 subjects of a particular student A. 
 Then, find average of the elements of an array after taking user-input. 
 
 Refer to the solution below if not able to solve.
 
 #include <stdio.h>
int main() {
 
  int Marks[5];
  int SumofMarks=0;
  
  printf("Enter Marks in all 5 Sujects: ");
  // Taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &Marks[i]);  
     SumofMarks += Marks[i];
  }
  
  int avg = SumofMarks/5;
  
  printf("Displaying Marks: ");   
  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", Marks[i]);
  }
  
  printf("Average of all 5 subjects is: %d",avg);
  
  return 0;
}
 ------------------------------------------------------------------------------------
*/
