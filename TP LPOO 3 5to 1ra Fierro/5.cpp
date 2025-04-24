#include <stdio.h>
#include <string.h>
char string[100], string1[100];

void sacarSalto(char string[]);
void concatenar(char *destino, char *fuente);


int main(){
	printf("Ingrese la primer cadena: ");
	fgets(string, sizeof(string), stdin);
	sacarSalto(string);
	
	printf("Ingrese la segunda cadena: ");
	fgets(string1, sizeof(string1), stdin);
	sacarSalto(string1);
	
	concatenar(&string[0], &string1[0]);
	
	printf("\n\nConcatenacion: %s", string);
	
	return 0;
}

void sacarSalto(char string[]){
	if(string[strlen(string) - 1] == '\n'){
		string[strlen(string) - 1] = '\0';
	}
}

void concatenar(char *destino, char *fuente){
	int j = strlen(destino);
	int i;
	for(i=0; fuente[i] != '\0'; i++){
			destino[j + i] = fuente[i];	
	}
	destino[j + i] = '\0';
}
