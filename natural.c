#include <stdio.h>

// Recursive function to print numbers from 1 to n
void printNaturalNumbers(int n) {
    if (n <= 0) {
        return; // Base case: if n is less than or equal to 0, return
    }
    printNaturalNumbers(n - 1); // Recursive call with n-1
    printf("%d ", n); // Print the current number
}

int main() {
    // Print the first 50 natural numbers
    printf("First 50 natural numbers:\n");
    printNaturalNumbers(50);
    printf("\n"); // Newline for better output formatting

    return 0;
}
