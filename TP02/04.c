/*
Dado un arreglo de N elementos, escribir un programa que permita desplazar los elementos del arreglo una posición a la derecha, de tal forma que el primero pase a la segunda posición, el segundo a la tercera y así sucesivamente.
*/


/*
    vector[5] = {1,2,3,4}
    ejecuto la funcion
    
*/

#include <stdio.h>
#define N 5


int main() {
    int v[N] = {10,20,30,40,50};
    int aux;

    aux = v[N - 1];
    for (int i=N-1;i>0;i--) {
        v[i] = v[i-1];
    } 
    v[0] = aux;

    for (int i=0;i<N;i++) {
        printf("%d \n", v[i]);
    }
    return 0;
}