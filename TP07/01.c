/*Crear un programa que permita ingresar cinco cadenas de caracteres por teclado de manera sucesiva en un archivo de texto “cadenas.txt”.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

struct tipo_cadena {
        char cadena[N];
};

 int main() { 
    struct tipo_cadena cad[5];
    FILE *f;
    f = fopen("cadenas.txt", "w");
    if (f == NULL) {
        printf("El archivo no existe\n");
        return 1;
    }
    
    for (int i = 0;i<5;i++) {
        printf("Ingresa una cadena: ");
        fgets(cad[i].cadena, N, stdin);
        fputs(cad[i].cadena, f);
    }
    fclose(f);
    printf("felicidades\n");
    return 0;
}