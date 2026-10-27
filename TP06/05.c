/*
Utilizando el registro del punto anterior, crear las siguientes funciones:
Una función que permita la carga de un vector de 20 músicos.
Una función que reciba el vector de músicos y retorne el nombre del músico con mayor cantidad de discos.
Una función que reciba el vector de músicos, una edad y retorne el promedio de discos para los músicos menores a la edad recibida.
Una función que reciba el vector de músicos, un año e imprima por pantalla el nombre de los discos cuyo año de lanzamiento sea posterior al recibido cómo parámetro. Además, se debe incluir el nombre del artista, el género y la cantidad de canciones del disco.

*/
#include <stdio.h>
#include <string.h>
#define N 3

struct disco {
    char titulo[N];
    int año_disco;
    int canciones;
};

struct musico {
    char nombre[N];
    int edad;
    char genero[10];
    struct disco ds[5];
};

void carga(struct musico mus[N]) {
    for (int i = 0;i<N;i++) {
        int tiene_discos = 1;
        printf("Musico %d:\n", i + 1);
        
        printf("Ingresa el nombre: ");
        scanf("%s", &mus[i].nombre);
        
        printf("Ingresa la edad: ");
        scanf("%d", &mus[i].edad);
        
        printf("Ingresa el genero: ");
        scanf("%s", &mus[i].genero);
        for (int j = 0;j<5 && tiene_discos;j++) {
            printf("Disco %d del musico %d:\n", j + 1, i +1);
            
            printf("Ingresa el nombre del disco (0 si el musico no tiene discos): ");
            scanf("%s", &mus[i].ds[j].titulo);
            
            if (strcmp(mus[i].ds[j].titulo, "0") == 0) {
                tiene_discos = 0;
            }else {
                printf("Ingresa el año del disco: ");
                scanf("%d", &mus[i].ds[j].año_disco);
                
                printf("Ingresa la cantidad de canciones: ");
                scanf("%d", &mus[i].ds[j].canciones);
                
            }
        }
    }
}

char mayor_cantidad_discos(struct musico mus[N]) {
    int mayor = 0;
    int contador = 0;
    for (int i = 0;i<N;i++) {
        if (mus[i].ds[i] > mayor) 
    }
}

int main() {
    struct musico mus[N] = {0};
    carga(mus);
    return 0;
}

FILE *f;
f = fopen("texto.txt", "w");
int fclose (f);