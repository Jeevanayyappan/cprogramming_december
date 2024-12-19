//Write a C Program to check whether a number is divisible by 2, 3, or both using nested if.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0&&n%3==0)
    printf("%d is divisible by both 2 and 3.\n",n);
    else if(n%2==0)
    printf("%d is divisible by 2 but not 3.\n",n);
    else if(n%3==0)
    printf("%d is divisible by 3 but not 2.\n",n);
    else printf("%d is neither divisible by 2 nor 3.\n",n);
    return 0;
}