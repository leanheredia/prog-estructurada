
/*
Informar cuál fue en porcentaje la relación entre $ producidos y $ gastados de cada telar.

void porcentaje_relacion(matriz, gastado_Telar) {
    
}
int dato_temporal = 0;
for (int i = 0;i<4;i++) {
    int sumatoria = 0;
    for (int j = 0;j<4;j++) {
        dato_temporal = m[i][j] * v[j];
        sumatoria += dato_temporal;   //aca tengo 79
    }  
    resultado = dividir sumatoria / vector[i]
    porcentaje = resultado * 100;


    imprimir



    }







*/

#include <stdio.h>

void metros_se_produjeron(int m[4][4]) {
    int tipo_tela;
    printf("Ingresa el tipo de tela (0-3): \n");
    scanf("%d", &tipo_tela);
    int sumatoria = 0;
    for (int i=0;i<4;i++) {
        sumatoria += m[i][tipo_tela]; 
    }

    printf("Se produjeron %d del tipo de tela %d\n", sumatoria, tipo_tela + 1);
}

void gastado_en_determinado_telar(int v[4]) {
    int telar;
    printf("Ingrese un determinado telar (1-40)");
    scanf("%d", &telar);

    printf("Se produjeron %d metros de tela en el telar numero %d", v[telar - 1], telar);

}

void telar_mas_produjo(int m[4][4], int v[4]) {
int mayor = 0;
int dato_temporal = 0;
int telar_mayor = 0;
for (int i = 0;i<4;i++) {
    int sumatoria = 0;
    for (int j = 0;j<4;j++) {
        dato_temporal = m[i][j] * v[j];
        sumatoria += dato_temporal;   //aca tengo 79
    }  
        if (sumatoria > mayor) {
            mayor = sumatoria;
            telar_mayor = i;
        }
    }

    printf("El telar que mas produjo en relacion precio es el telar numero: %d con %d pesos\n", telar_mayor + 1, mayor);
}


void tela_produjeron_metros(int m[4][4]) {
int mayor = 0;
int tela_mayor = 0;

for (int i = 0;i<4;i++) {
        int sumatoria = 0;
        for (int j = 0;j<4;j++) {
            sumatoria += m[j][i]; 
        }
        if (sumatoria > mayor) {
            mayor = sumatoria;
            tela_mayor = i;
        }    
    }
    printf("La tela que produjo mas metros es la tela numero %d con %d metros", tela_mayor + 1, mayor);
}


void porcentaje_relacion(int m[4][4], int v[4]) {
    int dato_temporal = 0;
    int resultado = 0;
    int porcentaje_gastado[4];
    for (int i = 0;i<4;i++) {
        int sumatoria = 0;
        for (int j = 0;j<4;j++) {
            dato_temporal = m[i][j] * v[j];
            sumatoria += dato_temporal;   //aca tengo 79
        }
        resultado = sumatoria / v[i];
        porcentaje_gastado[i] = resultado * 100;
        printf("El porcentaje gastado en el telar numero %d es %d\n", i + 1, porcentaje_gastado[i]);
    }   
    
    
}


int main() {
    int metro_producido_telar[4][4] = {
        {4,5,3,6},
        {3,2,1,7},
        {9,7,4,3},
        {3,4,8,5}
    }; 

    int gastado_telar[4] = {40,30,25,34};
    int precio_telar[4] = {3,2,5,7};

    //metros_se_produjeron(metro_producido_telar);
    //gastado_en_determinado_telar(gastado_telar);
    //telar_mas_produjo(metro_producido_telar, precio_telar);
    //tela_produjeron_metros(metro_producido_telar);
    porcentaje_relacion(metro_producido_telar, gastado_telar);
    return 0;
}