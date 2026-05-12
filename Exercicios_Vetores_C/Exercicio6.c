#include <stdio.h>
    int main() {
        int vetor[10];
        int indice;
        int zero = 0;
        int positiva = 0;
        int negativa = 0;

            for (indice = 0; indice < 10; indice++) {
                printf("digite o %dº número: \n", indice + 1);
                scanf("%d", &vetor[indice]);
            
                if (vetor[indice] > 0) {
                    positiva ++;
                }
                else if (vetor[indice] <0){
                    negativa ++;
                }
                else {
                    zero ++;
                }
            }
            printf("positivos: %d \n", positiva);
            printf("negativos: %d \n", negativa);
            printf("iguais a zero: %d \n", zero);
        return 0;
    }