//Using Ternary Operator to find maximum of two numbers
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    int max_num=x>y?x:y;
    printf("The max_number is %d",max_num);
    return 0;
}