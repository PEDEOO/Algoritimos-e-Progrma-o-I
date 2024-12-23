#include <stdio.h>
void main()
{
int qfrango, ped = 4, pee = 7, total;
printf("Quantos frangos tem na fazenda frangotech?\n");
scanf("%d", &qfrango);

total = qfrango * (ped + pee);
printf("o valor total sera de %d", total);
}
