//WAP to create a function to reverse a string and use a loop in the main program to reverse multiple strings entered by the user.
#include<stdio.h>
#include<string.h>
void revstring(char str[])
{
    int length;
    length=strlen(str);
    for(int i=0;i<length/2;i++)
    {
    char temp=str[i];
    str[i]=str[length-i-1];
    str[length-i-1]=temp;
    }
}
int main()
{
    int n;
    char str[100];
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d string: ",i+1);
        scanf("%s",str);

        revstring(str);
        printf("Reversal of string %d is %s: \n",i+1,str);
    }
    return 0;
}