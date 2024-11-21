#include <stdio.h>

int main() {
    FILE *file;  // File pointer to manage the file
    char name[50];
    int age;
    
    // Open the file in write mode (creates the file if it doesn't exist)
    file = fopen("info.txt", "w");

    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;  // Return an error code if file opening fails
    }

    // Input data from the user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Read the name
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write the data to the file
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file
    fclose(file);

    printf("Information saved to 'info.txt'.\n");
    
    return 0;
}

