#include <stdio.h>

void main()
{


    float h, horaextra, horafalta, extraemhora, faltaemhora, premio;


    printf("Qual foi o numero das horas extras (em minutos) ?\n");
    scanf("%f", &horaextra);
    printf("Qual foi o numero das horas faltadas (em minutos) ?\n");
    scanf("%f", &horafalta);

    h = (horaextra) - (2/3 * (horafalta));

    if(h > 2400)
        premio = 500;
    if(h > 1801 && h < 2399)
        premio = 400;
    if(h > 1201 )
        premio = 300;
    if(h > 600 )
        premio = 200;
    else
        premio = 100;

    extraemhora = horaextra/60;
    faltaemhora = horafalta/60;

    printf("Voce teve %.0f horas extras, %.0f horas-falta e o valor do seu premio foi de: %1.f", extraemhora, faltaemhora, premio);


}
