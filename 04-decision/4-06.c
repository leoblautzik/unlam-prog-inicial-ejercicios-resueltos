/* 4.6 2025
 * Confeccionar un programa que permita ingresar un carácter alfanumérico
 * y determine e informe si lo ingresado corresponde a una vocal,
 * con el mensaje “VOCAL” y su correspondiente valor numérico en ASCII.
 *
 */

#include <ctype.h>
#include <stdio.h>

int main()
{
    char car, car_original;
    // a=97 e=101 i=105 o=1111 u=117, A=65, E=69, I=73, O=79, U=85;
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    getchar();
    // fflush(stdin);
    printf("Ingrese un caracter alfanumerico: ");
    scanf("%c", &car);
    car_original = car;
    car = tolower(car);
    if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u')
    {
        printf("VOCAL\n");
        printf("El codigo ASCII de la vocal ingresada es: %d\n", car_original);
    }
    else
    {
        printf("El caracter ingresado no es una vocal\n");
    }

    return 0;
}
