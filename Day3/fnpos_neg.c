
#include<stdio.h>
char num_valdation(int n)
{
    
    if(n>=0)
    printf("%d is positive",n);
    else
    printf("%d is negative",n);   
}
int main()
{
    
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    num_valdation(n);
    return 0;
    
    

}