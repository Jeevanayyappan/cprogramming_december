//poi_swap
#include<stdio.h>
void swap(int *a,int *b)
{
    
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("After Swapping a=%d and b=%d",*a,*b);
}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf(" %d%d",&a,&b);
    printf("Before Swapping: a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("After swapping:");

    return 0;

}
    
    
    

    
   