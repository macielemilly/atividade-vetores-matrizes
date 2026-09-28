#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][3], B[3][3], C[3][3], AT[3][3];
    int i, j;

    printf("----Digite os elementos da matriz A----\n");
    for(i = 0; i < 3; i++){
        for(j = 0;j < 3; j++){
            printf("A[%d][%d]",i,j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("----Digite os elementos da matriz B----\n");
    for(i = 0; i < 3; i++){
        for(j = 0;j < 3; j++){
            printf("B[%d][%d]",i,j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
            AT[j][i] = A[i][j];
        }
    }

    printf("\na) Matriz Soma C (A + B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    printf("\nb) Matriz Transposta de A (A^T):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", AT[i][j]);
        }
        printf("\n");
    }
}
