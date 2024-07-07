/* Para una carrera de automóviles, se toman los tiempos de clasificación (real, mayor que 0 en segundos) de como máximo
60 autos de carrera inscriptos para la competencia. Los autos se identifican con números correlativos del 1 al 60,
quedando sin información aquellos que no participan de la presente carrera. Cuando ya no hay más tiempos de
clasificación para cargar, se ingresa un auto con número negativo. Se solicita determinar: a. El número de auto que
clasificó en primer lugar. b. El número de auto que obtuvo el peor tiempo de clasificación. c. La cantidad de autos que
superaron el promedio de tiempo de clasificación. d. El o los números de autos que no participan de la carrera actual.*/

#include <stdio.h>
#include <stdlib.h>

int esDatoVal(int, int);
int IngrDatoVal(int, int);
int CargaVecDir(float[], int);
int PosMinimoVec(float[], int);
int PosMaximoVec(float[], int);
float SumaVec(float[], int);
int ContarDistintoA(float[], int, int);
int ContarMayorA(float[], int, float);
void MostrarPosIgualA(float[], int, int);

int main()
{
    int veh, hay_veh, veh_max, veh_min, cont_auto = 0;
    float VClasif[60] = {0}, suma, prom_T;

    printf("\nIngrese los tiempos de los autos de la clasificacion de la carrera\n\n");
    hay_veh = CargaVecDir(VClasif, 60);

    if (hay_veh)
    {
        veh_min = PosMinimoVec(VClasif, 60);
        printf("\nEl auto que clasifico en primer lugar es: %d", veh_min + 1); // punto a
        veh_max = PosMaximoVec(VClasif, 60);
        printf("\nEl auto que obtuvo el peor tiempo de clasificacion es: %d", veh_max + 1); // punto b
        suma = SumaVec(VClasif, 60);
        cont_auto = ContarDistintoA(VClasif, 60, 0);
        prom_T = suma / cont_auto;
        printf("\nLa cantidad de autos que superaron el tiempo promedio %.2f son: %d", prom_T,
               ContarMayorA(VClasif, 60, prom_T)); // punto c
        printf("\nLos autos que no participaron en la prueba de clasificacion son: \n");
        MostrarPosIgualA(VClasif, 60, 0); // punto d
    }

    else
        printf("\nNo se registraron tiempos de clasificacion en la prueba");

    printf("\n\n\n");
    system("pause");
    return 0;
}
//////////////////////////////////////////////////////////////////////////////
int CargaVecDir(float V[], int ce)
{
    int veh, band = 0;
    float tiempo;

    printf("\nIngrese el auto - Numero negativo para terminar\t\t");
    veh = IngrDatoVal(ce, 0);
    while (veh > 0)
    {
        printf("\nIngrese el tiempo del auto %d\t\t", veh);
        do
        {
            scanf("%f", &tiempo);
            if (tiempo < 0)
                printf("\n***Valor incorrecto.  Vuelva a ingresar\n");
        } while (tiempo < 0);

        V[veh - 1] = tiempo;
        band = 1;

        printf("\nIngrese el auto - Numero negativo para terminar\t\t");
        veh = IngrDatoVal(1, ce);
    }

    return band;
}
///////////////////////////////////////////////////////////////////////////////
int IngrDatoVal(int ls, int x)
{
    int dato;

    do
    {
        scanf("%d", &dato);
        if (dato == x || dato > 60)
            printf("\n***Valor incorrecto.  Vuelva a ingresar***\n");
    } while (dato == x || dato > 60);
    return dato;
}
/////////////////////////////////////////////////////////////////////////////////
int PosMinimoVec(float V[], int ce)
{
    int i, p, band = 0;
    float min;

    for (i = 0; i < ce; i++)
        if (V[i] != 0)
            if (band == 0 || V[i] < min)
            {
                min = V[i];
                p = i;
                band = 1;
            }

    return p;
}
/////////////////////////////////////////////////////////////////////////////////
int PosMaximoVec(float V[], int ce)
{
    int i, p;
    float max;

    for (i = 0; i < ce; i++)
        if (i == 0 || V[i] > max)
        {
            max = V[i];
            p = i;
        }

    return p;
}
////////////////////////////////////////////////////////////////////////////////
float SumaVec(float V[], int ce)
{
    int i;
    float s = 0;

    for (i = 0; i < ce; i++)
        s += V[i];

    return s;
}
/////////////////////////////////////////////////////////////////////////////////
int ContarDistintoA(float V[], int ce, int dato)
{
    int i, c = 0;

    for (i = 0; i < ce; i++)
        if (V[i] != dato)
            c++;

    return c;
}
//////////////////////////////////////////////////////////////////////////////////
int ContarMayorA(float V[], int ce, float dato)
{
    int i, c = 0;

    for (i = 0; i < ce; i++)
        if (V[i] > dato)
            c++;

    return c;
}
//////////////////////////////////////////////////////////////////////////////////
void MostrarPosIgualA(float V[], int ce, int dato)
{
    int i;

    for (i = 0; i < ce; i++)
        if (V[i] == dato)
            printf("\n%d", i + 1);
}
