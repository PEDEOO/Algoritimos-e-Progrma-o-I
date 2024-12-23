#include <stdio.h>
void main()
{
    int palpite, numero,minimo = 1,maximo = 100, tentativas = 0;
    char resposta;
    srand(time(NULL));
    printf ("\n------ Bem vindo ao Jogo da Adivinhacao ------\n");
    printf ("Agora os papeis se inverteram, eu (computador) que vai adivinhar o numero que voce escolheu\n");
    printf("Pense em um numero entre 1 a 100:");
    scanf("%d", &numero);
    do
    {
        palpite = rand() % (maximo - minimo + 1) + minimo;
        printf("O meu palpite, que o numero escolhido foi:%d\n", palpite);
        printf("O numero e maior (M) ou menor (m)? Caso eu tenha acertado, digite (a)");
        scanf(" %c", &resposta);
        if(resposta == 'M')
        {
            minimo = palpite + 1;
        }
        else if(resposta == 'm')
        {

            maximo = palpite - 1;
        }
        else
        {
            printf("Eu acertei!!!");
        }

        tentativas++;
    }
    while (palpite != numero);
    printf("\nTive %d para acertar o numero!\n", tentativas);

}
