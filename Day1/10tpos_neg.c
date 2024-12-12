//
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    (n>=0)? printf("%d is Positive",n):printf("%d is Negative",n);
    return 0;
}