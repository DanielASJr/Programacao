#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Digite um valor: ");
    scanf("%i", &y);

    printf("Digite outro valor: ");
    scanf("%i", &x);

    if(x < y)
    {
     printf("O maior numero e: %i", y);
    }
    else if(x > y)
    {
     printf("O maior numero e: %i", x);
    }
    else
    {
     printf("Os numeros sao identicos!");
    }
 return 0;
}