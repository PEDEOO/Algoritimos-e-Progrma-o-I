#include <stdio.h>
void main()
{
    int x, y;


    printf("Qual o valor da coordenada X?\n");
    scanf("%d", &x);

    printf("Qual o valor da coordenada y?\n");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("As coordenadas estao no quadrante 1");
    }

    if (x < 0 && y > 0)
    {
        printf("As coordenadas estao no quadrante 2");
    }
    if (x < 0 && y < 0)
    {
        printf("As coordenadas estao no quadrante 3");
    }
    if (x > 0 && y < 0)
    {

        printf("As coordenadas estao no quadrante 4");
    }

    if (x == 0 && y == 0)
    {
        printf("As coordenadas se encontram no ponto de origem.");
    }
    if (x > 0 && y == 0)
    {
        printf("O ponto esta sobre o eixo X e a coordenada Y e igual a zero");
    }
    if (x == 0 && y > 0)
    {
        printf("O ponto esta sobre o eixo Y e a a coordenada X e igual a zero");
    }






}
