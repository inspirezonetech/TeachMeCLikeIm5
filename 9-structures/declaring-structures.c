/* 
------------------------------------------------------------------------------------
 Tutorial: brief description of tutorial content
------------------------------------------------------------------------------------
*/


#include<stdio.h>

struct ACCESSVALUES
{
    int a,b;
};

int main()
{
    struct ACCESSVALUES accessVar;
    
    printf("Enter the Number One : ");
    scanf("%d",&accessVar.a);
    
    printf("Enter the Number Two : ");
    scanf("%d",&accessVar.b);
    
    printf("The Sum of Two Numbers are : %d", accessVar.a + accessVar.b);
}
------------------------------------------------------------------------------------
 Challenge: list challenges to be completed here. minimum of one challenge per tutorial
------------------------------------------------------------------------------------
*/
