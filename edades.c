#include <stdio.h>


/*
Usuario y su Edad
autor: gvillegas
fecha: 2017-02-28
*/
char* grupo(int edad);


int main(){
	
	int edad;
	int meses;
	
	printf("Ingrese su edad en años: \n");
	scanf("%d", &edad);
	
	meses = edad*12;
	printf("|%-31s|%-27s|\n", "Clasificacion por edad", "Edad en meses");
	printf("|%31s|%27d|\n", grupo(edad), meses);
	
	return 0;
}


char* grupo(int edad){
	
	if(edad < 0)
		return "ERROR.";
	if(edad< 3)
		return "Usted es un BEBE.";
	if(edad < 13)
		return "Usted es un NIÑO.";
	if(edad< 18)
		return "Usted es unADOLESCENTE.";

	return "Usted es un ADULTO.";
}

