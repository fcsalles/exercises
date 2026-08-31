#include <stdio.h>

void sacar(double *saldo) {
    double valor;
    printf("Digite o valor a ser sacado: ");
    scanf("%lf", &valor);

    if (valor > *saldo) {
        printf("Saldo insuficiente!\n");
    } else {
        *saldo -= valor;
        printf("Saque realizado com sucesso! Novo saldo: %.2f\n", *saldo);
    }
}

depositar(double *saldo) {
    double valor;
    printf("Digite o valor a ser depositado: ");
    scanf("%lf", &valor);

    *saldo += valor;
    printf("Deposito realizado com sucesso! Novo saldo: %.2f\n", *saldo);
}
