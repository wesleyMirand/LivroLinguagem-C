//pagina 90-  Ler matriz A do tipo vetor com 15, construir matriz b da mesma dimensão, com elementos matriz multiplicados por 3. Apresentar matriz B.

#include <stdio.h>

int main() {
    // Declarando as matrizes A e B com 8 elementos
    int A[8];
    int B[8];

    // Elementos da matriz A
    printf("De 8 elementos para a matriz A:\n");
    for (int i = 0; i < 8; i++) {
        printf("Elementos %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Multiplicando elementos da matriz A por 3 e armazenando na matriz B
    for (int i = 0; i < 8; i++) {
        B[i] = A[i] * 3;
    }

    // Matrizes A e B :
    printf("\nMatriz A:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", A[i]);
    }

    printf("\n\nMatriz B ( com elementos multiplicados por 3):\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
