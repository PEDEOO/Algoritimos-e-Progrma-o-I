#include <stdio.h>
void main()
{
    float notatrabalho, notaprova, pesotrabalho = 4, pesoprova = 6, media;

    printf("Quantos voce tirou no trabalho?");
    scanf("%f", &notatrabalho);

    printf("Quantos voce tirou na prova?");
    scanf("%f", &notaprova);

    media = ((notatrabalho * 4) + (notaprova * pesoprova))/10;
    printf("Sua media sera de %f", media);



}

