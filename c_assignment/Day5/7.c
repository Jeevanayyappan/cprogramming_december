//WAP to create a function to check if an array is sorted, and use it in the main program to verify multiple arrays entered by the user.
#include<stdio.h>
int issort(int a[],int length)
{
    for(int i=0;i<length-1;i++)
    {
        if(a[i]>a[i+1])
        {
          return 0;
        }

    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the number of Arrays: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
      int num;
      printf("Enter the number of elements in %d Array: ",i+1);
      scanf("%d",&num);
      int a[num];
      printf("Enter %d elements in %d Array: ",num,i+1);
      for(int j=0;j<num;j++)
      {
       scanf("%d",&a[j]);
      }
      if(issort(a,num))
       printf("The Array %d is sorted.\n",i+1);
       else 
       printf("The Array %d is unsorted.\n",i+1);
    }
    return 0;
}