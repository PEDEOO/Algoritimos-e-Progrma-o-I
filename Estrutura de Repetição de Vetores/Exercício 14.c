#include <stdio.h>
#include <locale.h>

#define qntd_MAX 20

void main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo[qntd_MAX], estoque[qntd_MAX], produtos, i, total = 0;
    int Menor10 = 0, Entre10e20 = 0;
    char opcao;

    printf("Digite o n�mero de produtos (m�ximo %d): ", qntd_MAX);
    scanf("%d", &produtos);

    if (produtos > qntd_MAX) {
        printf("\nDigite uma quantidade v�lida! (m�ximo %d)\n", qntd_MAX);
        return 1;
    }
    for (i = 0; i < produtos; i++) {
        printf("\nDigite o c�digo do item %d: ", i + 1);
        scanf("%d", &codigo[i]);
        printf("Digite a quantidade de produtos do item %d: ", i + 1);
        scanf("%d", &estoque[i]);

        total += estoque[i];

        if (estoque[i] < 10) {
            Menor10++;
        } else if (estoque[i] >= 10 && estoque[i] <= 20) {
            Entre10e20++;
        }
    }

    printf("\n---------- AN�LISE DO ESTOQUE -----------\n");
    printf("\nProdutos com menos de 10 unidades: %d\n", Menor10);
    printf("Produtos com 10 a 20 unidades: %d\n", Entre10e20);
    printf("Total de produtos em estoque: %d\n", total);

    do {
        printf("\n--------- TABELA DE OP��ES ---------\n");
        printf("a) Retirar produto do estoque\n");
        printf("b) Inserir novos produtos ao estoque\n");
        printf("c) Encerrar o programa\n");
        printf("\nDigite a op��o desejada: ");
        scanf(" %c", &opcao);

        int quantidade, codigo_produto;

        switch (opcao) {
            case 'a':
                printf("\nDigite o c�digo do produto: ");
                scanf("%d", &codigo_produto);

                for (i = 0; i < produtos; i++) {
                    if (codigo[i] == codigo_produto) {
                        printf("Informe a quantidade que ser� retirada do dep�sito: ");
                        scanf("%d", &quantidade);

                        if (estoque[i] >= quantidade) {
                            estoque[i] -= quantidade;
                            printf("Foram retirados %d do produto %d.\n", quantidade, codigo_produto);
                        } else {
                            printf("A quantidade pedida � superior ao estoque dispon�vel.\n");
                        }
                        break;
                    }
                }
                if (i == produtos) {
                    printf("Produto n�o encontrado.\n");
                }
                break;

            case 'b':
                printf("\nDigite o c�digo do produto: ");
                scanf("%d", &codigo_produto);

                for (i = 0; i < produtos; i++) {
                    if (codigo[i] == codigo_produto) {
                        printf("Informe a quantidade que ser� adicionada ao dep�sito: ");
                        scanf("%d", &quantidade);

                        estoque[i] += quantidade;
                        printf("Foram adicionados %d do produto %d.\n", quantidade, codigo_produto);
                        break;
                    }
                }
                if (i == produtos) {
                    printf("Produto n�o encontrado.\n");
                }
                break;

            case 'c':
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Op��o inv�lida.\n");
                break;
        }
    } while (opcao != 'c');


}
