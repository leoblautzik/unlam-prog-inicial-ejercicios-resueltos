/*Una pizzería vende empanadas por unidad o por docena, la docena cuesta $300 pero si se compra
individualmente se cobra $30 la unidad. Si se compran más empanadas que no se agrupen en docenas las
adicionales se cobran como por unidad. Indicar el precio total a abonar.
*/

#include <stdio.h>

int main()
{

    int empanadas, docenas, unidades;
    float porDocena = 300.00;
    float porUnidad = 30.00;
    printf("Ingrese la cantidad de empanadas: ");
    scanf("%d", &empanadas);

    docenas = empanadas / 12;
    unidades = empanadas % 12;

    printf("El importe a abonar es: %5.2f\n", docenas * porDocena + unidades * porUnidad);

    return 0;
}
