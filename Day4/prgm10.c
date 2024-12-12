#include<stdio.h>
int main()
{
    
    int n,a[n];
    printf("Enter the size of Array:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
         printf("Enter the elements %d: ",i);
         scanf("%d",&a[i]);
        
    }
     printf("The elements of the array are:\n");
    for (int i<n-1; i>=0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
return 0;
}
