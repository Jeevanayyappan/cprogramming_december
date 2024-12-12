//
#include<stdio.h>
int main()
{
    int i,revn=0,rem;
    printf("Enter a number:");
    scanf("%d",&i);
    while(i!=0)
    {
        rem=i%10;
        revn=revn*10+rem;
        i=i/10;
        i=i++;
    }
    printf("The Palindrome of given number is  %d",revn);
    return 0;
}