//pag90- Ler duas matrizes tipo vetor A com 15 elementos e B com 25. Construir  matriz C, sendo juncao das duas. C vai ter capacidade de armazenar 40 elementos:


#include <stdio.h>

int main() {
    // matrizes A, B e C capacidade 40 elementos
    int A[15];
    int B[25];
    int C[40];

    // elementos matriz A
    printf("\n15 elementos para a matriz A:\n");
    for (int i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // matriz B
    printf("\n 25 elementos para a matriz B:\n");
    for (int i = 0; i < 25; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &B[i]);
    }

    // matriz C (junção de A e B)
    for (int i = 0; i < 15; i++) {
        C[i] = A[i];
    }

    for (int i = 0; i < 25; i++) {
        C[i + 15] = B[i];
    }

    // matriz C
    printf("\nMatriz C ( A e B):\n");
    for (int i = 0; i < 40; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
