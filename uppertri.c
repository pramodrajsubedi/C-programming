#include <stdio.h>

int main() {
    int arr[3][3];  // Define a 3x3 array

    // Taking user input for the array
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the original array
    printf("\nOriginal 3x3 Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    // Print the upper triangular part
    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j >= i) {
                printf("%d ", arr[i][j]);
            } else {
                printf("  ");  // For formatting
            }
        }
        printf("\n");
    }

    return 0;
}
