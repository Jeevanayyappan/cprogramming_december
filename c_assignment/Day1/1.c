//Write a C Program to check whether the user-entered integer is a positive number or a negative number.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    int max_num=(x>y)?printf("%d is greater",x):printf("%d is greater",y);
    return 0;
      
} 