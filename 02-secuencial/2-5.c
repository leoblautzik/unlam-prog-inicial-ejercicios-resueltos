/*
 * Conociendo la cantidad de tarros de pintura que existe en un depósito
 * de una pinturería y sabiendo que el 50% son tarros de 1Lt,
 * el 30% tarros de 4Lts. y el resto tarros de 20Lts.
 * Determinar la cantidad de tarros de 1Lt., 4Lts. Y 20 Lts.
 */

#include <stdio.h>

int main()
{
    int cantTarros, de1Lt, de4Lt, de20Lt;
    printf("Ingrese la cantidad de tarros de pintura ");
    scanf("%d", &cantTarros);
    de1Lt = cantTarros * 0.5;
    de4Lt = cantTarros * 0.3;
    de20Lt = cantTarros - de1Lt - de4Lt;

    printf("Cantidad de tarros de 1 Lt: %d\n", de1Lt);
    printf("Cantidad de tarros de 4 Lt: %d\n", de4Lt);
    printf("Cantidad de tarros de 20 Lt: %d\n", de20Lt);

    return 0;
}
