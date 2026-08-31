#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    int chute;
    int num_sorteado;
 
    srand(time(NULL));
    num_sorteado = 1 + rand() % 100;
 
    do {
        printf("Digite um numero: ");
        scanf("%d", &chute);
 
        if (chute < 0 || chute > 100) {
            printf("Chute invalido\n");
        } else if (chute > num_sorteado) {
            printf("Muito alto! Tente novamente.\n");
        } else if (chute < num_sorteado) {
            printf("Muito baixo! Tente novamente.\n");
        } else {
            printf("Parabens! Voce acertou o numero %d!\n", num_sorteado);
        }
 
    } while (chute != num_sorteado);
 
    return 0;
}
