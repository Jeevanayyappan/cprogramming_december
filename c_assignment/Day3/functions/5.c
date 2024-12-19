//Write a C Program to create a function to find the maximum of three numbers using if-else.
#include<stdio.h>
int max(int n1,int n2,int n3)
{
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("%d is greater.",n1);
        }
        else printf("%d is greater.",n3);
    }
    else if(n2>n3)
    {
        printf("%d is greater.",n2);
    }
    else printf("%d is greater.",n3);
}
int main()
{
  int n1,n2,n3;
  printf("Enter three numberes : ");
  scanf("%d %d %d",&n1,&n2,&n3);
  max(n1,n2,n3);
  return 0;
}
