/*
Ingresar 1000 edades en un vector e indicar cuál es la edad de mayor frecuencia (la que más se repite).  Haga una función auxiliar que pruebe la correctitud del programa.  
*/
#include <stdio.h>
#define N 10



int main() {
    int v[N] = {3,2,6,7,8,3,5,4,3};

    int edad_mas_repite;
    int maximo_actual = 0;
    for (int i = 0; i<N;i++) {
        int contador = 0;

        for (int j = 0; j<N;j++) {
            if (v[i] == v[j]) {
                contador +=1;       
            }
        }
        if (contador > maximo_actual) {
            maximo_actual = contador;
            edad_mas_repite  = v[i];
        }
    }
    printf("Numero que mas se repite: %d", edad_mas_repite);
    return 0;






    /*i = 0
      j = 0
      i == j? si, edad = 0

      i = 0
      j = 1
      0 == 1? no, edad = 0
    
    
    
    
    */
}