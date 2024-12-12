//WAP to check whether the given number from user is a multiple of 3 and 5 or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%3==0&&n%5==0)
    printf("%d is a multiple of both 3 and 5",n);
    else if(n%3==0)
        printf("%d is a multiple of 3",n);
        else if(n%5==0)
            printf("%d is a multiple of 5",n);
            else
                printf("%d is neither multiple of 3 nor 5",n);
     return 0;
    
}