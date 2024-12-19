//Write a C Program to display the following pattern using nested loops: *
//**
//***
//****
//*****
#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the number of rows : ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
