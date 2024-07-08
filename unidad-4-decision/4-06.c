#include <stdio.h>

int main(){

    int a, b, c, d, orden, min;

    printf("Ingrese un valor entero: ");
    scanf("%d", &a);

    min = a;
    orden = 1;

    printf("Ingrese otro entero: ");
    scanf("%d", &b);

    if(b < min){
        min = b;
        orden = 2;
    }

    printf("Ingrese uno mas: ");
    scanf("%d", &c);
    if(c < min){
        min = c;
        orden = 3;
    }

    printf("Ingrese uno mas, el último: ");
    scanf("%d", &d);
    if(d < min){
        min = d;
        orden = 4;
    }

    printf("Los numeros ingresados son: %d, %d, %d, %d\n",a,b,c,d);
    printf("El minimo es: %d y fue el %d° en salir\n", min,orden);   

}
