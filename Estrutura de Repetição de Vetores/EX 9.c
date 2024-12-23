#include <stdio.h>

void main()
{

    int numero1 = 0,soma1=0, numero2 = 0,soma2=0 ;

    srand(time(NULL));

    do
    {
        numero1 = rand()%6+1;
        printf("\nOs numeros do primeiro foram:%d", numero1);
        numero1++;


        numero2 = rand()%6+1;
        printf("\nOs numeros do segundo foram:%d", numero2);
        numero2++;

        if(numero1>numero2)
        {
            printf("\n|O primeiro ganhou a rodada|\n");
            soma1++;
        }

        if(numero1<numero2)
        {
            printf("\n|O segundo ganhou a rodada|\n");
            soma2++;
        }

        if(numero1==numero2)
        {
           printf("\n|Deu empate|\n");
        }
    }
    while (soma1 < 11 && soma2 < 11);

    if(soma1>soma2)
    {
      printf("\nO primeiro amigo ganhou\n");
      printf("O primeiro fez %d pontos.\n", soma1);
      printf("O segundo fez %d pontos.\n", soma2);
    }

    else
    {
      printf("\nO segundo ganhou\n");
      printf("O primeiro fez %d pontos.\n", soma1);
      printf("O segundo fez %d pontos.\n", soma2);
    }


    return 0;
}
