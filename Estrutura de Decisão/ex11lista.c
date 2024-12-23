#include <stdio.h>
void main()
{
    float nota1, nota2, nota3, media;

    printf("\Quantos o aluno tirou na primeira prova?\n");
    scanf("%f", &nota1);

    printf("\Quantos o aluno tirou na segunda prova?\n");
    scanf("%f", &nota2);

    printf("Quantos o aluno tirou na terceira prova?\n");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;



   if(media >= 6.0)
    printf("O aluno foi aprovado");
   if(media < 6.0)
    printf("O aluno foi reprovado");



}
