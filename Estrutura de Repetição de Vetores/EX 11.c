#include <stdio.h>
#define TF 100

//a) Preencher um vetor contendo N valores referentes aos prontuários dos alunos;
//b) Com a digitação do prontuário de um aluno, apresentar a posição que esse aluno está na lista de
//classificação;
//c) Considerando que serão beneficiados X alunos, apresentar o prontuário desses X primeiros alunos;
//d) Apresentar a classificação completa dos alunos.


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
        printf("\nProntuario não encontrado\n");
    }

    printf("Quantos alunos serão beneficiados:..");
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
