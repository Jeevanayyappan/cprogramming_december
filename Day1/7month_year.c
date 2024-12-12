// Using Ternary Operator wap to determine whether the month number given by user is a month of a year or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the month number:");
    scanf("%d",&n);
    if(n>=1&&n<=12)
    printf("%d is a month of a year",n);
    else
    printf("%d is invalid month",n);
    return 0;
}