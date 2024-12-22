//Write a C Program to demonstrate how to use a pointer to access and modify the value of a variable.
#include<stdio.h>
int main()
{
   int n=5;
   printf("Original value of number is %d\n",n);
   int *ptr;
   ptr=&n;
   printf("Value of number accesesd through pointer is %d\n",*ptr);
   *ptr=20;
   printf("Modified value of number is %d\n",*ptr);
   return 0;
}