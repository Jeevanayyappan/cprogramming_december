#include <stdio.h>

int main() 
{
    int i,j,n;
    printf("enter the row number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=1;j--)  
        {
            if(i>=j)
            printf("*");
            else
            printf(" ");
        }
        
    
    printf("\n");
    }
return 0;
}
