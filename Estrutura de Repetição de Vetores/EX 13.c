#include <stdio.h>

void main()
{

 int QTD[5], qtd, i=0, p;
 float V[5], v, total=0, div;

 printf("Quantas pessoas foram para a lanchonete:..");
 scanf("%d", &p);


 for(i=0;i<5;i++)
 {
     printf("Insira o valor do produto:..");
     scanf("%f", &V[i]);
     printf("Insira a quantidade do produto:..");
     scanf("%d", &QTD[i]);
     total= total + (QTD[i]* V[i]);
 }

div=total/p;

 printf("\n|O valor total foi de: R$%0.2f| O valor divido respectivamente para cada sera de: R$%0.2f\n", total, div);

}
