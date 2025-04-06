//Swappimg of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter values for a and b : ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping of two numbers a=%d and b=%d.",a,b);
    return 0;
}
