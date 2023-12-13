//Pag.90 - ler duas matriz A e B  tipo vetor com 20elementos. Contruir matriz C, cada elemento de C é a subtracao do elementro que correponde a A com B.

#include <stdio.h>

int main() {
    // Declare matrizes A, B e C com 20 elementos
    int A[20];
    int B[20];
    int C[20];

    // elementos na matriz A
    printf("20 elementos para a matriz A:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // elementos matriz B
    printf("\n20 elementos para a matriz B:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &B[i]);
    }

    // Construindo matriz C ( A - B)
    for (int i = 0; i < 20; i++) {
        C[i] = A[i] - B[i];
    }

    // Exibindo matrizes A, B e C
    printf("\nMatriz A:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", A[i]);
    }

    printf("\n\nMatriz B:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", B[i]);
    }

    printf("\n\nMatriz C (A - B):\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
