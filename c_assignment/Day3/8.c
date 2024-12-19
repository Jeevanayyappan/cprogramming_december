//Write a C Program to reverse the digits of a given number using a while loop.
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
    printf("The Origininal number is %d\n",orig_num);
    printf("The Reverse of original numnber is %d",revnum);
    return 0;
}