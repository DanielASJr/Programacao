#include <stdio.h>

int main(int argc, char const *argv[])
{
    float C, F;
    printf("Celsius = ");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("Fahrenheit = %.1f", F);
    scanf("%f", &F);

    return 0;
}