//Write a C Program to find the smallest and largest elements in an array.
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
  int min=a[0];
  int max=a[0];
  for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
  printf("The Smallest Number in the Array is %d.\n",min);
  printf("The Largest Number in the Array is %d.\n",max);
  return 0;
}