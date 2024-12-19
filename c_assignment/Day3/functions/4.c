//Write a C Program to create a function to swap two numbers using call by reference.
#include<stdio.h>
int swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Value of a=%d and b=%d before swapping.\n",a,b);
    swap(&a,&b);
    printf("Value of a=%d and b=%d after swapping.",a,b);
    return 0;
}