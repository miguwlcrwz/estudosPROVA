#include <stdio.h>

int intersecaoPares(int v1[], int n1, int v2[], int n2, int v3[]) {
    int count = 0;

    // percorre os elementos de v1
    for (int i = 0; i < n1; i++) {
        // verifica se o elemento de v1 é par
        if (v1[i] % 2 == 0) {
            // verifica se o elemento de v1 está em v2
            for (int j = 0; j < n2; j++) {
                if (v1[i] == v2[j]) {
                    // adiciona o elemento a v3
                    v3[count++] = v1[i];
                    break; // evita duplicatas
                }
            }
        }
    }

    return count;
}

//  teste na main
int main() {
    int v1[] = {2, 4, 6, 8, 10};
    int v2[] = {1, 2, 3, 4, 5, 6};
    int v3[10]; // vetor para armazenar a interseção (tamanho suficiente)

    int n1 = 5; // tamanho fixo do vetor v1
    int n2 = 6; // tamanho fixo do vetor v2

    int quantidade = intersecaoPares(v1, n1, v2, n2, v3);

    printf("quantidade de elementos em v3: %d\n", quantidade);
    printf("elementos em v3: ");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");
    return 0;
}
