#include<stdio.h>
int main()
{
    
    int n,a[n];
    printf("Enter the size of Array:\n");
    scanf("%d",&n);
     printf("Enter the elements %d:\n",n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
     printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
return 0;
}
