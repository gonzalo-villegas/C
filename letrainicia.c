#include <stdio.h>


/*
Verifica si <palabra> inicia con vocal o no
autor: gvillegas
fecha: 2017-02-28
*/
char* vocal(char* palabra);


int main(){
	
	char palabra[150];

	printf("Ingrese una palabra: \n");
	scanf("%s", palabra);

	printf("La palabra %s %s\n", palabra, vocal(palabra));
	
	return 0;
}


char* vocal(char* palabra){
	
	if(palabra[0]=='A' || palabra[0]=='a')
		return "comienza por la vocal A";
	if(palabra[0]=='E' || palabra[0]=='e')
		return "comienza por la vocal E";
	if(palabra[0]=='I' || palabra[0]=='i')
		return "comienza por la vocal I";
	if(palabra[0]=='O' || palabra[0]=='o')
		return "comienza por la vocal O";
	if(palabra[0]=='U' || palabra[0]=='u')
		return "comienza por la vocal U";

	return "no comienza con una vocal";
}
