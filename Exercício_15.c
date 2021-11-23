#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
 float peso, altura, r;
 printf("Digite o peso:");
 scanf("%f",&peso);

 printf("Digite a altura:");
 scanf("%f",&altura);

 r=peso/(altura*altura);

    if(r>20)
    {    
    printf("Abaixo do peso");
    }
    else
    {
     if(r>25)
       {
       printf("Acima do peso");
       }
     else
      {
      printf("Peso ideal");
      }
    }
 return 0;
}