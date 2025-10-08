/* Se ingresan números enteros comprendidos entre 100 y 2000. Determinar:
a.Cantidad de números ingresados entre 100 y 500
b.Cantidad de números pares ingresados entre 500 y 1200
c.Promedio de números ingresados entre 1200 y 2000
El ingreso de datos finaliza cuando se ingresa un número igual a 99. Para
realizar este programa se deben realizar las siguientes funciones:
• estaDentroDelRango: Recibe 3 enteros correspondientes a un número a validar y los
límites superior e inferior del rango. La función debe retornar un 1 (verdadero) si el número
a validar se encuentra dentro del rango indicado o un 0 (falso) si no lo está.
• LeerYValidar: Recibe los límites superior e inferior de un rango y retorna un número que
se encuentre dentro del mismo. El ingreso de datos se realiza dentro de la función. Para
validar el rango utilizar la función EstaDentroDelRango analizada en el punto anterior
*/
#include <stdbool.h>
#include <stdio.h>
bool estaDentroDelRango(int, int, int);
int leerYValidar(int, int);
bool esPar(int);

int main()
{
    int n, c_100_500 = 0, c_p_500_1200 = 0, c_1200_2000 = 0, t_1200_2000 = 0;

    // printf("Ingrese valores entre 100 y 2000 (99 para terminar)");

    while ((n = leerYValidar(99, 2000)) != 99)
    {
        if (estaDentroDelRango(n, 100, 500))
            c_100_500++;

        if (estaDentroDelRango(n, 500, 1200) && esPar(n))
            c_p_500_1200++;

        if (estaDentroDelRango(n, 1200, 2000))
        {
            c_1200_2000++;
            t_1200_2000 += n;
        }
    }

    printf("\nCantidad de valores entre 100 y 500: %d", c_100_500);
    printf("\nCantidad de valores pares entre 500 y 1200: %d", c_p_500_1200);
    if (c_1200_2000 > 0)
    {
        printf("\nPromedio de los valores entre 1200 y 2000:  %.2f", (float)t_1200_2000 / c_1200_2000);
    }

    return 0;
}

bool esPar(int n)
{
    return n % 2 == 0;
}

bool estaDentroDelRango(int n, int a, int b)
{
    return n >= a && n < b;
}

int leerYValidar(int a, int b)
{
    int n;
    printf("Ingrese un entero entre %d y %d:  ", a, b);
    scanf("%d", &n);
    while (!estaDentroDelRango(n, a, b + 1))
    {
        printf("Fuera de rango. Ingrese un entero entre %d y %d: ", a, b);
        scanf("%d", &n);
    }
    return n;
}
