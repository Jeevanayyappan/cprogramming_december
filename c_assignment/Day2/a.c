#include<stdio.h>
int main() {
int a, b, c;
printf("Enter the three sides of the triangle: ");
scanf("%d%d%d",&a,&b,&c);
if ((a * a + b * b == c * c) ||
(a * a + c * c == b * b) ||
(b * b + c * c == a * a)) {
printf("The given sides form a valid right-angled triangle.\n");
} else {
printf("The given sides do not form a right-angled triangle.\n");
}
}