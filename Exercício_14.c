#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Digite um valor: ");
    scanf("%i", &a);

    printf("Digite outro valor: ");
    scanf("%i", &b);

    printf("Digite outro valor: ");
    scanf("%i", &c);

    if(a > b)
    {
        if(a > c)
        {
        printf("O maior valor e: %i", a);
        }
        else
        {
        printf("O maior valor e: %i", c);
        }
    }
    else
    {
        if(b > c)
        {
        printf("O maior valor e: %i", b);
        }
        else
        {
        printf("O maior valor e: %i", c);
        }
    }
 return 0;
}