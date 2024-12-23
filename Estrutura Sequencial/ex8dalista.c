#include <stdio.h>
void main()
{

int anos, meses, dias;


printf("Quantos anos voce tem?");
scanf("%d", &anos);

dias = anos * 365;
meses = anos*12;

printf("Voce viveu %d dias e %d meses", dias, meses);


}
