#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n, A, B, r;

    printf("Digite um numero positivo: ");
    scanf("%i", &n);

    while (n <= 0)
    {
    printf("Digite um numero positivo: ");
    scanf("%i", &n);
    }

    printf("Inicia em: ");
    scanf("%i", &A);

    printf("Termina em: ");
    scanf("%i", &B);
    
    while (B<=A)
    {
    printf("Termina em: ");
    scanf("%i", &B);
    }

    printf(" %i no intervalo de %i a %i", n, A, B);

    for (B; B >= A; B--)
    {
    r = n * B;
    printf("\n%i * %i = %i", n, B, r);
    }
    
 return 0;
}