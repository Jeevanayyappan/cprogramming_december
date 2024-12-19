//Write a C Program to find the sum of all even numbers from 1 to n using a while loop.
#include<stdio.h>
int main()
{
    int n,i=2,sum=0;
    printf("Enter a  number :");
    scanf("%d",&n);
    while(i<=n)
    {
      sum=sum+i;
      i+=2;
    }
    printf("Sum=%d",sum);
    return 0;
}