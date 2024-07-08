#include<stdio.h>
#define DESCUENTO_1 0.045
#define DESCUENTO_2 0.080
#define DESCUENTO_3 0.105

/*La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente
escala:
a. menor de $55 el descuento es del 4.5%
b. entre $55 y $100 el descuento es del 8%
c. más de $100 el descuento es del 10.5%
Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con
mensajes aclaratorios.
*/

int main(){

    float importe, descuento, neto;
    printf("Ingrese el importe: ");
    scanf("%f", &importe);

    if(importe < 55){
        descuento = importe * DESCUENTO_1;
    }
    else     
        if(importe <= 100){
            descuento = importe * DESCUENTO_2;
        }
        else
        { 
            descuento = importe * DESCUENTO_3;
        }

    neto = importe - descuento;
    printf("Importe: %6.2f \nDescuento: %6.2f \nImporte a abonar: %6.2f \n", importe, importe*DESCUENTO_1, importe*(1-DESCUENTO_1));

    return 0;
}
