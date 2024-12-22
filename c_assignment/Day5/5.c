//WAP to create a function to concatenate two strings, and use it to merge a list of strings entered by the user into a single string using a loop.
#include<stdio.h>
#include<string.h>
char concatenate(char str1[],char str2[])
{
    int i=strlen(str1);
    for(int j=0;str2[j]!='\0';j++)
    {
        str1[i++]=str2[j];
    }
    str1[i]='\0';
}
int main()
{
    int n;
    printf("Enter the number of Strings: ");
    scanf("%d",&n);
    char str1[1000]="";
    for(int i=0;i<n;i++)
    {
        char str2[100];
        printf("Enter the %d string: ",i+1);
        scanf("%s",str2);
        concatenate(str1,str2);
    }
    printf("The Merged String is %s.",str1);
    return 0;
}