#include<stdio.h>
#include<math.h>
int quad(double a,double b,double c)
{
    double d,r1,r2,rp,ip;
    printf("Enter the Coefficients of Quadratic Equation:");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+(sqrt(d)))/(2*a);
        r2=(-b-(sqrt(d)))/(2*a);
        printf("The Quadratic Equation has two real roots r1=%0.3lf and r2=%0.3lf\n",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=(-b/(2*a));
        printf("The Quadratic Equation has two equal real roots r1=%0.3lf and r2=%0.3lf\n",r1,r2);
    }
    else
    {
        rp=(-b/(2*a));
        ip=(sqrt(-d)/(2*a));
        printf("The Quadratic Equation has Complex roots r1=%0.3lf+%0.3lf and r2=%0.3lf-%0.3lf\n",rp,ip,rp,ip);
    }
    
}
int main()
{
    double a,b,c;
    quad(a,b,c);
    return 0;
}