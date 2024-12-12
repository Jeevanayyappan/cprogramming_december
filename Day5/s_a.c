#include<stdio.h>
int main()
{
    int n,sum=0,avg,count=0;
    printf("Enter the size of array");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Element of %d is",i);
        scanf("%d",&a[i]);

    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        count=count+i;
    }
    avg=(sum)/n;
    printf("Sum=%d\n",sum);
    printf("Average=%d\n",avg);
    printf("length of Array=%d\n",count);
    return 0;

   
}