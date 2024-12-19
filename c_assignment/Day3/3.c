//Write a C Program to check whether a number is a palindrome using a while loop.
#include<stdio.h>
int main()
{
    int num,orig_num,revnum=0,rem;
    printf("Enter a number : ");
    scanf("%d",&num);
    orig_num=num;
    while(num!=0)
    {
     rem=num%10;
     revnum=revnum*10+rem;
     num/=10;
    }
    if(orig_num==revnum)
    printf("The number %d is a palindrome.\n",orig_num);
    else 
    printf("The number %d is not a palindrome.\n",orig_num);
    return 0;
}