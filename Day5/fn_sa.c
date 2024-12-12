#include<stdio.h>

int sum_avg()
{
    int  n,i,a[i],sum=0,avg;
     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=(sum)/n;
    printf("Sum=%d",sum);
    printf("Average=%d",avg);
}
    
    
    
    
    
    int main()
{
    int n,sum=0,avg;
    printf("Enter the size of array");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element of %d is ",i);
        scanf("%d",&a[i]);

    }
    sum_avg();
   
    
    return 0;

   
}