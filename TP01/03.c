//Crear una función que reciba dos números enteros como parámetros, realice el producto de ambos, y retorne el resultado del producto..

#include <stdio.h>


int producto(int num1, int num2) {
    int calculo = num1 * num2;
    return calculo;
}

int main(void) {
    int num1 = 5;
    int num2 = 2;
    int resultado = producto(num1, num2);
    printf("El resultado del producto es: %d", resultado);
    return 0;

}