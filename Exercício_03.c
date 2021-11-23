#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
  float altura, base, area;
  printf("Digite a altura do triangulo: ");
  scanf("%f",&altura);

  printf("Digite a base do triangulo: ");
  scanf("%f",&base);

  area= (altura*base)/2;

  printf("A area do triangulo e: %.2f",area);

  return 0;
}