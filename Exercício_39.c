int main(int argc, char *argv[]){
  int numeros[3][4];
  int multiplicador;
 
  printf("Digite os numeros para matriz 3 x 4 \n");
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<4; j++)
      {
      scanf("%i", &numeros[i][j]);
      }
  }
  printf("Digite o multiplicador: ");
  scanf("%i", &multiplicador);
  printf("Os numeros digitados na matriz foram: \n");
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<4; j++)
     {
     printf("%i ", numeros[i][j]*multiplicador);
     }
  printf("\n");
  }
 return 0;
}