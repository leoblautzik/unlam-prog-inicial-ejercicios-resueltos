/*
 * Dados tres números determinar e informar con un mensaje
 * si el primer número ingresado es menor que los otros dos.
 *
 * */
#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Ingrese el primer número: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &n2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3)
    {
        printf("El primer número es menor que los otros dos");
    }
    else
    {
        printf("El primer número NO es menor que los otros dos");
    }
    printf("\n");

    return 0;
}
