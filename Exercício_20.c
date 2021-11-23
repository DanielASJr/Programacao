#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    float P1, P2, MEDIA;

    printf( "Digite a nota da P1: ");
    scanf("%f", &P1);

    printf( "Digite a nota da P2: ");
    scanf("%f", &P2);

    MEDIA= (P1+(2*P2))/3;

    if (MEDIA >=5)
    {
    printf("APROVADO");
    }

    else 
    {
    printf("REPROVADO");
    }

 return 0;
}