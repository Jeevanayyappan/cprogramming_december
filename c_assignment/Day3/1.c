//Write a C Program to print the multiplication table of a given number using a for loop.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The Multiplication table of a %d ",n);
    for(int i=0;i<=10;i++)
    {
        printf("%d*%d=%d",n,i,n*i);
        printf("\n");
    }
    return 0;
}