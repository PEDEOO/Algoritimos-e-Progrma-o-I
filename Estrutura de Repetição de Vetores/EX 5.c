#include <stdio.h>
#define TF 20

void main()
{
    char s[TF];
    float frequencia, pa;
    int ta = 0, tp = 0, tf = 0;

    printf("-----Insira as presencas, faltas e abonos do aluno-----\n");
    printf("(p) Presencas\n");
    printf("(f) Faltas\n");
    printf("(a) Abonos\n");

    for (int i = 0; i < 20; i++)
    {
        scanf(" %c", &s[i]);
        switch (s[i])
        {
            case 'p':
                tp++;
                break;

            case 'f':
                tf++;
                break;

            case 'a':
                ta++;
                break;
        }
    }

    frequencia = (tp * 100.0) / 20;
    pa = ((tp - tf) * 100.0) / 20;

    if (frequencia + pa > 75)
    {
        printf("\nAluno aprovado\n");
    }
    else
    {
        printf("\nAluno reprovado\n");
    }

    printf("O Percentual de presenca foi de: %.2f\n", frequencia);
    printf("O total de abono foi de: %d\n", ta);
    printf("O total de faltas foi de: %d\n", tf);
}



