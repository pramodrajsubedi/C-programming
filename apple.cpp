#include <stdio.h>

// int show() {
//     printf("There is a program\n");  // Added newline for proper output formatting
//     return 0;
// }

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }

// int main() {
//     int x = show();  // Only one definition of x is necessary
//     printf("%d\n", x);  // Added newline for proper output formatting
//     return 0;
// }
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function
  return 0;
}