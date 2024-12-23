#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int TentativasTotal = 6, TentativasRestantes = 0, palpite, numero, disMAX = 10;

    srand(time(NULL));
    numero = rand() % 100 + 1;

    printf("Bem Vindo ao Adivinhe o N�mero\n");
    printf("\nAs regras s�o simples: Voc� tem 6 chances de acertar um n�mero de 1 a 100 que eu escolhi. BOA SORTE!\n");

    for (TentativasRestantes = 1; TentativasRestantes <= TentativasTotal; TentativasRestantes++)
    {
        printf("\nTentativa N�mero %d | Digite o seu palpite: ", TentativasRestantes);
        scanf("%d", &palpite);

        int distancia = abs(numero - palpite);

        if (distancia <= disMAX)
        {
            printf("Quente\n");
        }
        else
        {
            printf("Frio\n");
        }

        if (palpite < numero)
        {
            printf("O n�mero � maior que o digitado\n");
        }
        else if (palpite > numero)
        {
            printf("O n�mero � menor que o digitado\n");
        }
        else
        {
            printf("IMPOSS�VEL, como voc� sabia que o n�mero que eu estava pensando era %d e faltando apenas %d tentativas, meus parab�ns jogador!\n", numero, TentativasRestantes);
            return 0;
        }
    }

    if (TentativasRestantes > TentativasTotal)
    {
        printf("Hahaha, voc� foi derrotado, o n�mero correto era: %d\n", numero);
        printf("Boa sorte na pr�xima vez!\n");
    }

    return 0;
}
