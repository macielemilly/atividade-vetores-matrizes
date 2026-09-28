#include <stdio.h>
#include <stdlib.h>

int eh_quadrado_magico(int m[3][3]) {
    int i, j;
    int soma_referencia = 0;
    int soma_dp = 0, soma_ds = 0;


    for (j = 0; j < 3; j++) {
        soma_referencia += m[0][j];
    }


    for (i = 0; i < 3; i++) {
        int soma_linha = 0;
        int soma_coluna = 0;

        for (j = 0; j < 3; j++) {
            soma_linha += m[i][j];
            soma_coluna += m[j][i];
        }

        if (soma_linha != soma_referencia || soma_coluna != soma_referencia) {
            return 0;
        }
    }

    for (i = 0; i < 3; i++) {
        soma_dp += m[i][i];
        soma_ds += m[i][2 - i];
    }

    if (soma_dp != soma_referencia || soma_ds != soma_referencia) {
        return 0;
    }

    return 1;
}

int main() {
    int m[3][3];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    if (eh_quadrado_magico(m)) {
        printf("\nA matriz INFORMADA E um Quadrado Magico!\n");
    } else {
        printf("\nA matriz INFORMADA NAO E um Quadrado Magico.\n");
    }

    return 0;
}
