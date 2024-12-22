//Write a C Program to calculate the sum and average of elements in an array.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements of Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements in Array: ",n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\n");
    int sum=a[0];
    for(i=1;i<n;i++)
    {
        sum=sum+a[i];
    }
    float avg;
    avg=((sum)/n);
    printf("Sum of elements in the Array is %d.\n",sum);
    printf("Average of elements in Array is %0.3f\n",avg);
    return 0;

}