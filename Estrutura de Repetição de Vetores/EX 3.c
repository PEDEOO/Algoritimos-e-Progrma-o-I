#include <stdio.h>
#define TF 100

void main()
{
    int qtd, i=0;
    float p, total=0, P[TF];
    int QTD[TF];

    do
    {

        printf("Insira o preço do produto(Insira 0 para encerrar): ");
        scanf("%f", &p);

        if( p== 0)
        {
            break;
        }

        printf("Insira a quantidade de produtos: ");
        scanf("%d", &qtd);

        P[i]= p;
        QTD[i]= qtd;
        total += p * qtd;
        i++;

    }
    while(p>=0 || qtd>=0);

    printf("\nTicket Fiscal\n");
    for(int j = 0; j<i; j++)
    {
        printf(" Item: %d | Quantidade: %d | Valor: R$%0.2f | Total: R$%0.2f\n ", j + 1, QTD[j], P[j], QTD[j] * P[j]);
    }

    printf("\nO valor total da compra sera de: R$%.2f\nO total de itens comprados foi de: %d\n", total, i);


}
