#include <stdio.h>

bool verif_ordem (int temp[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (temp[i] > temp[i + 1]) {
            return false;
        }
    }
    return true;

}

int main() {
    int tamanho;
    printf("quantidade de temperaturas: ");
    scanf("%d", &tamanho);

    int temperaturas[tamanho];

    printf("Digite %d temperaturas:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &temperaturas[i]);
    }

    if (verif_ordem(temperaturas, tamanho) == true) {
        printf("As temperaturas estão em ordem crescente.\n");
    } else {
        printf("As temperaturas não estão em ordem crescente.\n");
    }

    return 0;
}