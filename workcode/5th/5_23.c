#include <stdio.h>

int main(void){
    int matrix[3][4] = {};
    int matrixT[4][3] = {};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            matrixT[j][i] = matrix[i][j];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++)
            printf("%6d", matrix[i][j]);
        printf("\n");
    }
    printf("***************************\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++)
            printf("%6d", matrixT[i][j]);
        printf("\n");
    }
            return 0;
}