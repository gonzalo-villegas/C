#include <stdio.h>


/*
Determinar el area y el perimetro de un triangulo rectángulo
autor: gvillegas
fecha: 2017-02-28
*/

float area(float base, float altura);
float perimetro(float base, float altura);


int main(){
	
	float base;
	float altura;
	
	printf("Ingrese la base del triangulo rectangulo\n");
	scanf("%f", &base);
	printf("Ingrese la altura del triangulo rectangulo\n");
	scanf("%f", &altura);
	
	printf("El area del triangulo rectangulo de base: %7.2f cm y altura %7.2f es %7.2f cm2\n", base, altura, area(base, altura));
	printf("El perimetro del triangulo rectangulo de base: %7.2f cm y altura %7.2f es %7.2f cm\n", base, altura, perimetro(base, altura));
	
	return 0;
}

float area(float base, float altura){
	return base*altura/2;
}

float perimetro(float base, float altura){
	int hipotenusa;
	
	hipotenusa = sqrt(pow(base,2) + pow(altura,2));
	
	return base+altura+hipotenusa;
}

