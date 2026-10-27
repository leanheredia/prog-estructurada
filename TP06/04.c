/*
Crear un registro que permita almacenar información relacionada con un músico. Cada músico cuenta con un nombre, una edad, un género músical e información sobre sus discos. Cada disco, posee un título, un año de lanzamiento y su cantidad de canciones.
Ejemplo:
Musico: {Nombre: “Músico 1”, Edad: 35, Género: “Rock”, Discos: {Titulo: “Disco 1”, Año: 2021, Canciones: 14}, {Titulo: “Disco 2”, Año: 2006, Canciones: 8}}

*/

struct disco {
    char titulo[20];
    int año_disco;
    int canciones;
};

struct musico {
    char nombre[20];
    int edad;
    char genero[10];
    struct disco ds[2];
};

int main() {
    struct musico mus[2];
    return 0;
}