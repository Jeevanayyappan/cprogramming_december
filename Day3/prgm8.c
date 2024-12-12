#include <stdio.h>
int main() 
{
    int i=1,j,n;
    printf("enter the row number:");
    scanf("%d",&n);
    j=n;
    while(i<=n)
    {
        j=n;
        while(j<=1)  
        {
            
            printf("%d",i+j);
            j=j++;
        }
        
    
    printf("\n");
    i=i++;
    }
    return 0;
}