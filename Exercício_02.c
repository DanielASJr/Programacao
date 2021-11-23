#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int aresta, resultado;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o lado do quadrado: ");
  scanf("%i", &aresta);
 
  // Faz a soma dos valores obtidos acima
  resultado= aresta * aresta;
 
  // Exibe o resultado final
  printf("A Area do quadrado e igual a %i",  resultado);
 
  return 0;
}