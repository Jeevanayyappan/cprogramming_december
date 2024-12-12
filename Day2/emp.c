//Wap on computing Gross Monthly Salary,Annual Bonus,Annual Gross Salary,Standard Deduction and Taxable Income.
#include<stdio.h>
int main()
{
    char emp_name[25];
    float emp_basicsalary,ann_bonus,special_allowance,gross,gr_monthlysalary,gr_ann_salary,stad_ded,tax_income;
    printf("Enter the full name of employee:");
    scanf("%[^\n]s",&emp_name);
    printf("Enter the Employee Salary:");
    scanf("%f",&emp_basicsalary);
    printf("Enter the special allowance:");
    scanf("%f",&special_allowance);
    printf("Enter the Standard deduction Aamount:");
    scanf("%f",&stad_ded);

  
    
    gr_monthlysalary=emp_basicsalary+special_allowance;
    ann_bonus=gr_monthlysalary*12*0.1;
    gr_ann_salary=(gr_monthlysalary*12)+ann_bonus;
    tax_income=gr_ann_salary-stad_ded;
    
    
    printf("Gross Monthly Salary of %s is %0.3lf\n",emp_name,gr_monthlysalary);
    printf("Annual Bonus of %s is %0.3lf\n",emp_name,ann_bonus);
    printf("Annual Gross Salary of %s is %0.3lf\n",emp_name,gr_ann_salary);
    printf("Standard Deduction is %0.3lf\n",stad_ded);
    printf("Taxable Income=%0.3lf",tax_income);
    return 0;
}
