#include <math.h>
#include <stdio.h>

#define PI 3.14

int main()
{
    float radio, superficie;

    printf("Ingrese el valor del radio de un círculo (valor mayor que 0): ");
    scanf("%f", &radio);

    superficie = PI * pow(radio, 2.0);

    printf("La superficie del círculo es: %5.2f\n", superficie);

    return 0;
}
