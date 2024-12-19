//. Write a C Program to check if a person is eligible to vote or not based on their age
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of person: ");
    scanf("%d",&age);
    (age>=18) ? printf("Person is eligible to vote") : printf("Person is ineligible to vote");
    return 0;
}