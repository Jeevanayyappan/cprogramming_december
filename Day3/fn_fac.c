#include<stdio.h>
int fac(int n)
{
    int fac=1,i=1;
    if(n>=0)
    {
        for(;i<=n;i++)
     {
        fac=fac*i;
     }
     printf("Factorial of %d is %d",n,fac);
    }
    else
    printf("Factorial of a negative number does not exist");
 
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fac(n);
    return 0;

}