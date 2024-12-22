//WAP to create a function to sort an array in ascending order, and use a loop to sort multiple arrays entered by the user.
#include<stdio.h>
void sort(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,size;
    printf("Enter the number of Arrays: ");
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
      printf("Enter the size of %d Array: ",k+1);
      scanf("%d",&size);
      int a[size];
      printf("Enter %d elements  in Array: ",size);
      for(int i=0;i<size;i++)
      {
        scanf("%d",&a[i]);
      }
      sort(a,size);
      printf("The Elements of the %d Array after sorting are : ",k+1);
      for(int j=0;j<size;j++)
      {
        printf("%d ",a[j]);
      }
      printf("\n");
    }
    return 0;
}