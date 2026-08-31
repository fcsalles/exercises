#include <stdio.h>
int main() {
    char nome_livro;
    unsigned int paginas;
    int ano_publicacao;

    printf("Digite o nome do livro: ");
    fgets(nome_livro, sizeof(nome_livro), stdin);
    nome_livro[strcspn(nome_livro, "\n")] = 0;

    printf("Digite o número de páginas: ");
    scanf("%u", &paginas);

    printf("Digite o ano de publicação: ");
    scanf("%d", &ano_publicacao);

    paginas = paginas >> 1;
    ano_publicacao = ano_publicacao * 2;

    printf("Livro: %s\n", nome_livro);
    printf("Páginas: %u\n", paginas);
    printf("Ano de Publicação: %d\n", ano_publicacao);
}