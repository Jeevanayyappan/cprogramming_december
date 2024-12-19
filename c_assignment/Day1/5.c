//Write a C Program to check whether the user-entered number is a multiple of 3 and 5 or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%3==0&&n%5==0)
    printf("%d is a multiple of 3 and 5",n);
    else if(n%3==0)
    printf("%d is a multiple of 3 but not multiple of 5",n);
    else if(n%5==0)
    printf("%d is a multiple of 5 but not multiple of 3",n);
    else printf("%d is neither a multiple of 3 nor 5",n);
    return 0;
}