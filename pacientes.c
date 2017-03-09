#include <stdio.h>

#define SIZE 5


/*
Pacientes y sus estaturas
autor: gvillegas
fecha: 2017-02-28
*/


int main(){
	
	float estaturas[SIZE];
	int i;
	
	for(i=1;i<=SIZE;i++){
		printf("Ingrese la estatura del paciente %d: \n", i);
		scanf("%f", &estaturas[i]);
	}

	for(i=1;i<=SIZE;i++){
		printf("La estatura del paciente %d es %5.2f\n", i, estaturas[i]);
	}
	
	
	return 0;
}


