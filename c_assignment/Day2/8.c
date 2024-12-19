//Write a C Program to check whether the roots of a quadratic equation are real, imaginary, or equal using nested if.
#include<stdio.h>
#include<math.h>
int main()
{
   double a,b,c,d,r1,r2,rp,ip;
   printf("Enter the coefficients of Quadratic Equation: ");
   scanf("%lf%lf%lf",&a,&b,&c);
   d=((b*b)-(4*a*c));
   if(d>0)
   {
    r1=(-b+(sqrt(d)))/(2*a);
    r2=(-b-(sqrt(d)))/(2*a);
    printf("The %0.1lfx^2+%0.1lfx+%0.1lf has two real roots : r1=%0.3lf and r2=%0.3lf.\n",a,b,c,r1,r2);
   }
   else if(d==0)
   {
    r1=r2=((-b)/(2*a));
    printf("The %0.1lfx^2+%0.1lfx+%0.1lf has two equal real roots : r1=%0.3lf and r2=%0.3lf.\n",a,b,c,r1,r2);
   }
   else
   {
    rp=(-b/(2*a));
    ip=(sqrt(-d)/(2*a));
    printf("The %0.1lfx^2+%0.1lfx+%0.1lf has imaginary roots : r1=%0.3lf+i%0.3lf and r2=%0.3lf-i%0.3lf.\n",a,b,c,rp,ip,rp,ip);
   }
   return 0;
}