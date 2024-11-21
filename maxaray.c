#include <stdio.h>

int main() {
    int n, i;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int array[n];
    
    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int min = array[0], max = array[0];
    for (i = 1; i < n; i++) {
        if (array[i] < min) min = array[i];
        if (array[i] > max) max = array[i];
    }

    // Output the results
    printf("Min: %d\nMax: %d\n", min, max);

    return 0;
}
