#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[4][4], res[4][4];
    int i, j;
    int soma_principal = 0, soma_secundaria = 0;
    int maior_dp;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    maior_dp = m[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) {
                soma_principal += m[i][j];
                if (m[i][j] > maior_dp) {
                    maior_dp = m[i][j];
                }
            }

            if (i + j == 3) {
                soma_secundaria += m[i][j];
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            res[i][j] = m[i][j] * maior_dp;
        }
    }

    printf("\na) Soma da Diagonal Principal: %d\n", soma_principal);
    printf("b) Soma da Diagonal Secundaria: %d\n", soma_secundaria);
    printf("c) Maior elemento da Diagonal Principal: %d\n", maior_dp);
    printf("\nMatriz Resultante da multiplicacao pelo maior elemento da DP:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
}
