/**  Una empresa textil desea realizar un informe sobre los sueldos de cada
 * sección para lo cual dispone de los siguientes datos de cada empleado:
 * Legajo: entero, mayor a cero)
 * Sección: (carácter, desde A hasta H)
 * Sueldo: (real, mayor a cero)
 * El fin de datos es cuando aparece un legajo igual a cero.
 * Se pide:
 * a. Emitir un informe que indique por sección, el total de sueldos de la
 * misma.
 *
 * SECCIÓN    TOTAL DE SUELDOS POR SECCIÓN
 * A          xxxxx.xx
 * B          xxxxx.xx
 *
 *   TOTAL SUELDOS    xxxxxx.xx
 *
 * b. El legajo del empleado con mayor sueldo consignando legajo, sección y
 * sueldo. c. El promedio de sueldo por empleado.
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int IngrEnteroMayorA(int);
char IngrCharVal(char, char);
float IngrRealMayorA(float);
int BusquedaSec(char[], int, char);
void MostrarVecParal(char[], float[], int);
float SumaVec(float[], int);

int main()
{
    int cont_empl = 0, legajo, pos, max_leg;
    char vSeccion[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}, seccion,
         max_sec;
    float vImpXSec[8] = {0}, sueldo, max;
    bool primero = true;

    printf("\nIngresar los datos de empleados por seccion - empleado igual a "
           "cero para terminar\n");
    printf("\nIngrese el legajo del empleado %d \t", cont_empl + 1);
    legajo = IngrEnteroMayorA(-1);
    while (legajo != 0)
    {
        printf("\nIngrese la seccion del empleado con legajo %d \t", legajo);
        seccion = IngrCharVal('A', 'H');
        printf("nIngrese el sueldo del empleado: \t");
        sueldo = IngrRealMayorA(0);
        pos = BusquedaSec(vSeccion, 8, seccion);
        if (pos != -1)
        {
            vImpXSec[pos] += sueldo;
            cont_empl++;
            if (primero || sueldo > max)
            {
                max = sueldo;
                max_leg = legajo;
                max_sec = seccion;
                primero = false;
            }
        }
        else
            printf("\nLa sección ingresada NO existe...\n");

        printf("\nIngrese el legajo del empleado %d \t", cont_empl + 1);
        legajo = IngrEnteroMayorA(-1);
    }
    if (cont_empl > 0)
    {
        printf("\nSECCION\t\tSUELDO POR SECCION\n");
        MostrarVecParal(vSeccion, vImpXSec, 8); // Punto a
        printf("\nTOTAL SUELDOS: %.2f", SumaVec(vImpXSec, 8));

        printf("\nMaximo Sueldo: %.2f\tLegajo: %d\tSeccion: %c\n", max, max_leg,
               max_sec); // Punto b

        printf("\nEl promedio de sueldos pagasdo por empleado es $ %.2f",
               SumaVec(vImpXSec, 8) / cont_empl); // Punto c
    }
    else
        printf("\nNo se ingresaron empleados...");

    printf("\n\n\n");
    system("pause");

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
int IngrEnteroMayorA(int lim)
{
    int dato;

    scanf("%d", &dato);
    while (dato <= lim)
    {
        printf("\nERROR - El dato ingresado debe ser mayor a %d - Vuelva a "
               "ingresar: \t",
               lim);
        scanf("%d", &dato);
    }
    return dato;
}
/////////////////////////////////////////////////////////////////////////////
char IngrCharVal(char linf, char lsup)
{
    char dato;
    bool sen = true;

    do
    {
        if (sen)
        {
            fflush(stdin); // getchar()
            scanf("%c", &dato);
            dato = toupper(dato);
            sen = false;
        }
        else
        {
            printf("\ERROR - El dato tiene que estar entre %c y %c.  Vuelva a "
                   "ingresar: \t",
                   linf, lsup);
            fflush(stdin); // getchar()
            scanf("%c", &dato);
            dato = toupper(dato);
        }
    } while (dato < linf || dato > lsup);

    return dato;
}
/////////////////////////////////////////////////////////////////////////////
float IngrRealMayorA(float lim)
{
    float dato;

    scanf("%f", &dato);
    while (dato <= 0)
    {
        printf("\nERROR - El ingreso debe ser mayor a %f \t", lim);
        scanf("%f", &dato);
    }
    return dato;
}
////////////////////////////////////////////////////////////////////////////
int BusquedaSec(char V[], int ce, char dato)
{
    int i = 0;

    while (i < ce && V[i] != dato)
        i++;

    if (i == ce)
        return -1;
    else
        return i;
}
////////////////////////////////////////////////////////////////////////////
void MostrarVecParal(char Vec1[], float Vec2[], int ce)
{
    int i;

    for (i = 0; i < ce; i++)
        printf("\n%c\t\t%.2f", Vec1[i], Vec2[i]);
}
/////////////////////////////////////////////////////////////////////////////
float SumaVec(float V[], int ce)
{
    int i;
    float s = 0;

    for (i = 0; i < ce; i++)
        s += V[i];

    return s;
}

int leer_y_validar_seccion()
{
    int a = (int)'A';
    char seccion;
    printf("Ingrese la seccion: de A a H  ");
    getchar();
    scanf("%c", &seccion);
    while ((int)seccion < (int)'A' || (int)seccion > (int)'H')
    {
        printf("Seccion incorrecta, intente nuevamente");
        printf("Ingrese la seccion: de A a H  ");
        getchar();
        scanf("%c", &seccion);
    }
    return seccion;
}

void ordenarVecParal(char Vec1[], float Vec2[], int ce)
{
    int i, pmin, aux;

    for (i = 0; i < ce - 1; i++)
    {
        pmin = PosicionMinimo(V, i, ce);
        if (pmin != i)
        {
            aux = V[i];
            V[i] = V[pmin];
            V[pmin] = aux;
        }
    }
}
int PosicionMinimo(int V[], int ini, int tam)
{
    int i, pmin;

    pmin = i for (i = ini + 1; i < tam; i++) if (V[i] < V[pmin]) pmin = i;

    return pmin;
}
