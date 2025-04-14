#include<stdio.h>
#include<string.h>
int palindromo = 0, i, n;
char palabra[100];
main(){
	printf("Ingrese una palabra: ");
	scanf("%s", palabra);
	n = strlen(palabra) - 1;
	for(i=0;i<n;i++){
		if(palabra[i] == palabra[n - i]){
			palindromo++;;	
		}
	}
	if(palindromo == n){
		printf("La palabra es palindroma");
	}
	else{
		printf("La palabra no es palindroma");
	}
}
