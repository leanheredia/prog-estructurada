//Crear una función que reciba dos números enteros como parámetros, realice la resta aritmética de ambos, y retorne el resultado de la resta.

#include <stdio.h>

int resta(int num1, int num2) {
    int calculo = num1 + num2;
    return calculo;
}





int main(void) {
    int num1 = 20;
    int num2 = 10;
    int resultado = resta(num1, num2);
    printf("El resultado de la resta es: %d\n", resultado);
    return 0;
}