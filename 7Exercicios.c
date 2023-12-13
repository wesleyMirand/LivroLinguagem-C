//pag.90 - er 20 elementros de matriz A tipo vetor e construir uma matriz B da mes dimensão com os mesmo elementro de A. sendo que devem estar invertidos, ou seja  o primeiro elemento de a passa a ser o ultimo elemento de B, o segundo elemento de A vira o penultimo de B por diante. Apresentar as duas matrizes.

#include <stdio.h>

int main() {
    //  Matrizes A e B com 20 elementos
    int A[20];
    int B[20];

    // Elementos matriz A
    printf("Digite 20 elementos para a matriz A:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Construindo  matriz B (elementos invertidos de A)
    for (int i = 0; i < 20; i++) {
        B[i] = A[19 - i];  // Inverte os elementos de A para construir B
    }

    // Mosntrando as matrizes A e B
    printf("\nMatriz A:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", A[i]);
    }

    printf("\n\nMatriz B (elementos invertidos de A):\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
