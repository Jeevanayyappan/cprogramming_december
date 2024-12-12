#include<stdio.h>
int num(int n)
{
    int fac=1,num_val,cube;
    {
        if(n>=0)
    {
        for(int i=1;i<=n;i++)
     {
        fac=fac*i;
     }
     printf("Factorial of %d is %d\n",n,fac);
    }
    else
    printf("Factorial of a negative number does not exist\n");
    }
    if(n>=0)
    {
        if(n%2==0)
    {
    
        printf("%d is even\n",n);
    }
      else
      
        printf("%d is odd\n",n);
    }
    
    
    cube=n*n*n;
    printf("Cube=%d",cube);

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    num(n);
    return 0;
}