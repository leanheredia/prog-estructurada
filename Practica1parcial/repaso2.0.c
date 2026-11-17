/*Escribir una función que reciba un arreglo ordenado y un elemento x. Si el elemento x se encuentra en el arreglo, debe encontrar su posición mediante búsqueda binaria y devolver la posición. Si no se encuentra, debe agregar x al vector en la posición correcta y devolver esa nueva posición.
 






*/







#include <stdio.h>


int busqueda(int v[8]) {
    int x = 2;
    int inicio = 0;
    int fin = v[7];
    int medio = 0;
    int esta = 1; //asumo que no está
    
    while (inicio <= fin) {
        medio = (inicio + fin) / 2;
        if (x == v[medio]) {
            return medio;            
        }else if (x > v[medio]) {
            inicio = medio + 1;
        }else {
            fin = medio - 1;
        } 
    }
    return -1;
}

int main() {
    int vector[8] = {1,2,3,4,5,6,7,8};
    int resultado = busqueda(vector);
    if (resultado != -1) {
        printf("Elemento encontrado en la posicion %d", resultado);
    } else {
        printf("El elemento no se encontro.");
    }


    return 0;
}