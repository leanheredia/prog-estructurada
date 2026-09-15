    /*
    Escribir una función que reciba como argumentos un arreglo de N elementos de tipo entero, un número entero X, y un vector resultado también de tamaño N que haga lo siguiente:
    Busque todos los elementos que coincidan con X y devuelva la cantidad de coincidencias encontradas.
    Busque la primera coincidencia del elemento en la lista y devuelva su posición. Si X no existe en el arreglo debe devolver -1.
    Utilizando la función anterior, busque todos los elementos que coincidan con X y devuelva un arreglo con las posiciones que ocupan estos elementos en el arreglo original. Si no hay elementos coincidentes, devolverá un arreglo vacío.
    */

    #include <stdio.h>
    #include <stdlib.h>

    #define N 7


    int coincidentes(int vector[], int X) {
        int cantidadencontrados = 0;
        for (int i=0;i<N;i++) {
            if (vector[i] == X) {
                cantidadencontrados ++;
            }
        }
        return cantidadencontrados;
    }


    int primeracoincidencia(int vector[], int X) {
        int pos_encontrado = -1;
        for (int i=0;i<N && pos_encontrado == -1;i++) {
            if (vector[i] == X) {
                pos_encontrado = i;
            }
        }

        return pos_encontrado;
    }

    int posicionescoincidentes (int vector[], int vectorpos[], int X) {
        int j = 0;
        for (int i=0;i<N;i++) {
            if (vector[i] == X) {
                vectorpos[j] = i;
                j+=1;
            }
        }
        for (int i = 0; i < j; i++)
        {
            printf("%d\n", vectorpos[i]);
        }
        return j;   
    }


    int main() { 
        int X = 4;
        int vector[N] = {5, 7, 3, 9, 2, 3, 8};
        int vectorpos[N];
        int a = coincidentes(vector, X);
        int b = primeracoincidencia(vector, X);
        int c = posicionescoincidentes(vector, vectorpos, X);

        printf("Coincidencias (x) = %d\n Primera posicion coincidencia = %d\n", a,b);
        for (int i=0;i<c;i++) {
            printf("Posiciones coincidentes = %d\n", vectorpos[i]);
        }

        return 0;

    }