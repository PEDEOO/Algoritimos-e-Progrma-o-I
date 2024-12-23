#include <stdio.h>
void main()
{
    int idade, dia = 24, horas = 60, minuto = 60;
    float anos = 365.25, total;




 printf("Qual a idade da pessoa?");
 scanf("%d", &idade);


 total = (idade * anos * dia * horas * minuto * 1);
 printf("O Coracao Humano tera batido um total de %f vezes", total);
}

