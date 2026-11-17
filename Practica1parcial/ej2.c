/*
Una empresa de energía registra la deuda de luz de los departamentos de un edificio. El edificio cuenta con $P$ pisos y $D$ departamentos por piso. Se requiere un programa que utilice una matriz para almacenar la deuda (en pesos) de cada departamento y permita:
1. Cargar la matriz de forma manual ingresando la deuda de cada departamento por teclado.
2. Calcular e informar la suma total de la deuda de todo el edificio.
3. Identificar e informar en qué piso y departamento se encuentra la mayor deuda registrada, indicando que a dicho departamento se le deberá cortar el servicio de luz.
4. Informar cuál es el piso que acumula la mayor deuda total.

        Departamento 1 Departamento 2
Piso 1      $67             $54
Piso 2      $32             $100
mayor = 100



*/

#include <stdio.h>

void cargar_matriz(int m[4][4]) {
    for (int i = 0;i<4;i++) {
        for (int j = 0;j<4;j++) {
            printf("Ingrese la deuda del departamento %d, piso %d: ", j + 1, i + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void suma_total_edificio(int m[4][4]) {
    int acumulador = 0;
    
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            acumulador += m[i][j]; //suma total de TODO el edificio
        }
    }

    printf("La deuda total que tiene el edificio es de: %d\n", acumulador);
}

void mayor_deuda_registrada(int m[4][4]) {
    int mayor = 0;
    int pos_piso = 0;
    int pos_depto = 0;
    for (int i = 0;i<4;i++) {
        for (int j =0;j<4;j++) {
            if (m[i][j] > mayor) {
                mayor = m[i][j];
                pos_piso = i;
                pos_depto = j;
            }
        }
    }
    printf("La mayor deuda registrada es %d y se encuentra en el piso %d del departamento %d\n", mayor, pos_piso + 1, pos_depto + 1);
}

void piso_mayor_deuda(int m[4][4]) {
    int mayor = 0;
    int pos_piso = 0;
    for (int i = 0;i<4;i++) {
        int acumulador = 0;
        for (int j = 0;j<4;j++) {
            acumulador += m[i][j];
        }
        if (acumulador > mayor) {
            mayor = acumulador;
            pos_piso = i;
        }
    }
    printf("El piso que tiene la mayor deuda es el piso numero: %d y la deuda total es: %d\n", pos_piso + 1, mayor);
}



int main() {
    int m[4][4];
    cargar_matriz(m);
    //mostrar
    for (int i = 0;i<4;i++) {
        for (int j = 0;j<4;j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    suma_total_edificio(m);
    mayor_deuda_registrada(m);
    piso_mayor_deuda(m);
     return 0;
}