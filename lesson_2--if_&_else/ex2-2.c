#include <stdio.h>
int main() {
    int a, b, c;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a > b + c || b > a + c || c > a + b) {

        printf("Nao forma um triangulo\n");
    } else {

        printf("Forma um triangulo\n");
    }