#include <stdio.h>

void main()
{

    float cel_v, t=0,din=0;
    int trab;
    char tarefa;

    printf("Insira o valor do celular desejado: ");
    scanf("%f", &cel_v);
    printf("Insira o dinheiro atual: ");
    scanf("%f", &din);
    printf("Qual trabalho a Maria Eugenia ira realizar: ");
    scanf(" %c", &tarefa);


    if(cel_v<=din)
    {
        printf("\nValor invalido, Maria ja arrecadou o dinheiro necessario.\n");
    }

    else
    {
        while(din<=cel_v)
        {
            switch(tarefa)
            {
            case 'j': //João
                t+=5;
                din+=50;
                break;

            case 'c': //Cleusa
                din +=120;
                t += 4+4+6;
                break;

            case 'b': //Bia
                din+=60;
                t+=4;
                break;

            default: 'm'; //sua mãe
                din+=50;
                t+=3;
                break;

            }
        }
    }

    if(tarefa=='j')
    {
        printf("\nO trabalho escolhido foi o de João\n");
    }

    else if(tarefa=='c')
    {
        printf("\nO trabalho escolhido foi o de Cleusa\n");
    }
    else if(tarefa=='b')
    {
        printf("\nO trabalho escolhido foi o de Bia\n");
    }
    else if(tarefa=='m')
    {
        printf("\nO trabalho escolhido foi o de Mae\n");
    }

    printf("Dinheiro total arrecadado durante as tarefas: R$%0.2f\n", din);
    printf("Tempo total gasto para arrecadar: %0.2f\n", t);
    printf("Valor pago no celular com desconto a vista: R$%0.2f\n", (cel_v*0.95));
    printf("Valor que sobrou apos o pagamento: R$%0.2f\n", din-(cel_v*0.95));

}
