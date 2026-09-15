/*
Realizar un programa que permita, a través de una función ordenar un arreglo de 20 elementos. Esta función recibirá dos parámetros : el primero indicará arreglo a ordenar, y el segundo indicará si el orden será “A” - Ascendente (de menor a mayor) o “D” Descendente (de mayor a menor)

*/

#include <stdio.h>
#include <stdlib.h>

int ordenar(int vector[], char orden) {
    switch (orden) {
        case 'A':
            for (int i=0;i< 5 - 1;i++) {
                for (int j=0;j<5 - 1;j++) {
                    if (vector[j] > vector[j + 1]) {
                        int almacen = vector[j];
                        vector[j] = vector[j + 1];
                        vector[j + 1] = almacen;
                    }
                    }                
                }
            break;
        case 'D':
            for (int i=0;i< 5 - 1;i++) {
                for (int j=0;j<5 - 1;j++) {
                    if (vector[j] < vector[j + 1]) {
                        int almacen = vector[j];
                        vector[j] = vector[j + 1];
                        vector[j + 1] = almacen;
                    }
                    }
                }
            break;
}
}



int main() {
    int vector[5] = {5,7,3,9,2};
    char orden = 'D';
    printf("Vector normal: \n");
    for (int i=0;i<5;i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
    ordenar(vector, orden);
    printf("Vector ordenado: \n");
    for (int i=0;i<5;i++) {
        printf("%d ", vector[i]);
    }
    return 0;

}