//WAP to create a function to count the vowels in a string, and use a loop to count the vowels for multiple strings entered by the user.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countvowels(char str[])
{ 
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        char ch= tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count+=1;
        }
    }
     return count;
}
int main()
{
    int n;
    printf("Enter the number of Strings: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
     char str[100];
     printf("Enter %d String: ",i+1);
     scanf("%99s",str);
     int vowels=countvowels(str);
     printf("String %s consists of %d vowels.\n",str,vowels);
    }
    return 0;
}