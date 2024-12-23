#include <stdio.h>
void main()
{

   float preco, qcombustivel, valorgaso;



   printf("Quantos reais o motorista vai abastecer?");
   scanf("%f", &preco);

   printf("Quantos a gasolina esta custando?");
   scanf("%f", &valorgaso);

  qcombustivel = preco/valorgaso;
  printf("A quantidade a ser abastecida sera de: %f", qcombustivel);













}
