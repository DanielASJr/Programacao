#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numeros[20], vet_multiplicado[20],multiplicador;

    for(int i = 0; i < 20; i++)
    {
    printf("Digite um numero: ");
    scanf("%d", &numeros[i]);
    }

printf("Digite um numero para efetuar a multiplicacao: ");
scanf("%d", &multiplicador);

    for(int i = 0; i < 20; i++)
    {
     vet_multiplicado[i] = numeros[i] * multiplicador;
    }

    for(int i = 0; i < 20; i++)
    {
    printf("%d\n", vet_multiplicado[i]);
    }
 return 0;
}