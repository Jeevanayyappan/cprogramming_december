//Write a C Program to create a function to check whether a number is prime or not.
#include<stdio.h>
int prime(int num)
{
    if(num<2)
    {
        printf("%d is not a prime number",num);
        return 1;
    }

    for(int i=2;i*i<=num;i++)
    {
        if( num%i==0 )
        {
            printf("The number %d is not a prime number",num);
            return 1;
        }
    }
    printf("The number %d is a prime number",num);
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    prime(num);
    return 0;
}
