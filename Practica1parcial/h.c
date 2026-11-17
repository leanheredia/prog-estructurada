#include <stdio.h>




int consigna_1(char p[]){      //recibe un string 
	
	int cont = 0; //inicializa un contador
	char *puntero = p;      //Crea variable char de tipo puntero = p (Almacenea la dirección de p)
	//0x0> primera letra de p
	//0x1 > segunda letra de p
	while(*(puntero) != '\0'){  //mientras no sea el fin del vector
		puntero++; //??
		cont++; //aumenta el contador
	}
	
	return cont;
}

int main() {
    char p[] = {"Hola"};
    int res = consigna_1(p);
    printf("%d", res);
    return 0;
}