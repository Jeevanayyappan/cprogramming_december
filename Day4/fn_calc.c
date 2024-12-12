#include<stdio.h>

int main()
{  
    char op;
    calc(op);
    return 0;
}
int calc(char op)
{
    
    int n1,n2;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter the two number:");
    scanf("%d%d",&n1,&n2);
    
    switch(op)
    {
        case '+':printf("%d+%d=%d",n1,n2,n1+n2);break;
        case '-':printf("%d-%d=%d",n1,n2,n1-n2);break;
        case '*':printf("%d+%d=%d",n1,n2,n1*n2);break;
        case '/':printf("%d/%d=%d",n1,n2,n1/n2);break;
        default:printf("Error! Enter appropriate operator(+,-,*,/)");
        
    }
}