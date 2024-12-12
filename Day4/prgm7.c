#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter Physics marks:");
    scanf("%d",&marks[0]);
    printf("Enter Mathss marks:");
    scanf("%d",&marks[1]);
    printf("Enter Chemistry marks:");
    scanf("%d",&marks[0]);
    printf("Physics=%d\n",marks[0]);
    printf("Maths=%d\n",marks[1]);
    printf("Chemistry=%d\n",marks[2]);
    return 0;
}