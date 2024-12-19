//Write a C Program to calculate the electricity bill based on units consumed:
// First 100 units: Rs. 5 per unit
// Next 200 units: Rs. 7 per unit
// Above 300 units: Rs. 10 per unit
// Add a fixed charge of Rs. 50 and a 10% tax on the total bill.
#include<stdio.h>
int main()
{
    int units;
    float bill,fixed_charge=50.0,tot_bill;
    printf("Enter the units consumed:");
    scanf("%d",&units);
    if(units<=100)
    {
    bill=units*5;}
    else if(units<=300)
    {bill=(100*5)+(units-100)*7;}
    else 
    {bill=(100*5)+(200*7)+(units-300)*10;}
    tot_bill=bill+fixed_charge;
    tot_bill=tot_bill+tot_bill*0.1;
    printf("The Total Bill Amount is Rs.%0.2lf.\n",tot_bill);
    return 0;
}