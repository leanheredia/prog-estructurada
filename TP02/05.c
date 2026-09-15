/*
Crear una función que cargue un vector de 30 elementos con la letra “x"
y coloque en una ubicación aleatoria una “A” y en otra ubicación aleatoria que no sea la misma que tiene la letra “A” una letra “B”.

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

    vector[posB] = 'B';
}

int main() {
    srand(time(NULL));
    char vector[N];
    cargarvector(vector);
    for (int i=0;i<N;i++) {
        printf("%c", vector[i]);
    }
   return 0;
}
