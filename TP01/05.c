//Crear una función que reciba el tipo de bomba para una máquina, siendo el tipo de bomba un valor entero entre 0 y 4. Según el tipo de bomba debe mostrarse el siguiente mensaje usando un condicional switch.
//Si el tipo de bomba es 0, mostrar un mensaje por consola indicando “No hay establecido un valor definido para el tipo de bomba”.
//Si el tipo de bomba es 1, mostrar un mensaje por consola indicando “La bomba es una bomba de agua”.
//Si el tipo de bomba es 2, mostrar un mensaje por consola indicando “La bomba es una bomba de gasolina”.
//Si el tipo de bomba es 3, mostrar un mensaje por consola indicando “La bomba es una bomba de hormigón”.
//Si el tipo de bomba es 4, mostrar un mensaje por consola indicando “La bomba es una bomba de pasta alimenticia”.
//Si no se cumple ninguno de los valores anteriores mostrar el mensaje “No existe un valor válido para tipo de bomba”.

#include <stdio.h>

void mensaje_bomba(int tipo_bomba) {
    switch (tipo_bomba) {
        case 0:
            printf("No hay establecido un valor definido para el tipo de bomba.");
            break; 
        case 1:
            printf("La bomba es una bomba de agua");
            break;
        case 2:
            printf("La bomba es una bomba de gasolina.");
            break;
        case 3:
            printf("La bomba es una bomba de hormigón.");
            break;
        case 4:
            printf("La bomba es una bomba de pasta alimenticia.");
            break;
        default:
            printf("No existe un valor para ese tipo de bomba.");
    }
}

int main(void) {
    int tipo_bomba = 2;
    
    mensaje_bomba(tipo_bomba);
    return 0;    
}