/* Confeccionar un programa que ingrese una medida en ‘pies’
 * y la exhiba convertida a yardas, pulgadas, cms. y mts.
 * NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms
 */

#include <stdio.h>

int main()
{
    float enPies, enPulgadas, enYardas, enCm;
    printf("Ingrese la medida en pies: ");
    scanf("%f", &enPies);
    enPulgadas = enPies * 12;
    enCm = enPulgadas * 2.54;
    enYardas = enPies / 3;

    printf("En pies: %6.2f\n", enPies);
    printf("En pulgadas: %6.2f\n", enPulgadas);
    printf("En yardas: %6.2f\n", enYardas);
    printf("En centímetros: %6.2f\n", enCm);

    return 0;
}
