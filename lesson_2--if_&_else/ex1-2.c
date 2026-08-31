#include <stdio.h>
int main() {
    int media, freq;

    printf("Digite a media do aluno: ");
    scanf("%d", &media);

    printf("Digite a frequencia do aluno: ");
    scanf("%d", &freq);

    if (media >= 7 && freq >= 75) {

        printf("Aluno aprovado\n");

    } else {
        
        printf("Aluno reprovado\n");
    }
}