#include<stdio.h>
char nombre[20], apellido[20];
main(){
	printf("Ingrese su nombre: ");
	scanf("%s", &nombre);
	printf("Ingrese su apellido: ");
	scanf("%s", &apellido);
	
	printf("Hola %s %s", nombre, apellido);
}
