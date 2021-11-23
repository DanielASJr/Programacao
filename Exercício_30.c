#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, i;

printf("Serie de Fibonacci:\n");

a = 0;
b = 0;
c = 1;
i = 0;
a = c;

printf("%i",c);

    while (i <= 30)
    {
    c = a + b;
    b = a;
    a = c;
    printf("\n%i", c);
    i++;
    }
    
 return 0;
}