#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Digite um valor: ");
    scanf("%i", &x);

    printf("Digite outro valor: ");
    scanf("%i", &y);

    if(x < y)
    {
    printf("O maior valor e: %i", y);
    }
    else
    {
    printf("O maior valor e: %i", x);
    }
 return 0;
}