//Write a C Program to create a function to check whether a number is prime or not.
#include<stdio.h>
int prime(int num)
{
    int lower,upper,isPrime;
    printf("Enter the lower bound : ");
    scanf("%d",&lower);
    printf("Enter the upper bound : ");
    scanf("%d",&upper);
    if(lower>upper)
    {
        printf("Invalid Input!(Since lower bound should be less than the upper bound.)");
        return 1;
    }
    printf("The Prime numbers between %d and %d are : ",lower,upper);
    for(num=lower;num<=upper;num++)
    {
        if(num>2)
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
            printf(" %d ",num);
        }

    }
    
}
int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  prime(num);
  return 0;
}