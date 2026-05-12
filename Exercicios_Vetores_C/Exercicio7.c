#include <stdio.h>

int main() {
    int vetor[10], X, i, encontrado = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor X para buscar: ");
    scanf("%d", &X);

    for(i = 0; i < 10; i++) {
        if(vetor[i] == X) {
            printf("O valor %d foi encontrado na posição %d.\n", X, i);
            encontrado = 1;
        }
    }

    if(!encontrado) printf("O valor %d nao esta no vetor.\n", X);
    
    return 0;
}