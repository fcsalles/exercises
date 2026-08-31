#include <stdio.h>

int minutos(int hr, int min) {
    int total_minutos = (hr * 60) + min;
    printf("Total de minutos: %d\n", total_minutos);
    return total_minutos;
}

int diferenca (int hr1, int min1, int hr2, int min2) {
    int total1 = minutos(hr1, min1);
    int total2 = minutos(hr2, min2);
    int diff = total2 - total1;
    printf("Diferença: %d minutos\n", diff);
    return diff;
}

int main() {
    int hr1, min1, hr2, min2;

    printf("Digite a primeira hora (hh mm): ");
    scanf("%d:%d", &hr1, &min1);

    printf("Digite a segunda hora (hh mm): ");
    scanf("%d:%d", &hr2, &min2);

    diferenca(hr1, min1, hr2, min2);

    return 0;
}