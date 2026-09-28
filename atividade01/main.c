#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[8];
    int i;

    printf("Digite 8 numeros inteiros: \n");
    for (i = 0; i < 8; i++){
        printf("Elemento %d: ", i);
        scanf("%d", &v[i]);
    }
    printf("\nElementos na ordem inversa:\n");
    for(i = 7; i >= 0; i--){
        printf("Posicao [%d]: %d\n", i, v[i]);
    }
}
