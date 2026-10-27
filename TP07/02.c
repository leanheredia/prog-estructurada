/*
Dado el punto anterior, agregar los siguientes algoritmos:
Un algoritmo que permita leer todas las cadenas almacenadas en el mismo archivo empleando getc().
Un algoritmo que permita leer todas las cadenas almacenadas en el mismo archivo empleando fgets().
NOTA: Realizar los algoritmos en la función main().

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
    f = fopen("cadenas.html", "w");
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

    f = fopen("cadenas.html", "r");
    //empleando getc()
    for (int i = 0;i<5;i++) {
        int c;
        int j = 0;
        char mostrar[10];
        
        while ((c = getc(f)) != EOF && c != '\n') {
            mostrar[j] = c;
            j++;    
        }
        mostrar[j] = '\0';
        printf("%s\n", mostrar);
    }

    fclose(f);
    printf("\nCon fget()");
    
    //empleando fgets()
    f = fopen("cadenas.html", "r");
    char mostrar[10];
    while (fgets(mostrar, sizeof(mostrar), f) != NULL) {
        printf("%s", mostrar);
    }
    
    fclose(f);
    return 0;
}