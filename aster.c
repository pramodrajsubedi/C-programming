// #include <stdio.h>

// int main() {
//     int i, j;
//     int maxStars = 8; // Maximum number of asterisks in the last line

//     for (i = 1; i <= 4; i++) {
//         // Print the first segment of asterisks
//         for (j = 1; j <= i; j++) {
//             printf("*");
//         }

//         // Print the spaces between the two segments of asterisks
//         for (j = 1; j <= maxStars - 2 * i; j++) {
//             printf(" ");
//         }
//          // Print the second segment of asterisks
//         for (j = 1; j <= i; j++) {
//             printf("*");
//         }

//         // Move to the next line
//         printf("\n");
//     }

//     return 0;
// }


// alternative
#include <stdio.h>
int main(){
    int i, j, n = 5; // number of lines
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 1; j <= 2 * (n - i) ; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
