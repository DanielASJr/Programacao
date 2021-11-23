#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
 float dolar, real, cotacao; 
 printf("Cotação do dia: "); 
 scanf("%f", &cotacao);  

 printf("Quantidade de Dolares: ");  
 scanf("%f", &dolar);

 real = cotacao * dolar;
    
 printf("Valor em reais: %f", real);
    
 return 0;
}