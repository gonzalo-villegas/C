#include <stdio.h>
#include <stdbool.h>

/*
Determinar si un numero ingresado por consola es par o impar
autor: gvillegas
fecha: 2017-02-28
*/

bool espar(int n);


int main(){
	
	int numero;
	
	printf("Numero a evaluar\n");
	scanf("%d", &numero);
	
	printf("El numero: %d es %s\n", numero, espar(numero)?"par":"impar");
	
	return 0;
}

bool espar(int n){
	return (n%2==0)?true:false;
}
