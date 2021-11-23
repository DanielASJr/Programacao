#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
 float v1,v2,v3,v4, media;
 printf("Digite o valor 1: ");
 scanf("%f",&v1);

 printf("Digite o valor 2: ");
 scanf("%f",&v2);

 printf("Digite o valor 3: ");
 scanf("%f",&v3);

 printf("Digite o valor 4: ");
 scanf("%f",&v4);

 media=(v1+v2+v3+v4)/4;
 printf("A media dos valores e: %.2f",media);

 return 0;
}