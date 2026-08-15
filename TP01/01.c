//Crear una función que reciba dos números enteros como parámetros, realice la suma aritmética de ambos, y retorne el resultado de la suma.


#include <stdio.h>


int suma(int num1, int num2) {
    int calculo = num1 + num2;
    return calculo;
}




int main(void) {
    int num1 = 10;
    int num2 = 20;
    int resultado = suma(num1, num2);
    printf("El resultado de la suma es: %d\n", resultado);
    return 0;
}


