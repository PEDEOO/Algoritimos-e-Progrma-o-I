#include <stdio.h>
#include <locale.h>

#define qntd_MAX 20

void main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo[qntd_MAX], estoque[qntd_MAX], produtos, i, total = 0;
    int Menor10 = 0, Entre10e20 = 0;
    char opcao;

    printf("Digite o número de produtos (máximo %d): ", qntd_MAX);
    scanf("%d", &produtos);

    if (produtos > qntd_MAX) {
        printf("\nDigite uma quantidade válida! (máximo %d)\n", qntd_MAX);
        return 1;
    }
    for (i = 0; i < produtos; i++) {
        printf("\nDigite o código do item %d: ", i + 1);
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

    printf("\n---------- ANÁLISE DO ESTOQUE -----------\n");
    printf("\nProdutos com menos de 10 unidades: %d\n", Menor10);
    printf("Produtos com 10 a 20 unidades: %d\n", Entre10e20);
    printf("Total de produtos em estoque: %d\n", total);

    do {
        printf("\n--------- TABELA DE OPÇÕES ---------\n");
        printf("a) Retirar produto do estoque\n");
        printf("b) Inserir novos produtos ao estoque\n");
        printf("c) Encerrar o programa\n");
        printf("\nDigite a opção desejada: ");
        scanf(" %c", &opcao);

        int quantidade, codigo_produto;

        switch (opcao) {
            case 'a':
                printf("\nDigite o código do produto: ");
                scanf("%d", &codigo_produto);

                for (i = 0; i < produtos; i++) {
                    if (codigo[i] == codigo_produto) {
                        printf("Informe a quantidade que será retirada do depósito: ");
                        scanf("%d", &quantidade);

                        if (estoque[i] >= quantidade) {
                            estoque[i] -= quantidade;
                            printf("Foram retirados %d do produto %d.\n", quantidade, codigo_produto);
                        } else {
                            printf("A quantidade pedida é superior ao estoque disponível.\n");
                        }
                        break;
                    }
                }
                if (i == produtos) {
                    printf("Produto não encontrado.\n");
                }
                break;

            case 'b':
                printf("\nDigite o código do produto: ");
                scanf("%d", &codigo_produto);

                for (i = 0; i < produtos; i++) {
                    if (codigo[i] == codigo_produto) {
                        printf("Informe a quantidade que será adicionada ao depósito: ");
                        scanf("%d", &quantidade);

                        estoque[i] += quantidade;
                        printf("Foram adicionados %d do produto %d.\n", quantidade, codigo_produto);
                        break;
                    }
                }
                if (i == produtos) {
                    printf("Produto não encontrado.\n");
                }
                break;

            case 'c':
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 'c');


}
