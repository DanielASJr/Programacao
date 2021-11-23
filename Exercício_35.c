#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int numeros[20];
  int multiplicador;
  
  printf("Digite os respectivos 10 numeros: ");
  for(int i=0; i<20; i++)
  {
  scanf("%i", &numeros[i]);
  printf("Deve multiplicar por quanto? \n");
  scanf("%i", &multiplicador);
  numeros[i] = numeros[i] * multiplicador;
  }

  printf("Os respectivos numeros digitados multiplicados pelos respectivos valores:  ");
  for(int i=0; i<20; i++)
  {
  printf("%i \n", numeros[i]);
  }
return 0;
}