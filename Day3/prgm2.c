#include <stdio.h>
int main() 
{
    int i,j,n;
    printf("enter the row number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        printf("*");    
        }
        for(j=i-1;j>=1;j--)    
        {
            printf("*");
        }
    
    printf("\n");
    }
    return 0;
}