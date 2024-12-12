#include <stdio.h>

int main() {
    int i, j;
    int num; 
    printf("enter the row number:");
    scanf("%d",&num);

    
    for (i = 1; i<=num; i++) { 
        for (j = 0; j < i; j++) { 
            printf("%d", num);
            num++; 
        }
        printf("\n"); 
    }

    return 0;
}