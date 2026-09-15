/*
Realizar un programa que permita, a través de una función actualizar un arreglo ordenado. Esta función recibe cuatro parámetros: el arreglo a actualizar, la cantidad de elementos, la acción a realizar que puede ser I, B o A y  un valor entero. Si la acción es I deberá ingresar un nuevo valor en la posición que indique valor. Si es B deberá encontrar el valor dentro del arreglo y borrarlo (si no lo encuentra devolver mensaje de error) y si es A deberá agregar el valor en la última posición.



1. Funcion que reciba cuatro paramestros: un vector para actualizar, cantidad de elementos, una accion a realizar, un entero.


2. Si accion es = I: 
    Ingresar un nuevo valor en la posición que indique valor.
   Si acción es = B:
    Encontrar el valor dentro del vector y borrarlo (si no existe devolver mensaje de error)
   Si acción es = A:
    Agregar el valor en la ultima posición.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 6

int actualizar(int vector[], int canti, int accion, int valor) {
    switch (accion) {
        case 'I':
            for (int i=canti; i > valor;i--) {
                vector[i] = vector[i - 1];
            }
            vector[valor] = valor;
            
    }
}


int main() {
    int canti = 6;
    int vector[canti] = {5,7,9,11,19,24};
    int accion = 'B';
    int valor = 2;
    return 0;
}

