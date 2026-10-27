/*
Generar un vector de registros del punto 1 para 20 alumnos, ingresando por teclado los datos e imprimiendo luego en pantalla.

*/

#include <stdio.h>

struct ficha {
    int legajo;
    float nota;
    int año;
};


void imprimir(struct ficha alum[20]) {
    for (int i = 0;i<20;i++) {
        printf("Alumno %d:\n", i + 1);
        printf("\n Nota promedio: %.2f", alum[i].nota);
        printf("\n Legajo: %d", alum[i].legajo);
        printf("\n Anio ingreso: %d\n", alum[i].año);
    }
}


int main() {
    struct ficha alumno[20] = {0};

    for (int i = 0;i<20;i++) {
        printf("Ingresa el legajo del alumno %d: \n", i + 1);
        scanf("%d", &alumno[i].legajo);
        
        printf("Ingresa la nota promedio del alumno %d: \n", i + 1);
        scanf("%f", &alumno[i].nota);

        printf("Ingresa el año de ingreso del alumno %d: \n", i + 1);
        scanf("%d", &alumno[i].año);
    }
    imprimir(alumno);
    return 0;
}