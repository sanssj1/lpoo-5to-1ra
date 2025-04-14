#include<stdio.h>
#include<string.h>
int n, i;
char palabra[100], letra, letra2;
main(){
	printf("Ingrese una palabra: ");
	scanf("%s", &palabra);
	printf("Ingrese la letra que quiere reemplazar: ");
	scanf("%s", &letra);
	printf("Ingrese la letra por la cual quiere reemplazar la otra: ");
	scanf("%s", &letra2);	
	n = strlen(palabra);
	for(i=0;i<n;i++){
		if(palabra[i] == letra){
			palabra[i] = letra2;
		}
	}
	printf("Tu palabra con las letras reemplazadas es %s", palabra);
}
