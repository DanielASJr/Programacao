#include<stdio.h>
int main(int argc, char const *argv[])
{
    int b, h, A;
    printf("Digite o valor da base do retangulo: ");
    scanf("%i", &b);

    printf("Digite o valor da altura do retangulo: ");
    scanf("%i", &h);

    A = b * h;

    printf("\nArea do retangulo: %i", A);

    if(A > 100)
    {
    printf("\nTerreno grande!");
    }

 return 0;
}