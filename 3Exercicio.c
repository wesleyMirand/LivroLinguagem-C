//pag-90 : ler matriz A tipo vetor com 15 elemento. Contruit matriz b  do mesmo tipo , cada elemento da matriz b seja fatorial aos elemento de A.

#include <stdio.h>

// Função de calcular o fatorial 
int calcularFatorial(int b) {
    // O fatorial de 0 e 1 é 1
    if (b == 0 || b == 1) {
        return 1;
    } else {
        // Chamada recursiva para calcular o fatorial
        // números maiores que 1
        return b * calcularFatorial(b - 1);
    }
}

int main() {
    // Declare matrizes A e B com 15 elementos
    int A[15];
    int B[15];

    // Ler elementos na matriz A
    printf("Digite 15 elementos para a matriz A:\n");
    for (int i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // fatorial de cada elemento de A e armazenar em B
    for (int i = 0; i < 15; i++) {
        B[i] = calcularFatorial(A[i]);
    }

    // matrizes A e B
    printf("\nMatriz A:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", A[i]);
    }

    printf("\n\nMatriz B (fatorial dos elementos de A):\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", B[i]);
    }

    return 0;
