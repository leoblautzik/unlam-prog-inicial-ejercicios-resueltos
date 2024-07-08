/*
 * Confeccionar un programa que solicite e ingrese 3 valores reales positivos,
 * mayores que cero y determine e informe si forman o no triángulo.
 * Para ello utilizar el teorema de la desigualdad del triángulo que establece
 * que la suma de las longitudes de cualesquiera de dos lados de un triángulo
 * es mayor que la longitud del tercer lado.
 * En caso de ser triángulo, determinar si es equiláero, isósceles, o escaleno.
 **/

#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Ingrese el primer lado: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo lado: ");
    scanf("%d", &n2);
    printf("Ingrese el tercer lado: ");
    scanf("%d", &n3);
    if ((n1 + n2) > n3 && (n1 + n3) > n2 && (n2 + n3) > n1)
    {
        printf("Los valores ingresados forman triángulo ");
        if (n1 != n2 && n1 != n3 && n2 != n3)
        {
            printf("Escaleno");
        }
        else if (n1 == n2 && n2 == n3)
        {
            printf("Equilátero");
        }
        else
        {
            printf("Isósceles");
        }
    }
    else
    {
        printf("Los valores ingresados NO forman triángulo");
    }
    printf("\n");

    return 0;
}
