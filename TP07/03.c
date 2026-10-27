/*En un archivo secuencial (por ejemplo “lluvias.txt”) se almacenan datos sobre la lluvia caída en un cierto período. Cada línea corresponde a 
un día y contiene los siguientes datos: 
Día-Mes-Año-Precipitaciones (0 si no llovió)  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
struct ficha {
	int dia;
	int mes;
	int anio;
	int precipitaciones;
};
int main(){
	struct ficha lluvia[N];
	char guion = '-';
	char salto = '\n';
	FILE*f;
	f = fopen("lluvias.txt","w");
	for(int i=0;i<2;i++){
		printf("\nIngrese el dia: ");
		scanf("%d", &lluvia[i].dia);
		fprintf(f,"%d",lluvia[i].dia);
		fputc(guion, f);
		printf("\nIngrese el mes: ");
		scanf("%d", &lluvia[i].mes);
		fprintf(f,"%d",lluvia[i].mes);
		fputc(guion, f);
		printf("\nIngrese el aÑo: ");
		scanf("%d", &lluvia[i].anio);
		fprintf(f,"%d",lluvia[i].anio);
		fputc(guion, f);
		printf("\nIngrese las precipitaciones: ");
		scanf("%d", &lluvia[i].precipitaciones);
		fprintf(f,"%d",lluvia[i].precipitaciones);
		fputc(salto, f);
	}
	fclose(f);
//Leer el archivo e informar por pantalla:cuántos días hubo sin lluvias, cuántos días llovió  menos de 50 mm y cuántos llovió 50 mm ó más.*/  
	f = fopen("lluvias.txt", "r");
	
	int sin_lluvia = 0;
	int lluvia_menos = 0;
	int lluvia_mas = 0;
	char mostrar[13];
	while(fgets(mostrar, sizeof(mostrar),f)!=NULL){
		int i = 0;
		int j =0;
		int contador = 0;
		char numero[3] = {'\0'};
		while(mostrar[i]!=0){
			if(mostrar[i] == '-'){
				contador++;
				i++;
			}else if(contador == 3){
				numero[j] = mostrar[i];
				j++;
				i++;
			}else{
				i++;
			}
		}
		int pepe = atoi(numero);
		if (pepe == 0 ){
			sin_lluvia++;
		}else if(pepe<50){
			lluvia_menos++;
		}else{
			lluvia_mas++;
		}
	}
	fclose(f);

	printf("Los dias que no llovieron fueron %d, los que llovio mas de 50 fueron %d y los que menos %d", sin_lluvia, lluvia_mas, lluvia_menos);
	
	return 0;
}
