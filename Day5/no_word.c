#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int ones[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char *ones_str[] = {"zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int tens[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    char *tens_str[] = {"Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    int n1, n2, i, j;

    
    n1 = n % 10;       
    n2 = n - n1;       

    
    for (i = 0; i < 9; i++) {
        if (n2 == tens[i]) {
            break;
        }
    }

   
    for (j = 0; j < 9; j++) {
        if (n1 == ones[j]) {
            break;
        }
    }

    
    if (n2 != 0 && n1 != 0) {
        printf("%s %s\n", tens_str[i], ones_str[j]); 
    } else if (n2 != 0) {
        printf("%s\n", tens_str[i]);  
    } else {
        printf("%s\n", ones_str[j]);  

    return 0;
}
}
