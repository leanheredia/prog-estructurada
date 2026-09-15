/*
Dados dos vectores A y B de igual cantidad de elementos cargados con la función del punto 1, obtener el producto escalar: Σ A(i) * B(i). 

*/
#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[] , int N, int menor, int mayor) {
    for (int i = 0;i<N;i++) {
        vector[i] = menor + (rand()%(mayor - menor + 1));
    }
    
}

int productoescalar(int a[], int b[], int N) {
    int resultado = 0;
    for (int i = 0;i<N;i++) {
        resultado = resultado + a[i] * b[i];
    }
    return resultado;
}

int main() {
    const int N = 10;
    int a[N];
    int b[N];
    int menor = 1;
    int mayor = 100;
    cargar(a,N, menor, mayor);
    cargar(b,N, menor, mayor);
    printf("%d", productoescalar(a,b,N));
    return 0;
}