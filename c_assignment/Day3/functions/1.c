//Write a C Program to create a function to calculate the square of a number.
#include<stdio.h>
int square(int n)
{   
    return n*n;
}
int main()
{
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
   square(n);
   printf("The Square of number %d is %d",n,square(n));
   return 0;
}