#include <stdio.h>
#define TF 100

//a) Preencher um vetor contendo N valores referentes aos prontu�rios dos alunos;
//b) Com a digita��o do prontu�rio de um aluno, apresentar a posi��o que esse aluno est� na lista de
//classifica��o;
//c) Considerando que ser�o beneficiados X alunos, apresentar o prontu�rio desses X primeiros alunos;
//d) Apresentar a classifica��o completa dos alunos.


void main()
{

    int a=0, pront, pe[TF],p, x;

    printf("Insira a quantidade de alunos incritos:..");
    scanf("%d", &a);

    printf("Insira o prontuario dos alunos:..");
    for(int i=0; i<a; i++)
    {
        scanf("%d", &pe[i]);
    }

    printf("Qual prontuario gostaria de solicitar:.. ");
    scanf("%d", &pront);

    for(int i=0; i<a; i++)
    {
        if(pe[i]==pront)
        {
            printf("Posicao:%d;Prontuario:%d ;aluno: X.\n", i+1, pe[i]);
            p=1;
        }
    }
    if(!p)
    {
        printf("\nProntuario n�o encontrado\n");
    }

    printf("Quantos alunos ser�o beneficiados:..");
    scanf("%d", &x);

    for(int i=0;i<x;i++)
    {
        printf("\nPosicao:%d;prontuario:%d;aluno X.\n", i+1,pe[i]);
    }

    printf("\n-----Classificacao-----\n");
    for(int i=0;i<a;i++)
    {
        printf("\nPosicao:%d;prontuario:%d;aluno X.\n", i+1 ,pe[i]);
    }

}
