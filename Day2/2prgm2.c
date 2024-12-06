#include<stdio.h>
int main()
{
    int n,coin_earned;
    printf("Enter the transaction amount:");
    scanf("%d",n);
    coin_earned=n*0.1;
    printf("Number of Coins Earned is %d",coin_earned);
    return 0;

}