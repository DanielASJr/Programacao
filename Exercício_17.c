#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
  int A, B, C;
  
  printf("Digite o valor 1: ");
  scanf("%i", &A);
 
  printf("Digite o valor 2: ");
  scanf("%i", &B);

  printf("Digite o valor 3: ");
  scanf("%i", &C);



  if((A*A)+(B*B)==(C*C))
  {
  printf("Este e um triangulo retangulo");
  }    
  else 
  {
  printf("Este triangulo nao e retangulo");
  }
  
  return 0;
}
