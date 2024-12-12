
#include<stdio.h>
int sum(int a,int b,int c)
{
    
    printf("sum=%d",(a+b+c));
}
int main()
{
    int a,b,c;
    printf("Enter the the values for a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    sum(a,b,c);
    return 0;
     
}
