#include<stdio.h>
int main()
{
    int n,a[n];
    printf("Enter the size of Array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
     {
        printf("Enter %d elements in Array:",i);
        scanf(" %c",&a[i]);
        
     }
     printf("The elements of the array are:\n");
    for (int i=0;i<n; i++) {
        printf("%d is %c",i,a[i]);
    }
    printf("\n");
    return 0;
}