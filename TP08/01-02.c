/*Crear un programa que permita almacenar los datos de 10 personas (DNI, nombre, sexo, edad) y mediante el ingreso de una posición “I” realizar la lectura de dicha posición en el archivo de manera directa. El programa debe terminar cuando se ingresa I = -1.



Ejemplo
datos.dat:
45.135.478 Juan M 35
28.135.482 Carla F 42
42.135.486 Jose M 24
…
Salida:
I = 2
Lectura:  42.135.486 Jose M 24

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct personas {
    char dni[15];
    char nombre[30];
    char genero;
    int edad;
};

void cargarDatos(struct personas persona[3]) {
    FILE *f;
    f = fopen("datospersona.dat", "wb");

    for (int i = 0;i<3;i++) {
        printf("Ingrese el dni de la persona %d: ", i+1);
        scanf(" %s", persona[i].dni);
        getchar();

        printf("Ingrese el nombre: ");
        scanf(" %s", persona[i].nombre);

        printf("Ingrese el genero: ");
        scanf(" %c", &persona[i].genero);

        printf("Ingrese la edad: ");
        scanf("%d", &persona[i].edad);
        getchar();
    }


    fwrite(persona, sizeof(struct personas), 3, f);
    fclose(f);
}


void leerDatos() {
   FILE *f;
   f = fopen("datospersona.dat", "rb");
   int pos;
    printf("Ingresa una posicion: ");
    scanf("%d", &pos);
   while (pos != -1) {
    struct personas aux;
    fseek(f, sizeof(struct personas) * pos, SEEK_SET);
    fread(&aux, sizeof(struct personas), 1, f);
   
    printf("%s\n", aux.dni);
    printf("%s\n", aux.nombre);
    printf("%c\n", aux.genero);
    printf("%d\n", aux.edad);
    
    
    printf("Ingresa una posicion: ");
    scanf("%d", &pos);
   }

   fclose(f);
}



void reemplazarDatos(int pos) {
    FILE *f;
    f = fopen("datospersona.dat", "r+b");
    struct personas personaaux;
    //pedir datos
    printf("Ingrese el dni de la persona: ");
    scanf(" %s", personaaux.dni);
    getchar();
    
    printf("Ingrese el nombre: ");
    scanf(" %s", personaaux.nombre);

    printf("Ingrese el genero: ");
    scanf(" %c", &personaaux.genero);

    printf("Ingrese la edad: ");
    scanf("%d", &personaaux.edad);
    getchar();    
    
    //meterlos en el archivo
    fseek(f, sizeof(struct personas) * pos, SEEK_SET);
    fwrite(&personaaux, sizeof(struct personas), 1, f);

    fclose(f);
}

                                                                  

int main() {
    struct personas persona[3];
    int pos = 0;
    //cargarDatos(persona);
    leerDatos();
    reemplazarDatos(pos);
    leerDatos();
    return 0;
}