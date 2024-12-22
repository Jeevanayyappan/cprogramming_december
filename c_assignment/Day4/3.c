//Write a C Program to find the largest element in an array using pointers.
#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int max=a[0];
    for(int i=1;i<=4;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("The Maximum element in the Array is %d\n",max);
    return 0;
}