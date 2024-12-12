//WAP to print the number of days for a month number from user.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the month number:");
    scanf("%d",&n);
    if(n==2)
    printf("%d month of the year has 28 days",n);
    else if(n==4||n==6||n==9||n==11)
    printf("%d month of the year has 30 days",n);
    else printf("%d month of the year has 31 days",n);
    return 0;
}