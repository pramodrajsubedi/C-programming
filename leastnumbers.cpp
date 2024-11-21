#include<stdio.h>
int main(){
    int a, b,c;
    printf("Enter the first number: \n");
    scanf("%d", &a);

    printf("Enter the second number: \n");
    scanf("%d", &b);

    printf("Enter the third number: \n");
    scanf("%d", &c);

    if (a<b  && a<c ){
        printf("The a is the lowest number between a, b and c.\n");
    }
    else if(b<a && b <c){
        printf("The b is the lowest number between a, b and c.\n");
    }

    else{
        printf("The c is the lowest number between a, b and c.\n");
    }
    
    return 0;
}