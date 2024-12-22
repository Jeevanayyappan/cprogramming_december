//Write a C Program to swap two numbers using pointers.
#include<stdio.h>
void swap(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
   printf("After Swapping a=%d and b=%d\n",*a,*b);
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before Swapping a=%d and b=%d\n",a,b);
    swap(&a,&b);
    return 0;
}


