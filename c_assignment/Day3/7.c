//Write a C Program to print the following number pattern using nested loops:
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}