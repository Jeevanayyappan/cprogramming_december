//WAP 
#include<stdio.h>
int main()
{
 int i,sum=0;
 printf("Enter a number:");
 scanf("%d",&i);
while(i!=0)
{
sum+=i%10;
i=i/10;
i++;
}
printf("Sum=%d",sum);
 return 0;

 }