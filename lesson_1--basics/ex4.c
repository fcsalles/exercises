#include <stdio.h>
#include <string.h>
 
int main() {
    char nome[100];
    unsigned int itensPorHora, horas;
 
    printf("Nome da Linha de Montagem: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
 
    printf("Itens Produzidos por Hora: ");
    scanf("%u", &itensPorHora);
 
    printf("Numero de Horas Trabalhadas: ");
    scanf("%u", &horas);
 
    unsigned int producaoTotal = itensPorHora * horas;
    unsigned int producaoTriplicada = (producaoTotal << 1) + producaoTotal;
 
    int produtiva = (producaoTotal > 1000) ? 1 : 0;
 
    printf("\nNome da Linha: %s\n", nome);
    printf("Producao Total do Dia (triplicada): %u\n", producaoTriplicada);
    printf("Itens Produzidos por Hora: %u\n", itensPorHora);
    printf("Produtiva: %d\n", produtiva);
 
    return 0;
}
