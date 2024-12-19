//Write a C Program to check whether the given three sides of a triangle form a valid right-angled triangle using conditional statements.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of Triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if((a*a+b*b==c*c)||
    (b*b+c*c==a*a)||
    (c*c+a*a==b*b))
    printf("The three sides %d,%d and %d forms a right-angled triangle.\n",a,b,c);
    else
    printf("The three sides %d,%d and %d  does not form a right-angled triangle.\n",a,b,c);
    return 0;
}