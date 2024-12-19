//Write a C Program to find the factorial of a number using a for loop.
#include<stdio.h>
int main()
{
    int num,fac=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("The Factorial of a negative number does not exist.");
        return 1;
    }
    else
    {
    for(int i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    }
    printf("The Factorial of %d is %d",num,fac);
    return 0;
}