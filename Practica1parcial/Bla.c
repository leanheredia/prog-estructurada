#include <stdio.h>
#include <string.h>
#define F 2


void cargar_jugadores(char jugadores[F][20], int partidas[F], int victorias[F], int puntos[F]) {
    for (int i = 0;i<F;i++) {
        printf("Ingresa el nombre del jugador\n>>", i + 1);
        scanf("%s", jugadores[i]);
    
        printf("Ingresa la cantidad de partidas del jugador\n>>");
        scanf("%d", &partidas[i]);

        printf("Ingresa la cantidad de victorias del jugador\n>>");
        scanf("%d", &victorias[i]);

        printf("Ingresa la cantidad de puntos del jugador\n>>");
        scanf("%d", &puntos[i]);
    }
}

void mostrar_jugador(char jugadores[F][20], int partidas[F], int victorias[F], int puntos[F]) {
    for (int i = 0;i<F;i++) {
        printf("%d. %s \t %d partidas \t %d Victorias \t %d Pts\n", i + 1, jugadores[i], partidas[i], victorias[i], puntos[i]);
    }
}

void buscar_jugador(char jugadores[F][20], int partidas[F], int victorias[F], int puntos[F]) {
    int encontrado = 0;
    char nombre[20];
    char pos_nombre;
    printf("Ingresa el nombre a buscar: \n>");
    scanf("%s", nombre);

    for (int i = 0; i<F;i++) {
        if (strcmp(nombre, jugadores[i]) == 0) {
            encontrado = 1;
            pos_nombre = i;
        }    
    }
    if (encontrado == 1) {
        printf("%d. %s \t %d partidas \t %d Victorias \t %d Pts\n", pos_nombre + 1, nombre, partidas[pos_nombre], victorias[pos_nombre], puntos[pos_nombre]);
    }else {
        printf("Jugador no encontrado.\n");
    }
}

int main() {
    char jugadores[F][20];
    int partidas[F];
    int victorias[F];
    int puntos[F];
    cargar_jugadores(jugadores, partidas, victorias, puntos);
    mostrar_jugador(jugadores, partidas, victorias, puntos);
    buscar_jugador(jugadores, partidas, victorias, puntos);

    return 0;
}