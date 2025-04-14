/*
Una empresa de aviación vende pasajes en clase turista y en primera clase, cuyo costo es un
30% más caro que clase turista. Se pide al usuario ingresar el importe de cada pasaje de clase
turista, la cantidad de pasajes vendidos de clase turista y la cantidad vendida de primera clase.
informar la recaudación total del vuelo.
*/
#include <stdio.h>

int main()
{
    float precio_turista, precio_primera;
    int cantidad_turista, cantidad_primera;
    float recaudacion_total;

    // Pedir datos al usuario
    printf("Ingrese el precio del pasaje en clase turista: ");
    scanf("%f", &precio_turista);

    printf("Ingrese la cantidad de pasajes vendidos en clase turista: ");
    scanf("%d", &cantidad_turista);

    printf("Ingrese la cantidad de pasajes vendidos en primera clase: ");
    scanf("%d", &cantidad_primera);

    // Calcular precio de primera clase
    precio_primera = precio_turista * 1.30;

    // Calcular recaudación total
    recaudacion_total = (precio_turista * cantidad_turista) + (precio_primera * cantidad_primera);

    // Mostrar resultado
    printf("La recaudacion total del vuelo es: %.2f\n", recaudacion_total);

    return 0;
}
