//WAP to find factorial of a number. 
#include<stdio.h>
int main(){
    int n,fac=1,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
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
     return 0;
}
