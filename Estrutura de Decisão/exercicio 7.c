#include <stdio.h>

void main ()
{

int valor, cdg;

printf ("insira o valor do produto: ");
scanf ("%d", &valor);

printf ("insira o codigo do produto: ");
scanf ("%d", &cdg);

if (cdg >= 1 && cdg <= 5)
{
    printf ("A procedencia do produto e do Sul");

}

else if (cdg >= 6 && cdg <= 7)
{
    printf ("A procedencia do produto e do Norte");
}

else if (cdg >= 8 && cdg <= 10)
{
    printf ("A procedencia do produto e do Centro-Oeste");
}

else if (cdg >= 11 && cdg <= 20)
{
    printf ("A procedencia do produto e do Sudeste");
}

else if (cdg >= 21 && cdg <= 25)
{
    printf ("A procedencia do produto e do Nordeste");
}








}

