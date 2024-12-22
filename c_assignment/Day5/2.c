//WAP to create a function to find the largest and smallest elements in an array and use it in the main program to handle multiple arrays entered by the user.
#include<stdio.h>
#include<string.h>
int max_min(int a[],int length,int *min,int *max)
{
    *min=a[0];
    *max=a[0];
    for(int i=1;i<length;i++)
    {
        if(a[i]<*min)
        {
            *min=a[i];
        }
        if(a[i]>*max)
        {
            *max=a[i];
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of Arrays: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int length;
        printf("Enter the number of elements in %d Array: ",i+1);
        scanf("%d",&length);
        
        int a[100];
        printf("Enter the elements of %d Array: ",i+1);
        for(int j=0;j<length;j++)
        {
           scanf("%d",&a[j]);
        }
        int max,min;
        max_min(a,length,&min,&max);
        printf("The Minimum element element of %d Array is %d.\n",i+1,min);
        printf("The Maximum element element of %d Array is %d.\n",i+1,max);
        printf("\n");
    }
}