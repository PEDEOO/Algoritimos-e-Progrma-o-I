#include <stdio.h>
void main()
{
    float salario, multa1, multa2, salariofinal;

    printf("Quantos João recebeu de salario?");
    scanf("%f", &salario);

    printf("Quantos esta custando a primeira conta?");
    scanf("%f", &multa1);
    printf("Quantos esta custando a segunda conta?");
    scanf("%f", &multa2);

    salariofinal = salario * 0.96;
    printf("O salario final sera de %f ", salariofinal);




}

