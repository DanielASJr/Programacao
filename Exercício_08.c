#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
 float peso, altura, imc;

 printf("Informe seu peso: ");
 scanf("%f", &peso);

 printf("Informe sua altura: ");
 scanf("%f", &altura);

 imc = peso / (altura * altura);

 printf("IMC: %f", imc);
     
 return 0;
}