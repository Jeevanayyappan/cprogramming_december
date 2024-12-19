//Write a C Program to check whether the month number is a valid month number or an invalid month number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a month number: ");
    scanf("%d",&n);
    if(n>=1&&n<=12)
    printf("%d is a valid month number of a year",n);
    else
    printf("%d is a invalid month number of a year",n);
    return 0;
}