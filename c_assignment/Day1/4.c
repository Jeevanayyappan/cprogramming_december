//Write a C Program to check whether the user-entered integer is a two-digit number or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a integer: ");
    scanf("%d",&n);
    if((n>=-99&&n<=-10)||(n>=10&&n<=99))
    printf("%d is a two-digit number",n);
    else
    printf("%d is a not a two-digit number",n);
    return 0;
}