#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, num;
    i = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++)
    {
    printf("%d x %d = %d\n", num, i, i * num);
    }

    system("pause");

    for (int i = 10; i <= 20; i++)
    {
    printf("%d x %d = %d\n", num, i, i * num);
    }

 return 0;
}