//WAP to find the cube of a number.
#include<stdio.h>
int cube(int a)
{
    int cube;
    cube=a*a*a;
    printf("Cube=%d",cube);

}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    cube(a);
    return 0;
    
}