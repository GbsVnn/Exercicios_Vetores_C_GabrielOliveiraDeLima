#include <stdio.h>

int main() {
    char palavra[50];
    int tamanho = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while(palavra[tamanho] != '\0') {
        tamanho++;
    }

    printf("Total de caracteres: %d\n", tamanho);
    
    return 0;
}