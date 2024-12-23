#include <stdio.h>
void main()

{
float qrefeicao = 10, pesototal, peso, valor;

printf("Quantos ficou pesando o prato da refeição em gramas?");
scanf("%f", &peso);

pesototal = (650 + peso)/1000;

valor = qrefeicao * pesototal;

printf("O valor a ser pago sera de %f", valor);






}
