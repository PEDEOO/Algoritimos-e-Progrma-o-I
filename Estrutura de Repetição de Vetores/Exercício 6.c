#include <stdio.h>

void main ()
{
char opcao;
float saldo = 0.0,add = 0.0, sacar = 0.0;

do {
printf("-------------------MENU-------------------\n");
printf("(a) Consultar Saldo\n");
printf("(b) Saque\n");
printf("(c) Deposito\n");
printf ("(d) Sair\n");
scanf (" %c", &opcao);

switch (opcao){

    case 'a':
    printf("Saldo: R$%.2f\n", saldo);
    break;

    case 'b':
    printf("Digite o valor do saque: R$");
    scanf ("%f", &sacar);

    if(saldo - sacar < 0)
                printf("Valor indisponivel!\n");

            else{
                saldo = saldo - sacar;
                printf("Valor apos a operacao: %.2f\n", saldo);

   }

   break;

    case 'c':
    printf("Digite o valor a ser depositado: R$%.2f\n", add);
    scanf ("%f", &add);

    saldo = saldo + add;
    printf ("O valor após o deposito é de: R$:%.2f\n", saldo);
    break;

    case 'd':
    printf("Encerrando o programa, tenha um otimo dia\n");
    opcao = 1;
    break;

    default:
    printf("Digite uma opcao valida!\n");
    break;
}
}
while (opcao != 1);
}
