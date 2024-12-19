//Write a C Program to create a function to generate the first n Fibonacci numbers using recursion.
#include<stdio.h>
int fibonacci(int n)
{
  if(n==0)
  return 0;
    else if(n==1)
    return 1;
      else
      return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
  int n;
  printf("Enter the number of fibonacci terms: ");
  scanf("%d",&n);
  if(n<0)
  {
  printf("Invalid Input! Please enter a positive integer.");
  return 1;
  }
  printf("The first %d fibonnaci numbers are: ",n);
  for(int i=0;i<n;i++)
  {
  printf("%d ",fibonacci(i));
  }
  return 0;
}