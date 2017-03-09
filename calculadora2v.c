#include <stdio.h>


/*
Calculadora de 2 Variables
autor: gvillegas
fecha: 2017-02-28
*/

char menu();
void obtenernumeros(float *numero1, float *numero2);
void mostrarresultado(float result);

int main(){
	
	char opcion;
	float numero1=0;
	float numero2=0;
	
	do{
		opcion = menu();
		
		switch (opcion){
			case '1':
				obtenernumeros(&numero1, &numero2);
				mostrarresultado(numero1+numero2);
				break;
			case '2':
				obtenernumeros(&numero1, &numero2);
				mostrarresultado(numero1-numero2);
				break;
			case '3':
				obtenernumeros(&numero1, &numero2);
				mostrarresultado(numero1*numero2);
				break;
			case '4':
				obtenernumeros(&numero1, &numero2);
				if(numero2!=0)
					mostrarresultado(numero1/numero2);
				else
					printf("La division por cero no existe!!!!");
				break;
			default:
				printf("Escoja una opcion valida (1-4) o S para Salir.");
				break;
		}
	}while (opcion!='S' && opcion!='s');


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
