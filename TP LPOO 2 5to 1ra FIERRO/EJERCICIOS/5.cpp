#include<stdio.h>
#include<string.h>
int palabras, espacios = 0, n, i;
char palabra[100];
main(){
	printf("Ingrese una palabra: ");
    fgets(palabra, sizeof(palabra), stdin);
	n = strlen(palabra);
	for(i=0;i<n;i++){
	if(palabra[i] == ' '){
		espacios++;
	}	
	}
	
	palabras = espacios + 1;
	
	printf("La cantidad de palabras es %d", palabras);
}
