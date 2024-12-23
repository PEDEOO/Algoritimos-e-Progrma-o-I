#include <stdio.h>

int main(){
    int vetorA[5], vetorB[5], vetorConcatenado[10], somaA = 0, somaB = 0, aux, multiplicador;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor da posicao %d do vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("Digite o valor da posicao %d do vetor B: ", i);
        scanf("%d", &vetorB[i]);
    }

    for(int i = 0; i < 5; i++)
        vetorConcatenado[i] = vetorA[i];

    for(int i = 5; i < 10; i++)
        vetorConcatenado[i] = vetorB[i-5];


    printf("\nJuncao dos vetores: ");
    printf("\n");

    for(int i = 0; i < 10; i++) // teste de concac
        printf("%d\t", vetorConcatenado[i]);

    printf("\n");

    for(int i = 0; i < 5; i++)
        somaA += vetorA[i];

    for(int i = 0; i < 5; i++)
        somaB += vetorB[i];

    if(somaA > somaB){
        printf("\nSoma dos valores de A eh maior: ");
        for(int i = 0; i < 5; i++){
            printf("%d\t", vetorA[i]);
        }
    } else if(somaB > somaA) {
        printf("\nSoma dos valores de B eh maior: %d", somaB);
        printf("\n");
        for(int i = 0; i < 5; i++){
            printf("%d\t", vetorB[i]);
        }
    } else {
        printf("\nSoma é igual");
    }
    printf ("\n");
    printf ("\n--Multiplicacao dos Vetores:--\n");
    printf ("\nQual e o valor que os numeros deverao ser multiplicados?:");
    scanf ("%d", &multiplicador);
    printf ("\n");

    for(int i= 0; i < 10; i++) {
    vetorConcatenado[i]*= multiplicador;
    }
    for(int i= 0; i < 10; i++) {
    printf ("%d\t", vetorConcatenado[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        aux = vetorA[i];
        vetorA[i] = vetorB[i];
        vetorB[i] = aux;
    }

    printf("\n");
    printf("\n-- Troca de vetores --");

    printf("\nVetor A: ");
    for(int i = 0; i < 5; i++)
        printf("%d\t", vetorA[i]);

    printf("\n");

    printf("\nVetor B: ");
    for(int i = 0; i < 5; i++)
        printf("%d\t", vetorB[i]);
}
