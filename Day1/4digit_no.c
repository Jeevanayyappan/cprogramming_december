//WAP to determine a number given from user is a one/two/three digit number or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=-9&&n<=9)
    printf("%d is a one digit number",n);
    else if(n>=-99&&n<=99)
    printf("%d is a two digit number",n);
    else if(n>=-999&&n<=999)
    printf("%d is a three digit number",n);
    else if(n>=-9999&&n<=9999)
    printf("%d is a four digit number",n);
    else printf("It's not a number");
    return 0;
}