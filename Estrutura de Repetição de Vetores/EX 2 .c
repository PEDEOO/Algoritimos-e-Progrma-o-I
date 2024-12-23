#include <stdio.h>

void main()
{

int v, v0=0, g=10, t, h, h0=0;

for(t=0; t<=7; t++)
{

    h=h0+v0*t+ 0.5 * g * (t*t);
    v=v0+g*t;
    printf("\n");
    printf("A velocidade da bolinnha no segundo %d sera de %d\n", t, v);
    printf("A altura da bolinnha no segundo %d sera de %d\n", t, h);


}

}
