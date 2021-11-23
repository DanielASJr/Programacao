#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n, s, m, v;

    s=2;
    m=3;
    printf ("Digite a quantidade da sequencia  de numeros desejados da sequencia:\n");
    scanf ("%f", & n);
    
    while (n<1 || n>100)
    {
	printf("Valor invalido, digite novamente:\n");
    scanf ("%f", & n); 
    }
    
    if (n<2)
    {
    printf ("Soma = 2");
    }

    else
    {
    v=2;
    printf ("2 - ");
        for (size_t i = 1; i < n; i++)
        {
        s=s+m;
        v=v+s;
        m=m+2;
		printf ("%.0f - ", s);
        }

    printf("\nSoma = %.0f", v);

    }
}
