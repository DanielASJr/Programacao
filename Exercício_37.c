#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){

  int numeros[20];
  int localizacao=0;
  int resultado[20];
  int armazenar;
  int posicao=0;
  int i=0;
  int consulta;
 
  printf("Quantos valores deseja armazenar?\n");
  scanf("%i", &armazenar);
  while(armazenar<=0 ||armazenar>20){
        printf("Digite um valor valido.\n"); 
        scanf("%i", &armazenar);
}
  printf("Digite os %i numeros: \n", armazenar);
        for(int i=0; i<armazenar; i++){
        scanf("%i", &numeros[i]);
    }
  consulta = 1;
  while(consulta == 1){
  printf("Deseja realizar uma consulta? 1 para sim, 2 para nao \n");
  scanf ("%i", &consulta);

  if(consulta == 1){

  printf("Digite um numero que deseja saber a localizacao: " );
  scanf ("%i", &localizacao);
  
for(i=0; i<armazenar; i++)
{
  
while(numeros[i]!=localizacao)
{
i = i + 1;

}
 if(numeros[i] == localizacao){
   printf("O numero digitado se encontra na posicao %i do vetor: ", i);
 }
}
  }
  }
return 0;
}