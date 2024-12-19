//Write a C Program to check if a character is a vowel or a consonant.
#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter a character: ");
    scanf("%c",&alpha);
    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
    printf("%c is a vowel.",alpha);
    else
    printf("%c is a consonant.",alpha);
    return 0;
}
