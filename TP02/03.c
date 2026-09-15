/*
Hacer una función que reciba dos vectores A y B de números enteros de n cantidad de elementos, siendo n un número par, y retorne la suma de los elementos que ocupan las posiciones pares del primero con los elementos que ocupan las impares del segundo.  Recuerde que en C las posiciones en los arreglos se numeran desde el cero, y que el cero es un número par.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 4

int sumaelementos(int a[], int b[]) {
    int resultado = 0;
    for (int i = 0; i<N; i+=2) {
        for (int j = 1; j<N;j+=2) {
            resultado += a[i] + b[j];
        }
    }
    return resultado;

}

int main() {
    int a[N] = {13,2,1,6};
    int b[N] = {5,7,3,9};
    printf("%d", sumaelementos(a,b));
    return 0;
}
