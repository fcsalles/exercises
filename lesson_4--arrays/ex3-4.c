#include <stdio.h>

int tradutor(int array1[], int array2[], int size) {
    int array3[];
    for (int i = 0; i < size; i++) {
        if (array1[i] == array2[i]) {
            array3[] += array1[i];
        }
    }
    return array3[];
}
 
int main() {
    int tamanho;
    printf("quantidade de temperaturas: ");
    scanf("%d", &tamanho);

    int temperaturas1[tamanho];
    int temperaturas2[tamanho];

    printf("Digite %d temperaturas para o primeiro array:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &temperaturas1[i]);
    }

    printf("Digite %d temperaturas para o segundo array:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &temperaturas2[i]);
    }

    int resultado[tamanho];
    tradutor(temperaturas1, temperaturas2, tamanho);

    printf("As temperaturas traduzidas são:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}