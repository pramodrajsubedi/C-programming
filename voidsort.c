#include <stdio.h>

// Function to sort the array using bubble sort
void Sort(int a[], int size) {
    int temp;
    
    // Bubble sort algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Swap the elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int a[size];
    
    // Input elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    // Call the sorting function
    Sort(a, size);
    
    return 0;
}
