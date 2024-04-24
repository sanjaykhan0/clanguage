#include <stdio.h>

void arraySum(int *arr1, int *arr2, int *result, int size) {
    for (int i = 0; i < size; i++) {
        *(result + i) = *(arr1 + i) + *(arr2 + i);
    }
}

int main() {
    int size;
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    
    int arr1[size], arr2[size], result[size];
    
    printf("Enter elements of array 1:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    printf("\nEnter elements of array 2:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    arraySum(arr1, arr2, result, size);
    
    printf("\nSum of the arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    
    return 0;
}
