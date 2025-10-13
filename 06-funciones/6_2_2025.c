#include <stdbool.h>
#include <stdio.h>

/*Se ingresa valores positivos entre 1 y 50, finalizando el ingreso con el valor -10. Calcular:
a.Porcentaje de números son primos.
b.Cantidad de números pares.
c.Promedio de los números impares.
Utilizar las siguientes funciones:
• IngrDatoValCF: Recibe tres parámetros que son el rango y la condición de fin, que es un
número que no pertenece al rango válido. El ingreso se hace dentro de la función y se retorna
el dato ingresado y validado.
• CalculaResto: Recibe por parámetro el Dividendo y el Divisor, retorna el resto de la división.
• esPar: Recibe por parámetro un número, retorna 1 (verdadero) si es Par, 0 (falso) si es Impar.
Invoca a la función CalculaResto.
• esPrimo: Recibe por parámetro un número, retorna 1 (verdadero) si es primo, 0 (falso)
si no es primo. Invoca a la función CalculaResto. (un número es primo si sólo es divisible
por 1 y por sí mismo).
• Promedio: Recibe por parámetro una variable acumuladora y una variable contadora.
Retorna el promedio si contador es mayor a 0 sino Retorna 0. Se debe preguntar después
del retorno el valor del promedio.*/

bool es_primo(int);
int ing_dato_valido_cf(int, int, int);
int resto(int, int);
bool es_par(int);
float promedio(int, int);

int main()
{
    printf("%d", ing_dato_valido_cf(1, 50, -10));

    return 0;
}

int ing_dato_valido_cf(int desde, int hasta, int cf)
{
    bool flag = false;
    int num;
    printf("Ingrese un entero entre %d y %d %d para salir ", desde, hasta, cf);
    scanf("%d", &num);
    while ((num < desde || num > hasta) && num != cf)
    {
        printf("\nError -> Ingrese un entero entre %d y %d %d para salir: ", desde, hasta, cf);
        scanf("%d", &num);
    }

    return num;
}
