//
#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("Enter a number:");
    scanf("%d",&i);
    for(;i!=0;i=i/10)
    {
        sum+=i%10;
        
    }
    printf("Sum=%d",sum);
    return 0;

}