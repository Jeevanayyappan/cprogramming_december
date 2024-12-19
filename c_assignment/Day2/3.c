//Write a C Program to check whether a character is a digit, alphabet, or special character using nested if.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch>= 'a' && ch<='z') || (ch>= 'A' && ch<= 'Z')){
    printf("The character %c is a alphabet.\n",ch);}
    else if(ch>= '0' && ch<= '9')
    {printf("The character %c is a digit.\n",ch);}
    else 
    {printf("The character %c is a special character.\n",ch);}
    return 0;
}