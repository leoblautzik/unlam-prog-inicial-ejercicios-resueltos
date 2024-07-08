#include<stdio.h>

int main(){

    float importe, descuento ;
    printf("Ingrese el importe: ");
    scanf("%f", &importe);

    if(importe < 55)
    {
        descuento = importe * 4.5 / 100;
    }
    else     
        if(importe <= 100)
        {
            descuento = importe * 8 / 100;
        }
        else
        { 
            descuento = importe * 10.5 / 100;
        }

    printf("Importe: %6.2f \nDescuento: %6.2f \nImporte a abonar: %6.2f \n", importe, descuento, importe-descuento);

    return 0;
}
