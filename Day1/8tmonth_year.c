// Using ternary operator wap to determine whether the month number given by user is a month of a year or not .

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the month number:");
    scanf("%d",&num);
    (num >= 1 && num <= 12)  ? printf("%d month is Valid",num) : printf("%d month is Invalid",num);
    return 0;
}