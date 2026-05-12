#include <stdio.h>
    int main() {
        int vetor[10];
        int indice;
        int nmaior;

            for (indice = 0; indice < 10; indice++) {
                printf("digite o %dº número: \n", indice + 1);
                scanf("%d", &vetor[indice]);
            }
                nmaior = vetor[0];
                for (indice = 0; indice < 10; indice++) {
                    if (vetor[indice] > nmaior) {
                        nmaior = vetor[indice];
                    }
                }
                 printf("o maior numero é %d", nmaior);
            return 0;
    }