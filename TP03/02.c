/*
Escribir una función que reciba un arreglo ordenado y un elemento x. Si el elemento x se encuentra en el arreglo, debe encontrar su posición mediante búsqueda binaria y devolver la posición. Si no se encuentra, debe agregar x al vector en la posición correcta y devolver esa nueva posición.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 15


int busquedabinaria(int vector[], int x) {
    int inferior = 0;
    int superior = N - 1;
    int centro;

    while (inferior <= superior) {
        centro = (inferior + superior) / 2;
        if (vector[centro] == x) {
            return centro;
        }else if (x < vector[centro]) {
            superior = centro - 1;
        }else {
            inferior = centro + 1;
        }
    }

    // 2. SI LLEGA ACÁ, NO LO ENCONTRÓ
    // 'inferior' es el lugar donde debería ir 'x'
    int pos_insertar = inferior;

    // Desplazamos todos los elementos un lugar hacia la derecha
    for (int i = N; i > pos_insertar; i--) {
        vector[i] = vector[i - 1];
    }

    // Guardamos x en la posición despejada
    vector[pos_insertar] = x;

    return pos_insertar; // Devolvemos la posición donde fue insertado
}




int main() {
    int vector[N] = {2,3,5,7,10,13,20,29,56,67};
    int x = 4;
    int a = busquedabinaria(vector, x);
    printf("El elemento quedo en la posicion: %d\n", a);

    // Como insertamos un elemento nuevo, ahora tenemos 10 elementos (n + 1)
    printf("Vector actualizado: ");
    for (int i = 0; i < N + 1; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}