#include <stdio.h>

// Function to find the greatest of two numbers
int Greatest(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, result;
    
    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Call the Greatest function and store the result
    result = Greatest(num1, num2);
    
    // Print the greatest number
    printf("The greatest number is: %d\n", result);
    
    return 0;
}
