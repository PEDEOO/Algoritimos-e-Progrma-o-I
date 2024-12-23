#include <stdio.h>

void main()
{

    int idade;
    float valor;

    printf("Qual a sua idade?");
    scanf("%d", &idade);

    if (idade < 18)
        valor = 180.00;
    if (idade > 18 && idade < 30)
        valor = 240.00;
    if (idade > 30 && idade < 45)
        valor = 300.00;
    if (idade > 45 && idade > 59)
        valor = 340.00;
    if (idade > 59 && idade > 65)
        valor = 400.00;
    if (idade > 65)
        valor = 610.00;

    printf("A pessoa devera pagar R$ %.2f", valor);


}

