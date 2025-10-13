/*
* Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho valor calcule
la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera.
𝑆𝑢𝑝𝑒𝑟𝑓𝑖𝑐𝑖𝑒 = 𝜋𝑟^2
𝑃𝑒𝑟í𝑚𝑒𝑡𝑟𝑜 = 2𝜋𝑟
𝑉𝑜𝑙ú𝑚𝑒𝑛 = (4/3) 𝜋𝑟^3
*
*/

////////////////////////////////////////////////////////////////////////////////////////////
// COMPILAR CON -lm PARA LINKEAR CON LA LIBRERIA libm.a  NO ALCANZA CON EL INCLUDE MATH.H //
////////////////////////////////////////////////////////////////////////////////////////////

#include <math.h>
#include <stdio.h>
#define PI 3.14159265358979323846

int main()
{
    float radio;

    printf("Ingrese el valor del radio: ");
    scanf("%f", &radio);

    printf("La superficie del círculo es: %6.2f\n", PI * pow(radio, 2));
    printf("El perímetro del círculo es: %6.2f\n", 2 * PI * radio);
    printf("La volumen del círculo es: %6.2f\n", 4 * PI * pow(radio, 3) / 3);

    return 0;
}
