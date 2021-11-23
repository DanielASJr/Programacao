#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
  int n[10];

  printf("Digite 10 numeros: ");
  for(int i=0; i<10; i++)
  {
  scanf("%i", &n[i]);
  }

  printf("Os numeros digitados foram:\n ");
  for(int i=10; i>=0; i--)
  {
  printf("%i \n", n[i]);
  }

 return 0;
}