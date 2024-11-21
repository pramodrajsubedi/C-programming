#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Enter the elements in the array
    for(i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Find the sum of array elements
    int sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}