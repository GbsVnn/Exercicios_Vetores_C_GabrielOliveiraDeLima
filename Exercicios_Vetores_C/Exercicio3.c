#include <stdio.h>
    int main() {
        int vetor[10];
        int indice;
        int soma = 0;

            for (indice = 0; indice < 10; indice++) {
                printf("digite o %dº número: \n", indice + 1);
                scanf("%d", &vetor[indice]);
                soma = soma + vetor[indice];
            }
                printf("soma = %d", soma);
              
                return 0;
        }