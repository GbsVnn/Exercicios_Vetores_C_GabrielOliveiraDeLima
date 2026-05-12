#include <stdio.h>
    int main() {
        int vetor[10];
        int indice;

            for (indice = 0; indice < 10; indice++) {
                printf("digite o %dº número: \n", indice + 1);
                scanf("%d", &vetor[indice]);
            }
                for(indice = 0; indice < 10; indice++) {
                    if(vetor[indice] %2 == 0){
                        printf("%d\n", vetor[indice]);
                    }
                }
return 0;
    }