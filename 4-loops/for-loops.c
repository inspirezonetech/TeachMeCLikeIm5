/* 
------------------------------------------------------------------------------------
 Tutorial: brief description of tutorial content
------------------------------------------------------------------------------------
*/


#include<stdio.h>
int main()
{
    int limit,sum=0,loop;
    
    printf("Enter the Elements Limit for Sum : ");
    scanf("%d",&limit);
    
    for (loop=1; loop<=limit ; loop++)
    {
        printf("%d\n",loop);
        sum = sum + loop;
    }
    
    printf("The Sum Of Elements are : %d",sum);
}
------------------------------------------------------------------------------------
 Challenge: list challenges to be completed here. minimum of one challenge per tutorial
------------------------------------------------------------------------------------
*/
