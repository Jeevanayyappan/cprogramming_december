//WAP to create a function to check if a string is a palindrome, and use a loop in the main program to check multiple strings entered by the user.
#include<stdio.h>
#include<string.h>
int isPalindrome(char str[])
{
 int length=strlen(str);
 for(int i=0;i<length/2;i++)
  {
    if(str[i]!=str[length-i-1])
    {
       return 0;
    }
  }
  return 1;
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
        scanf("%s",str);
    
        if (isPalindrome(str))
        {
        printf("The string %d :  %s is a Palindrome.\n",i+1,str);}
        else{
        printf("The string %d : %s is not a Palindrome.\n",i+1,str);
        }
    }
return 0;
}