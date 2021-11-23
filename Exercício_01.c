#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int base, altura, area;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite a base do retangulo: ");
  scanf("%i", &base);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite a altura do retangulo: ");
  scanf("%i", &altura);
 
  // Faz a soma dos valores obtidos acima
  area = base * altura;
 
  // Exibe o resultado final
  printf("A Area do retangulo de base %i e altura %i e igual a %i", base, altura, area);
 
  return 0;
}