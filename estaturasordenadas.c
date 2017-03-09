#include <stdio.h>

#SIZE = 3
/*
Estaturas Ordenadas
autor: gvillegas
fecha: 2017-02-28
*/

char* pacientes[SIZE][2];


int main(){
	
	int i;
	
	for(i=0;i<SIZE;i++){
		float estatura;
		char[50] nombre;
		
		printf("Ingrese el nombre del paciente %d: ", i);
		scanf("%s", nombre);
		printf("Ingrese la estatura del paciente %d: ", i);
		scanf("%f", estatura);
		
		pacientes[i][0]=nombre;
		pacientes[i][1]=estatura;
		
	}
	


	return 0;
}


char menu(){
	char opcion;
	
	printf("Escoja una operacion: \n");
	printf("1. SUMA \n");
	printf("2. RESTA \n");
	printf("3. MULTIPLICACION \n");
	printf("4. DIVISION \n");
	printf("S. SALIR \n");
	scanf("%c", &opcion);
	
	return opcion;
}


void obtenernumeros(float *numero1, float *numero2){
	printf("Ingrese el primer valor:");
	scanf("%f", numero1);
	printf("Ingrese el segundo valor:");
	scanf("%f", numero2);
}

void mostrarresultado(float result){
	printf("El resultado es %7.2f\n", result);
}
