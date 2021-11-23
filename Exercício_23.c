#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{
    int a,b;
    printf("Digite um primeiro numero: ");
    scanf("%i", &a);

    printf("Digite um segundo  numero: ");
    scanf("%i", &b);


while(b<a)
{
printf("Erro! Digite  numero maior que o primeiro!");
scanf("%i", &b);
}

 return 0;
}