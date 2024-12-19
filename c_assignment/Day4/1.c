#include<stdio.h>
int main()
{
    int i,low,high,mid,n,key,array[100];
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("Enter the element to find: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(array[mid]<key)
        low=mid+1;
        else if(array[mid]==key)
        {
            printf("%d found at location %d",key,mid);
            break;
        }
        else
        {
            high=mid-1;
            mid=(low+high)/2;
        }
        if(low>high)
        printf("%d element is not found in the array",key);
    }
    return 0;
}