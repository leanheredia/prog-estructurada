//Escribir una función que procese las notas de los dos parciales de un alumno inscriptos en Programación Estructurada. La función recibe las dos notas del alumno y calcula el promedio de las notas.. La función debe retornar un entero que identifique la condición del alumno: 1 = PROMOVIDO; 2 = REGULAR; 3 = LIBRE.
// Las reglas para saber la situación de un alumno son las siguientes:
//Para ser promovido (es decir, cursada aprobada y no requiere rendir ﬁnal), el alumno debe haber aprobado ambos parciales y tener un promedio mayor o igual a 7.
//Para estar regular (cursada aprobada, pero debe rendir ﬁnal), el alumno debe haber aprobado ambos parciales (nota mayor o igual a 4).
//Si el alumno no ha aprobado ambos parciales (es decir, tiene nota menor que 4 en alguno de ellos), entonces queda en condición de libre (es decir, puede rendir un ﬁnal extendido o recursar).

#include <stdio.h>


int promedio(int nota1, int nota2) {
    int prom = (nota1 + nota2) / 2;
    return prom;
}


int procesar_notas(int nota1, int nota2, int prom) {
    if ((nota1 >= 4 && nota2 >= 4) && prom >= 7) {
        return 1;
    }
    else if (nota1 >= 4 && nota2 >= 4) {
        return 2;
    }
    else {
        return 3;
    }
}

int main(void) {
    int nota1 = 10;
    int nota2 = 5;
    int prom = promedio(nota1, nota2);
    int resultado = procesar_notas(nota1, nota2, prom);
    printf("Condicion: %d", resultado);
    return 0;
}