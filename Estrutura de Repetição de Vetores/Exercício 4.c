#include <stdio.h>

int main ()
{
int idade = 0, qntdtotal = 0, idosos = 0, qntdMeias= 0,crianca= 0 ;
float valorTotal = 18.0, ValorMeia = 9.0, LucroTotal = 0.0;

do {
printf ("Qual � a idade da pessoa? (digite 0, caso queira encerrar o programa): ");
scanf ("%d", &idade);


if (idade < 12 || idade > 59) {
qntdMeias++;

if (idade < 12)
crianca++;

else if (idade > 59)
idosos++;
}

 else {
qntdtotal++;

}

} while(idade != 0);

LucroTotal = (qntdtotal * valorTotal) + (qntdMeias * ValorMeia);

    printf("---------------------------------------------------------------\n");
    printf("Apresenta��o dos dados da sess�o\n");
    printf("Quantidade Vendida de Ingressos Inteiros: %d\n", qntdtotal);
    printf("Quantidade de Meias Entradas Vendidas: %d\n", qntdMeias);
    printf("Crian�as que assistiram � sess�o: %d\n", crianca);
    printf("Idosos que assistiram � sess�o: %d\n", idosos);
    printf("O valor lucro total foi de: R$%.2f\n", LucroTotal);

    return 0;
}
