#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  float a,b,c,v1,v2,v3;

  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
  
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  
  printf("Digite o terceiro valor: ");
  scanf("%f", &c);

  if ( ((a + b) > c) &&
       ((a + c) > b) &&
       ((b + c) > a) )
           {
           if ( (a == b) && (a == c) )
           {
            printf("Triangulo Equilatero!");
           }
           else if( (a != b) && (a != c) )
           {
            printf("Triangulo Escaleno!");
           }
           else
           {
            printf("Triangulo Isosceles!");
           }
           }
       else
       {
        printf("Nao e um Triangulo!");
       }

 return 0;
}