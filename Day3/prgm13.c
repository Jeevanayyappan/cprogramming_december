#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

