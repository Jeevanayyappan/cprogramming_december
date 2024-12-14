#include<stdio.h>
#include<math.h>
int quad(int a,int b,int c)
{
    double d,r1,r2,rp,ip;
    d=((b*b)-(4*a*c));
    if(d>0)
    {r1=(-b+(sqrt(d)))/(2*a);
    r2=(-b-(sqrt(d)))/(2*a);
    printf("The given Quadratic equation has two real roots:\n");
    printf("r1=%0.3lf and r2=%0.3lf",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=(-b/(2*a));
        printf("The given Quadratic Equation has two equal real roots:\n");
        printf("r1=%0.3lf and r2=%0.3lf",r1,r2);

    }
    else 
    {
     rp=(-b/(2*a));
     ip=(sqrt(-d)/(2*a));
     printf("The Quadratic Equation has two complex real roots:\n");
     printf("r1=%0.3lf+i%0.3lf and r2=%0.3lf-i%0.3lf",rp,ip,rp,ip);
    }
    
}
int main()
{
    int a,b,c;
    printf("Enter the coefficients of ax**2+b*x+c:\n");
    scanf("%d%d%d",&a,&b,&c);
    quad(a,b,c);
    return 0;
}