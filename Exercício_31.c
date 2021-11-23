#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int seq,a,b,c, i;

printf("\nBEM VINDO!   \n");
seq = 0;
a=-1;
b=1;
c=1;
i =0 ;

 while(i<5){
 seq = a + b ;
 b=a;
 a = seq+2;
    
printf("\n %i\n" ,seq);
}

 return 0;
}