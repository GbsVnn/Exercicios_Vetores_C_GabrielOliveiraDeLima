#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i, fim, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tam = strlen(palavra);
    fim = tam - 1;

    for(i = 0; i < tam / 2; i++) {
        if(palavra[i] != palavra[fim]) {
            palindromo = 0;
            break;
        }
        fim--;
    }

    if(palindromo) printf("é um palindromo.\n");
    else printf("Não é um palindromo.\n");

    return 0;
}