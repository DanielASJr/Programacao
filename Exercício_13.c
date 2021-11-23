#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
 float base, altura,area;
 printf("Digite o valor da base:");
 scanf("%f",&base);

 printf("Digite o valor da altura:");
 scanf("%f",&altura);
 area=base*altura;
 printf("Terreno ");
    if(area>100)
    {
      printf("Grande");
    }
    else
    {
       printf("Pequeno");
    }
 return 0;
}