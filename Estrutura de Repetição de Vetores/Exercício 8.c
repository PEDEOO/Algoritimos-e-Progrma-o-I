#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int TentativasTotal = 6, TentativasRestantes = 0, palpite, numero, disMAX = 10;

    srand(time(NULL));
    numero = rand() % 100 + 1;

    printf("Bem Vindo ao Adivinhe o Número\n");
    printf("\nAs regras são simples: Você tem 6 chances de acertar um número de 1 a 100 que eu escolhi. BOA SORTE!\n");

    for (TentativasRestantes = 1; TentativasRestantes <= TentativasTotal; TentativasRestantes++)
    {
        printf("\nTentativa Número %d | Digite o seu palpite: ", TentativasRestantes);
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
            printf("O número é maior que o digitado\n");
        }
        else if (palpite > numero)
        {
            printf("O número é menor que o digitado\n");
        }
        else
        {
            printf("IMPOSSÍVEL, como você sabia que o número que eu estava pensando era %d e faltando apenas %d tentativas, meus parabéns jogador!\n", numero, TentativasRestantes);
            return 0;
        }
    }

    if (TentativasRestantes > TentativasTotal)
    {
        printf("Hahaha, você foi derrotado, o número correto era: %d\n", numero);
        printf("Boa sorte na próxima vez!\n");
    }

    return 0;
}
