//pag.90 : Ler 15 elementos matriz a tipo vetor. contruir matriz b do mesmo tipo, lei de fomação:Todo elemento  da b devera ser o quadrado do elemento  de A  correspodente.

#include <stdio.h>

int main() {
    // Matrizes A e B com 15 elementos
    int A[15];
    int B[15];

    // Elementos da matriz A
    printf("Digite 15 elementos matriz A:\n");
    for (int i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Construindo matriz B (quadrado dos elementos de A)
    for (int i = 0; i < 15; i++) {
        B[i] = A[i] * A[i];  // Cada elemento de B é o quadrado do elemento correspondente de A
    }

    // Exibir matrizes A e B
    printf("\nMatriz A:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", A[i]);
    }

    printf("\n\nMatriz B (quadrado dos elementos de A):\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
