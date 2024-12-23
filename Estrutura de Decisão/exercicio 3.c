#include <stdio.h>

void main ()
{

int salario;
float reajuste, VF;


printf ("Insira o seu salario: ");
scanf ("%d", &salario);

if (salario <= 2500)
{

    reajuste = salario * 0.15;

    VF = salario + reajuste;

}

else
{

  reajuste = salario * 10/100;
    VF = salario + reajuste;


}

printf ("O valor do salario sera de R$ %.2f\n", VF);



}
