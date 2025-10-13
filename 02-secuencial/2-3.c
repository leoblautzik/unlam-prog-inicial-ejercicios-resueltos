#include <stdio.h>

/*Confeccionar un programa que pueda ingresar 2 números enteros 
* y calcule e informe con mensajes aclaratorios la suma, 
* el producto, el cociente y el resto.
*/

int main(){
    int entero1, entero2;
    printf("Ingrese un número entero: ");
    scanf("%d", &entero1);
    printf("Ingrese otro número entero: ");
    scanf("%d", &entero2);
    printf("La suma de los numeros ingresados es: %d", entero1 + entero2);
    printf("\nEl producto de los numeros ingresados es: %d", entero1 * entero2);
    printf("\nEl cociente de los numeros ingresados es: %d", entero1 / entero2);
    printf("\nEl resto de divir ambos numeros ingresados es: %d\n", entero1 % entero2);

}
