#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[10];
    float soma = 0.0;
    float media;
    float maior, menor;
    int i, acimaDaMedia = 0;

    for (i = 0; i < 10; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];

        if(i == 0){
            maior = notas[0];
            menor = notas[0];
        }
        else{
            if(notas[i] > maior){
                maior = notas[i];
            }
            if(notas[i] < menor){
                menor = notas[i];
            }
        }
    }

    media = soma / 10.0;

    for(i = 0; i < 10; i++){
        if(notas[i] >= media){
            acimaDaMedia++;
        }
    }
    printf("\n Media geral da turma: %.2f\n", media);
    printf("Maior nota: %.2f  | Menor nota: %.2f\n", maior, menor);
    printf("Alunos com nota maior ou igual a media: %d\n", acimaDaMedia);
}
