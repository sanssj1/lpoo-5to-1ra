#include <stdio.h>
#include <string.h>
char frase[100], frase2[100];
int n, n2, i, anagrama = 0, j;
main() {
    printf("Ingrese la primer frase: ");
    fgets(frase, sizeof(frase), stdin);
        printf("Ingrese la segunda frase (supuesto anagrama): ");
    fgets(frase2, sizeof(frase2), stdin);
    n = strlen(frase);
    n2 = strlen(frase2);    
	for(i=0;i<n;i++){
		for(j=0;j<n2;j++){
		if(frase[i]==frase2[j]){
			anagrama++;
		}	
		}
	}
    if(anagrama == n2){
    	printf("Es un anagrama");
	}
	else{
		printf("No es un anagrama");
	}
}

