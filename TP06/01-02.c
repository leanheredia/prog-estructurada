/*Generar un registro para la ficha de un alumno de la universidad con los siguientes campos e imprimir los resultados:
Número de legajo
Nota promedio
Año de ingreso


Ejemplo
Número de legajo: 4845
Año de ingreso: 2020
Nota promedio: 7.34

*/

#include <stdio.h>

struct ficha {
    int legajo;
    float nota_promedio;
    int año_ingreso;
};

void imprimir(struct ficha alum) {
    printf("\n Legajo: %d", alum.legajo);
    printf("\n Nota promedio: %.2f", alum.nota_promedio);
    printf("\n Anio ingreso: %d\n", alum.año_ingreso);
}

int años_pasaron(struct ficha alum) {
    int res = (2026 - alum.año_ingreso);
    return res;
}



int main() {
    struct ficha alum = {
        .legajo = 4845,
        .nota_promedio = 6.7,
        .año_ingreso = 2020
    };
    imprimir(alum);
    int resultado = años_pasaron(alum);
    printf("\nAnios que pasaron desde que ingreso: %d\n", resultado);
    return 0;
}