//Write a C Program to find the length of a string without using the strlen() function.
#include<stdio.h>
int main()
{
    char str[100];
    int length=0;
    char *ptr=str;
    printf("Enter the string: ");
    scanf("%[^\n]s",&str);
    while(*ptr!='\0')
    {
        length+=1;
        ptr++;
    }
    printf("The Length of String %s is %d.\n",str,length);
    return 0;
}