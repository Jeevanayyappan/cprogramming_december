//Write a C Program to display all prime numbers between two given numbers using nested loops.
#include<stdio.h>
#include<math.h>
int main()
{
  int lower,upper,num,isPrime;
  printf("Enter the lower bound : ");
  scanf("%d",&lower);
  printf("Enter the upper bound : ");
  scanf("%d",&upper);
  if(lower>upper)
  {
   printf("Invalid Input!(Since the lower bound should be less than or equal to upper bound.)\n");
   return 1;
  }
  printf("The Prime Numbers between %d and %d are :\n",lower,upper);
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