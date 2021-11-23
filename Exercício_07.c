#include <stdio.h>

int main(int argc, char const *argv[])
{
    float P1, P2, P3, P4, P5, pago, Total, Troco;
    printf("Produto 1: R$");
    scanf("%f", &P1);

    printf("Produto 2: R$");
    scanf("%f", &P2);

    printf("Produto 3: R$");
    scanf("%f", &P3);

    printf("Produto 4: R$");
    scanf("%f", &P4);

    printf("Produto 5: R$");
    scanf("%f", &P5);

    printf("Valor pago: R$");
    scanf("%f", &pago);

    Total = P1 + P2 + P3 + P4 + P5;
    Troco = pago - Total;

    printf("Troco: R$%.2f", Troco);
    scanf("%f", &Troco);
 return 0;
}