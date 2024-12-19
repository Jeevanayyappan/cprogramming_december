//Write a C Program to determine the smallest of four numbers using nested if statements.
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4;
    printf("Enter four numbers: ");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1<n2&&n1<n3&&n1<n4)
    printf("%d is smallest.\n",n1);
    else if(n2<n1&&n2<n3&&n2<n4)
    printf("%d is smallest.\n",n2);
    else if(n3<n1&&n3<n2&&n3<n4)
    printf("%d is smallest.\n",n3);
    else if(n4<n1&&n4<n2&&n4<n3)
    printf("%d is smallest.\n",n4);
    return 0;

}