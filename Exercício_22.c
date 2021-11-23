#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{
    int numero;
    printf("Digite um numero positivo: ");
    scanf("%i", &numero);

while(numero<=0)
{
printf("Erro! Digite apenas numeros positivos! Digite novamente: ");
scanf("%i", &numero);
}

 return 0;
}