#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int numero , tab;

printf ("Digite um numero: \n\n ");
scanf ("%i" , &numero);

while( numero <= 0)
{
printf(" NUMERO INVALIDO, POR FAVOR DIGITE UM NUMERO POSITIVO\n\n");
scanf("%i" , &numero);
}

for(int i = 0; i <=10 ; i++){
tab = numero * i;
printf ("\n%i X %i = %i\n" ,numero, i, tab);
}
 return 0;
}
