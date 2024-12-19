//Write a C Program to display all prime numbers between two given numbers using nested loops.
#include<stdio.h>
int main()
{
    int lower,upper,num,isPrime;
    prinrf("Enter the lower bound : ");
    scanf("%d",&lower);
    printf("Enter the upper bound : ");
    scanf("%d",&upper);
    if(lower>upper)
    {
        printf("Invalid Input!(Since lower bound should be less than the upper bound.)");
        return 1;
    }
    printf("The prime numbers between %d and %d are : ");
    for(num=lower;num<=upper;num++)
    {
        if(num<2)
        {
            continue;
        }
        isPrime=1;
        for(int i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            printf("%d",num);
            printf("\n");
        }
    }
    return 0;
}