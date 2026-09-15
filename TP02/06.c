/*
Realizar una función que devuelva distancia entre las posiciones de la letra “A” y la letra “B” del vector cargado en el ejercicio anterior

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30

void cargarvector(char vector[]) {
     for (int i=0; i<N;i++) {
            vector[i] = 'x';
    }
    int posA = rand()%N;
    vector[posA] = 'a';

    int posB;
    do {
        posB = rand() % N;
    }while (posB == posA);

    vector[posB] = 'b';
}

int distancia(char vector[]) {
    int indA;
    int indB;
    for (int i=0;i<N;i++) {    
        if (vector[i] == 'a') {
            indA = i;
        }
        else if (vector[i] == 'b') {
            indB = i;
        }
    }

    int calculo;
    if (indA > indB) {
        calculo = indA - indB;
    }else {
        calculo = indB - indA;
    }

    return calculo;
}

int main() {
    srand(time(NULL));
    char vector[N];
    cargarvector(vector);
    int resultado = distancia(vector);
    for (int i=0;i<N;i++) {
        printf("%c ", vector[i]);
    }

    printf("\nDistancia entre a y b: %d posiciones.\n", resultado);
    return 0;
}
