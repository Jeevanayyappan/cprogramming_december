//Write a C Program to create a function to calculate the sum of digits of a number.
#include<stdio.h>
int sum_of_digits(int num)
{
    int i=1,a,sum=0,orig_num;
    orig_num=num;
    while(num!=0)
     {
       sum+=num%10;
       num/=10;
     }
    
    printf("The sum of digits in number %d is %d.",orig_num,sum);
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    sum_of_digits(num);
    return 0;
}