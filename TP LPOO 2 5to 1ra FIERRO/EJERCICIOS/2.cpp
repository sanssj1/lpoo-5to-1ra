#include<stdio.h>
#include<string.h>
int longitud;
char palabra[100];
main(){
	printf("Ingrese una palabra: ");
	scanf("%s", &palabra);
	longitud = strlen(palabra);
	printf("La cantidad de caracteres de la palabra %s es %d", palabra, longitud);
}
