#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[15];
    int i, numeroBusca, total = 0;

    printf("Preencha o vetor com 15 numeros inteiros:\n");
    for(i = 0; i < 15; i++){
        printf("Vetor [%d]:", i);
        scanf("%d", &vetor[i]);
    }
    printf("\nDigite o numero de busca:");
    scanf("%d", &numeroBusca);

    printf("\nPosicoes onde %d foi encontrado: ", numeroBusca);
    for(i = 0; i < 15; i++){
        if(vetor[i] == numeroBusca){
            printf("[%d]", i);
            total++;
        }
    }

    if (total > 0) {
        printf("\nTotal de ocorrencias de %d: %d\n", numeroBusca, total);
    } else {
        printf("Nenhuma.\nO numero %d nao esta presente no vetor.\n", numeroBusca);
    }
}
