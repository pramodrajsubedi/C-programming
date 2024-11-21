#include<stdio.h>

int determinant(int matrix[3][3]){
    int det = 0;
    det = matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[2][1]*matrix[1][2]) -
           matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[2][0]*matrix[1][2]) +
           matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[2][0]*matrix[1][1]);
    return det;
}

int main(){
    int i, j;
    int matrix[3][3];

    printf("Enter elements of 3x3 matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int det = determinant(matrix);
    printf("Determinant of the matrix: %d\n", det);

    return 0;
}