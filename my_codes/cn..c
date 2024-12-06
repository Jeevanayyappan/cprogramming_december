//
#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the values for a and b:");
  scanf("%d",&a,&b);
  int sum=(a++ + ++b);
  printf("Sum=%d",sum);
  return 0;
}