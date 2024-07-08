/* Confeccionar un programa que permita ingresar un carácter alfanumérico
 * y determine e informe si lo ingresado corresponde a una vocal,
 * con el mensaje “VOCAL” y su correspondiente valor numérico en ASCII.
 *
 */

#include <ctype.h>
#include <stdio.h>

int main()
{
    char alf, car;
    // a=85 e=101 i=105 o=1111 u=117, A=65, E=69, I=73, O=79, U=85;

    printf("Ingrese un caracter alfanumerico: ");
    scanf("%c", &car);
    alf = tolower(car);
    if (alf == 'a' || alf == 'e' || alf == 'i' || alf == 'o' || alf == 'u')
    {
        printf("VOCAL\n");
        printf("El codigo ASCII de la vocal ingresada es: %d\n", car);
    }
    else
    {
        printf("El caracter ingresado no es una vocal\n");
    }

    return 0;
}
