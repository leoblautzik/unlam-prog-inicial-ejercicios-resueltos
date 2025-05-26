#include <stdio.h>
int leer_y_validar(int, int, int);
void mostrar_vector(int[], int);
int alumnos_por_encima_del_promedio(int[], float, int);
void alumnos_por_debajo_del_promedio(int[], int[], float, int);

int main() {

  int edades[100], cant_alumnos = 0, edad, suma_edades = 0, alumnos_May_prom;
  int dnis[100], dni;
  float promedio;
  printf("Ingrese un dni: ");
  dni = leer_y_validar(0, 50, 500);
  while (dni != 0 && cant_alumnos < 100) {
    printf("Ingrese una edad: ");
    edad = leer_y_validar(0, 15, 100);
    dnis[cant_alumnos] = dni;
    edades[cant_alumnos] = edad;
    suma_edades += edad;
    cant_alumnos++;
    printf("Ingrese una dni: ");
    dni = leer_y_validar(0, 50, 500);
  }

  mostrar_vector(edades, cant_alumnos);

  if (cant_alumnos > 0) {
    promedio = 1.0 * suma_edades / cant_alumnos;

    printf("\nPromedio de edades %.2f", promedio);
    alumnos_May_prom =
        alumnos_por_encima_del_promedio(edades, promedio, cant_alumnos);
    printf("\nAlumnos por encima del Promedio: %d", alumnos_May_prom);
    printf("\nDni de los alumnos por debajo de la edad prom: \n");
    alumnos_por_debajo_del_promedio(edades, dnis, promedio, cant_alumnos);
  }
  return 0;
}

int leer_y_validar(int salir, int desde, int hasta) {
  int aux;
  scanf("%d", &aux);
  while (aux != 0 && (aux < desde || aux > hasta)) {
    printf("Valor incorrecto: ");
    scanf("%d", &aux);
  }

  return aux;
}
void mostrar_vector(int v[], int tam) {
  int i;
  for (i = 0; i < tam; i++)
    printf("%d ", v[i]);
  printf("\n");
}
int alumnos_por_encima_del_promedio(int v[], float promedio, int tam) {
  int i, contador = 0;
  for (i = 0; i < tam; i++) {
    if (v[i] > promedio)
      contador++;
  }
  return contador;
}
void alumnos_por_debajo_del_promedio(int v[], int w[], float promedio,
                                     int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    if (v[i] <= promedio)
      printf("%d - ", w[i]);
  }
}
