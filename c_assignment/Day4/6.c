//7.Write a C Program to count the occurrence of a specific element in an array.
#include<stdio.h>
int main()
{
    int n,i,count=0,ele;
    printf("Enter the number of elements of Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements in Array: ",n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Enter the element to count it's number of occurence in array: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            count+=1;
        }
    }
    printf("The ocuurence of %d in array is %d.",ele,count);
    return 0;
}