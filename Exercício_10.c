#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
 int a, b;
 printf("Digite o primeiro valor:");
 scanf("%i",&a);

 printf("Digite o segundo valor:");
 scanf("%i",&b);
 printf("Menor valor:");

    if(a<b)
    {
     printf("%i",a);
    }

    else
    {
     printf("%i",b); 
    }

 return 0;
}