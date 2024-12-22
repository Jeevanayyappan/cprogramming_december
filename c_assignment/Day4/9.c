//Write a C Program to reverse a string without using library functions.
#include <stdio.h>
void reverseString(char str[]) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    for (int i = 0; i < length / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}
int main() 
{
  char str[100];
  printf("Enter a string: ");
  scanf("%99s", str);
  reverseString(str);
  printf("Reversed string: %s\n", str); 
  return 0;
}