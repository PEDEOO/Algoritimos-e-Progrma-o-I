#include <stdio.h>
void main()
{
    float anos, meses, dias;



    printf("Quantos dias a fabrica esta sem acidentes?\n");
    scanf("%f", &dias);

    anos = dias/365;
    meses = dias/30;

    printf("A empresta esta %.0f anos sem acidentes %.0f meses sem acidentes e %.0f dias sem acidentes", anos, meses, dias);

}
