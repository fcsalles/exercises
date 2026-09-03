#include <stdio.h>

int inverter_array (int array[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
    return 0;
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

    inverter_array(temperaturas, tamanho);

    printf("As temperaturas invertidas são:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", temperaturas[i]);
    }
    printf("\n");

    return 0;
}