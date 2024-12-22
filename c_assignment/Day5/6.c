//WAP to create a function to calculate the sum of an array, and use a loop in the main program to compute the sum for multiple arrays entered by the user.
#include<stdio.h>
#include<string.h>
int sum(int a[],int length)
{
  int sum=0;
  for(int i=0;i<length;i++)
  {
    sum+=a[i];
  }
  return sum;
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
    printf("The Sum of Elements in %d Array is %d.\n",i+1,sum(a,num));
  }
  return 0;
}