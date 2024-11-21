#include<stdio.h>

int main(){
    int i, j;
    int matrix1[2][2];
    int matrix2[2][2];
    int sum[2][2];

    printf("Enter elements of matrix 1:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Matrix 1:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}