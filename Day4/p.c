//
#include <stdio.h>
int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}