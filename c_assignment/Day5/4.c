//WAP to create a function to count the frequency of a character in a string, and use a loop to find the frequency of different characters in multiple strings.
#include<stdio.h>
#include<string.h>
int countfrequency(char str[],char ch)
{   int count=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(ch==str[i])
        {
            count+=1;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      char str[100];
      printf("Enter %d String: ",i+1);
      scanf("%s",str);
      char ch;
      printf("Enter the character  to find it's frequency in string %d :",i+1);
      scanf(" %c",&ch);
      int frequency=countfrequency(str,ch);
      printf("The character '%c' appears %d times in string %d : \"%s\" .\n",ch,frequency,i+1,str);
    }
    return 0;
}