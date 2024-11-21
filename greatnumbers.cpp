#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the first number: \n");
    scanf("%d", &a);

    printf("Enter the second number: \n");
    scanf("%d", &b);

    if (a>b ){
        printf("The a is greater than the b.\n");
    }
    

    else{
        printf("The b is greater than the a.\n");
    }
    
    return 0;
}
