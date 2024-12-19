//Write a C Program to check whether the user-entered number is a perfect square number or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    float sqrtValue;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("%d is not a perfect square(since negative numbers are not perfect squares).\n",num);
    }
    else
    {
       sqrtValue=sqrt((double)num);
       if(sqrtValue==(int)sqrtValue)
       {
        printf("%d is a perfect square.\n",num);
       }
       else 
       printf("%d is not a perfect square.\n",num);
    }
    return 0;
}