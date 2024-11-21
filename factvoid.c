#include <stdio.h>

// Function to calculate the factorial
void Fact(int n) {
    int fact = 1;
    
    // Loop to calculate factorial
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    // Print the result
    printf("Factorial of %d is: %d\n", n, fact);
}

int main() {
    int num;
    
    // Input from the user
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    
    // Call the factorial function
    Fact(num);
    
    return 0;
}
