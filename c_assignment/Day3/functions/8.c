//Write a C Program to create a function to calculate the power of a number (x^y) using recursion
#include<stdio.h>
int power(int x,int y)
{
   if(y==0)
   return 1;
   else
   return x*power(x,y-1); 
}
int main()
{
    int x,y;
    printf("Enter the Base(x): ");
    scanf("%d",&x);
    printf("Enter the Exponent(y): ");
    scanf("%d",&y);
    power(x,y);
    printf("The Value of %d^%d=%d",x,y,power(x,y));
    return 0;
}