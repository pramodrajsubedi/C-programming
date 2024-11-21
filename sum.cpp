#include<stdio.h>
int main(){
    int a, b, c;

    printf("Enter the first integer: \n");
    scanf("%d", &a);

    printf("Enter the second integer: \n");
    scanf("%d", &b);

    c = a + b;
    printf("The sum of the two integers is: %d\n", c);
    return 0;
}