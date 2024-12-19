//Write a C Program to check if an inputted number is divisible by both 4 and 6, either one of them or neither using nested if.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%4==0&&n%6==0)
    printf("%d is divisible by both 4 and 6.\n",n);
    else if(n%4==0)
    printf("%d is divisible by 4 but not 6.\n",n);
    else if(n%6==0)
    printf("%d is divisible by 6 but not 4.\n",n);
    else printf("%d is neither divisble by 4 nor 6.\n",n);
    return 0;
}