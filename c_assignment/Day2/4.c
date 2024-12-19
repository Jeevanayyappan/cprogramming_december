//Write a C Program to calculate the grade of a student based on marks using conditional statements.
#include<stdio.h>
int main()
{
    float marks;
    printf("Enter the marks of a student(out of 100): ");
    scanf("%f",&marks);
    if(marks>=90&&marks<=100)
    printf("Grade:A.\n");
    else if(marks>=80&&marks<90)
    printf("Grade:B.\n");
    else if(marks>=70&&marks<80)
    printf("Grade:C.\n");
    else if(marks>=60&&marks<70)
    printf("Grade:D.\n");
    else if(marks>=50&&marks<60)
    printf("Grade:E.\n");
    else
    printf("Grade:F.\n");
    return 0;
}