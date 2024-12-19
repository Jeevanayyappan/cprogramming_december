//Write a C Program to check whether the user-entered integer is a digit or a number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a integer: ");
    scanf("%d",&n);
    if(n>=-9&&n<=9)
    printf("%d is a digit",n);
    else
    printf("%d is a number",n);
    return 0;
}