#include <stdio.h>

int main() 
{
    int i, low, high, mid, n, key, array[100];
    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    
    printf("Enter %d integers (in sorted order): ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Enter the element to find: ");
    scanf("%d", &key);
    
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (array[mid] < key) {
            low = mid + 1;
        } else if (array[mid] == key) {
            printf("%d found at location %d\n", key, mid + 1);
            return 0; 
        } 
        else 
        {
            high = mid - 1;
        }
    }
    
    printf("%d element is not found in the array\n", key);
    return 0;
}