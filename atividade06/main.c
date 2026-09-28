#include <stdio.h>
#include <stdlib.h>

void preencher_notas(float m[5][3]) {
    int i, j;
    for (i = 0; i < 5; i++) {
        printf("--- Aluno %d ---\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Nota da Avaliacao %d: ", j + 1);
            scanf("%f", &m[i][j]);
        }
    }
}

void calcular_medias_alunos(float m[5][3]) {
    int i, j;
    printf("\n--- Media Individual dos Alunos ---\n");
    for (i = 0; i < 5; i++) {
        float soma = 0.0;
        for (j = 0; j < 3; j++) {
            soma += m[i][j];
        }
        printf("Aluno %d: %.2f\n", i + 1, soma / 3.0);
    }
}

void maior_nota_avaliacao(float m[5][3], int col_avaliacao) {
    int i;
    float maior = m[0][col_avaliacao];

    for (i = 1; i < 5; i++) {
        if (m[i][col_avaliacao] > maior) {
            maior = m[i][col_avaliacao];
        }
    }
    printf("\nMaior nota na Avaliacao %d: %.2f\n", col_avaliacao + 1, maior);
}

int main() {
    float notas[5][3];

    preencher_notas(notas);
    calcular_medias_alunos(notas);

    maior_nota_avaliacao(notas, 0);

    return 0;
}
