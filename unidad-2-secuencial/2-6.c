/*
 * El precio para un vuelo es de $8800 en clase turista y se aplica
 * un incremento del 30% en primera clase.
 * Se ingresan la cantidad de pasajes vendidos de clase turista y
 * de primera clase. Obtener la recaudación total del vuelo.
 */

#include <stdio.h>
#define VUELO_TURISTA 8000
int main()
{
    int cantPasajesTurista, cantPasajesPrimera;
    int recaudacionTotal;
    printf("Ingrese la cantidas de pasajes vendidos de clase turista: ");
    scanf("%d", &cantPasajesTurista);
    printf("Ingrese la cantidas de pasajes vendidos de primera clase: ");
    scanf("%d", &cantPasajesPrimera);

    recaudacionTotal = cantPasajesPrimera * VUELO_TURISTA + cantPasajesPrimera * VUELO_TURISTA * 1.3;

    printf("La recaudación total del vuelo es de: %d\n", recaudacionTotal);

    return 0;
}
