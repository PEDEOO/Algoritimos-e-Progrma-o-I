#include <stdio.h>

void main ()
{

int salario;
float aumento, VF;

printf ("Insira o seu salario: ");
scanf ("%d", &salario);

if (salario >= 1800)
{
printf ("Voce nao tem direito ao aumento \n");

aumento = 0;
VF = salario + aumento;
}

else
{

    aumento = salario * 25/100;
    VF = salario + aumento;


}

printf ("O valor do salario reajustado sera de R$ %0.2f\n", VF);






}
