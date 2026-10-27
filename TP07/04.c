/*
Se efectúa una encuesta para conocer el nivel de ocupación de los pobladores de una ciudad. Los encuestados contestaron los siguientes ítems:  
- Sexo (1 varón; 2 mujer)  
- Edad  
- Estado civil (1 soltero; 2 casado; 3 otros)  
- Trabaja (0 no; 1 sí)  
- Estudia (0 no; 1 sí) .
a) Generar un archivo con todos los datos validados  
b) Utilizando el archivo imprimir un reporte como el siguiente:  
        
    PORCENTAJES  
• varones xx 
• mujeres xx 
• menores de 18 años que trabajan xx 
• solteros xx 
• casados xx 
• encuestados que trabajan y estudian xx 
• mujeres que trabajan xx 

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct encuesta {
    int sexo;
    int edad;
    int estado;
    int trabaja;
    int estudia;
};
void cargar(char archivo[], char modo[], struct encuesta persona[500]) {
    FILE *f;    
    f = fopen(archivo, modo);
    
    for (int i = 0;i<500;i++) {
        persona[i].sexo = (1 + (rand() % 2));
        persona[i].edad = (1 + (rand() % 100));
        persona[i].estado = (1 + (rand() % 3));
        persona[i].trabaja = (rand() % 2);
        persona[i].estudia = (rand() % 2);
        fprintf(f, "%d %d %d %d %d %d\n", i + 1, persona[i].sexo, persona[i].edad, persona[i].estado, persona[i].trabaja, persona[i].estudia);
    }
   

    fclose(f);
}

void porcentajes(char archivo[], char modo[], struct encuesta persona[500]) {
    FILE *f;
    f = fopen(archivo, modo);
    int id = 0;
    int hombres = 0;
    int mujeres = 0;
    int menores_18_tr = 0;
    int solteros = 0;
    int casados = 0;
    int tryest = 0;
    int muj_trab = 0;

    int i = 0;
    while (fscanf(f, "%d %d %d %d %d %d", &id, &persona[i].sexo, &persona[i].edad, &persona[i].estado, &persona[i].trabaja, &persona[i].estudia) != EOF) {
        if (persona[i].sexo == 1) {
            hombres++;
        }else {
            mujeres++;
        }

        if ((persona[i].edad < 18) && (persona[i].trabaja == 1)) {
            menores_18_tr++;
        }

        if (persona[i].estado == 1) {
            solteros++;
        } else if (persona[i].estado == 2) {
            casados++;
        }

        if ((persona[i].estudia == 1) && (persona[i].trabaja == 1)) {
            tryest++;
        }

        if ((persona[i].sexo == 2) && (persona[i].trabaja == 1)) {
            muj_trab++;
        }
        
        i++;
    }
    fclose(f);
    printf("PORCENTAJES\n");
    printf("varones %d\n", hombres);
    printf("mujeres %d\n", mujeres);
    printf("menores de 18 que trabajan %d\n", menores_18_tr);
    printf("solteros %d\n", solteros);
    printf("casados %d\n", casados);
    printf("trabaja y estudian %d\n", tryest);
    printf("mujeres que trabajan %d\n", muj_trab);
}

int main() {
    srand(time(NULL));
    struct encuesta persona[500];
    cargar("reporte.txt", "w", persona);
    porcentajes("reporte.txt", "r", persona);
    
    return 0;
}


