/*Realizar una función que determine si dos vectores cargados con números naturales, de igual cantidad de elementos, son idénticos. */

#include <stdio.h>
#define N 4

void identicos(int v1[], int v2[]) {
    int son_iguales = 1;
    for (int i = 0; i<N; i++) {
        if (v1[i] != v2[i]) {
            son_iguales = 0;
        }       
    }
    if (son_iguales == 1) {
        printf("Son iguales.");
    }else {
        printf("Son distintos.");
    }
}

int main() {
    int v1[N] = {2,3,4,5};
    int v2[N] = {2,3,4,5};
    identicos(v1, v2);

    return 0;
}
