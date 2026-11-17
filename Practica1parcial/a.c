/*
Escribir una función en C que reciba como parámetro una cadena de caracteres (string). Utilizando exclusivamente aritmética de punteros (sin usar la librería string.h ni índices de arreglos como cadena[i]), la función debe calcular y retornar la longitud (tamaño) de dicha cadena.


Puntero : 0x0 + 1 = 0x1 (cadena[1])
Dirección de cadena: 0x0 (cadena[0])


H o l a
0x0 0x1 0x2 0x3

*/

#include <stdio.h>

int caracter_cadena(char cadena[]) {
    int contador = 0;
    char *puntero = cadena;
    while (*puntero != '\0') {
        contador++;
        puntero++;
    }
    return contador;
}




int main() {
    char cadena[] = {"Messi"}; //7 caracteres
    int res = caracter_cadena(cadena);
    printf("La cantidad de caracteres que tiene la cadena es: %d", res);
}