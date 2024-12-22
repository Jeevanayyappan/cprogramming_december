#include<stdio.h>
int main()
{
    int age=22;
    int *ptr;
    ptr=&age;
    printf("%d\n",age);
    printf("%d\n",&age);
    printf("%p\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);
    printf("%p\n",&ptr);
    return 0;
}