#include <stdio.h>

int main() {
    int A[10], B[10], C[10], i;

    for(i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 10; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 10; i++) {
        C[i] = A[i] + B[i];
    }

    printf("Resultado C: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }
    
    return 0;
}