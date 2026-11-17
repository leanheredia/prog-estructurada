/*
Escribir un programa en C que declare un vector de N elementos enteros (por ejemplo, N=50). El programa debe contener funciones para realizar lo siguiente:
1. Cargar el vector automáticamente con números enteros aleatorios de 3 cifras (entre 100 y 999 inclusive).
2. Calcular y retornar el promedio general de todos los valores almacenados en el vector.
3. Encontrar el menor valor almacenado en el vector e informar cuántas veces se repite dicho valor.
4. Determinar e informar cuál es el número que aparece con mayor frecuencia en el vector (la moda).
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cargar_vector(int vector[5]) {
    for (int i = 0;i<5;i++) {
        vector[i] = 100 + rand()%900;
    }
}

int promedio(int vector[5]) {
   int acumulador = 0;
   int res = 0;
   for (int i = 0;i<5;i++) {
        acumulador += vector[i];
   } 
   res = acumulador / 5;
   return res;
}

void menor_valor(int v[5]) {
    int contador = 0;
    int menor = v[0];
    for (int i = 0;i<5;i++) {
        if (v[i] < menor) {
            menor = v[i];
            contador ++;
        }
     }
    printf("El menor valor es %d se repite %d veces\n", menor, contador);
}


void numero_mayor_frec(int v[5]) {

    int pos = 0;
    int max_veces = 0;
    for (int i = 0;i<5;i++) {
        int cuantas_veces = 0;
        for (int j = 0;j<5;j++){
            if (v[i] == v[j]) {
                cuantas_veces++;
            }
        }   
        if (cuantas_veces > max_veces) {
            max_veces = cuantas_veces;
            pos = v[i];    
        }
    }
    printf("El numero que mas se repite es %d, repitiendose %d veces\n", pos, max_veces);
}




int main() {
    srand(time(NULL));
    int vector[5];
    cargar_vector(vector);
    for (int i =0;i<5;i++) {
        printf("%d\n", vector[i]);
    }
    int res = promedio(vector);
    printf("El promedio es: %d\n", res);
    menor_valor(vector);
    numero_mayor_frec(vector);
}


