/*
Crear una función con cuatro parámetros (v, N, menor, mayor) que cargue un vector v de longitud N con números enteros aleatorios comprendidos entre menor y mayor.  
*/

#include <stdio.h>
#include <stdlib.h>

void funcion(int v[], int N, int menor, int mayor) {
    for (int i = 0;i<N;i++) {
        v[i] = menor + (rand()%(mayor - menor + 1));
        printf("%d\n",v[i]);
    }
}

int main() {
    const int N = 10;
    int v[N];
    int menor = 1;
    int mayor = 100;
    funcion(v,N, menor, mayor);
    return 0;

}