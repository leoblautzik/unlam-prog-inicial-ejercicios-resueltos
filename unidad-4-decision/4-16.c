#include <stdio.h>


int main()
{
    int codigo, cantidad;
    float importe;
    printf("Ingrese el codigo del articulo: ");
    scanf("%d", &codigo);
    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);
    
    switch (codigo)
    {
        case 1:
        case 10:
        case 100: importe = cantidad * 10;
                  break;
        case 2:
        case 22:
        case 222: importe = (int)(cantidad / 10) * 65.00 + (cantidad % 10) * 7.00;
                  importe *= 0.9;
                  break;
        case 3: 
        case 33: importe = cantidad * 3;
                 if(cantidad > 10)
                 {
                     importe = importe * 0.9;
                 }
                 break;
        case 4:
        case 44: importe = cantidad;

    }

    printf("Producto: %d - Cantidad: %d - Importe: %4.2f\n", codigo, cantidad, importe);
    return 0; 

}

