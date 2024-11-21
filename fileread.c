#include <stdio.h>

int main() {
    FILE *file;  // File pointer to manage the file
    char ch;
    
    // Open the file in read mode
    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;  // Return an error code if file opening fails
    }

    printf("Contents of the file 'info.txt':\n");
    
    // Read characters from the file until the end of the file
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Print the character to the console
    }

    // Close the file
    fclose(file);

    return 0;
}
