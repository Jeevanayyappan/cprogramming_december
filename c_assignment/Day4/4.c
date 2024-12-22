//Write a C Program to reverse an array using pointers.
//printf("The start element is %d and end element is %d of array before reversal\n",*start,*end);
#include<stdio.h>
void revarr(int *a,int n)
{
    int *start=a;
    int *end=a+(n-1);
    int temp;
    printf("The start element is %d and end element is %d of array before reversal\n",*start,*end);
    while(start<end)
    {
       temp=*start;
       *start=*end;
       *end=temp;
       start++;
       end--;  
    }
}




int main()
{
    int n,i;
    printf("Enter the number of  elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements into array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before reversal :");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

    revarr(a,n);

    printf("Array after reversing :");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}