/*
Escribir una función que reciba un arreglo de caracteres e indique si se encuentran ordenados de menor a mayor o no.
*/

#include <stdio.h>
#include <stdlib.h>
#define N 6

void corroborar(int vector[]) {
    int ordenado = 1;
    for (int i=0;i<N - 1;i++) {
        if (vector[i] > vector[i + 1]) {
            ordenado = 0;
        }    
        }
    if (ordenado == 0) {
        printf("No");
    }else {
        printf("Si");
    }

}


int main() {
    int vector[N] = {'a','c','g','j','p','z'};
    corroborar(vector);   
    return 0;
}


/*
vector[0] = 'c' > vector[0] = 'c' No
vector[0] = 'c' > vector[1] = 'a' Si
vector[0] = 'c' > vector[2] = 'j' No
vector[0] = 'c' > vector[3] = 't' No
vector[0] = 'c' > vector[4] = 'p' No
vector[0] = 'c' > vector[5] = 'g' No

*/