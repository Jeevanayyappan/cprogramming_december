//Write a C Program to reverse a string without using library functions.
#include<stdio.h>
int main()
{
    int i,str[100],length=0,end;
    printf("Enter the String: ");
    scanf("%s",&str);
    int *ptr=str;
    while(*ptr!='\0')
    {
        length+=1;
        ptr++;
    }
    end=length-1;
    for(i=0;i<end;i++)


}