#include <stdio.h>

// função para inicializar o vetor
void inicializa(int v[], int n, int val) {
    for (int i = 0; i < n; i++) {
        v[i] = val;
    }
}

// função de busca que retorna a posição do valor no vetor ou -1 se não encontrado
int busca(int v[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (v[i] == val) {
            return i; // retorna a posição do valor encontrado
        }
    }
    return -1; // retorna -1 se o valor não for encontrado
}

// função para contar as ocorrências de cada face
int contaOcorrencias(int v[], int n, int val) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == val) {
            cont++;
        }
    }
    return cont;
}

// função para verificar se algum dado está viciado
void verificaVicio(int v[], int n, int faces) {
    int frequencias[faces];
    inicializa(frequencias, faces, 0);

    // usando busca para contar ocorrências de cada face
    for (int i = 1; i <= faces; i++) {
        int pos = busca(v, n, i);
        if (pos != -1) {
            frequencias[i - 1] = contaOcorrencias(v, n, i);
        }
    }

    printf("analisando os dados dos lançamentos...\n");
    for (int i = 0; i < faces; i++) {
        float percentual = (frequencias[i] * 100.0) / n;
        printf("Face %d: %.2f%%\n", i + 1, percentual);

        if (percentual > 40.0) {
            printf("-> a face %d está viciada (mais de 40%%).\n", i + 1);
        } else if (percentual < 20.0) {
            printf("-> a face %d está viciada (menos de 20%%).\n", i + 1);
        }
    }
}
int main(void) {
    int vLanc[30] = {1, 2, 3, 1, 2, 3, 2, 3, 4, 3, 4, 4, 5, 6, 3, 4, 5, 6, 1, 2, 3, 1, 2, 3, 6, 4, 5};
    int qt = 30;

    verificaVicio(vLanc, qt, 6);

    return 0;
}