/*
Escribir una función que acepte como parámetro un vector que contiene números positivos, que puede contener valores duplicados, y reemplace cada elemento repetido por -1 (menos uno).  El procedimiento debe retornar el vector modificado y la cantidad de veces que fue modificado.  

*/

#include <stdio.h>
#define N 5

void modv(int v[N]) {
    int modificaciones = 0;
    for (int i=0;i<N;i++) {
        if (v[i] != -1) {
            for (int j= i + 1;j<N;j++) {
                if (v[i] == v[j] && v[i] != -1) {
                    v[j] = -1;
                    modificaciones ++;
            }
        }
    }
}
    
}





int main() {
    int v[N] = {2,3,5,5,1};
    printf("Vector original: ");
    for (int j=0;j<N;j++){ 
        printf("%d ", v[j]);
    }

    modv(v);
    printf("\n Vector modificado: ");
    for (int i = 0;i<N;i++)  {
        printf("%d ", v[i]);
    }

    return 0;
}