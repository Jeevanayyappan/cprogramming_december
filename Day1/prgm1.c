//WAP to get student name,age,year,total marks and dispay.
#include<stdio.h>
int main()
{
    char stu_name[25];
    int stu_age,stu_year;
    float stu_totmarks;
    printf("Enter Student name:");
    scanf("%s",&stu_name);
    printf("Enter Student age:");
    scanf("%d",&stu_age);
    printf("Enter the year of student studying:");
    scanf("%d",&stu_year);
    printf("Enter total marks of Student:");
    scanf("%f",&stu_totmarks);
    printf("Name of Student:%s\n",stu_name);
    printf("Age of Student:%d\n",stu_age);
    printf("Year of Student studying:%d\n",stu_year);
    printf("Total Marks of Student:%f\n",stu_totmarks);
    return 0;
}