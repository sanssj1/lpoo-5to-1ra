#include <stdio.h>
#include <string.h>
char subcadena[100], cadena[100], *ocurrencia;
main(){
	printf("Ingrese la cadena: ");
    fgets(cadena, sizeof(cadena), stdin);	
	printf("Ingrese la subcadena: ");
    fgets(subcadena, sizeof(subcadena), stdin);	
	cadena[strcspn(cadena, "\n")] = '\0';
	subcadena[strcspn(subcadena, "\n")] = '\0';    
	ocurrencia = strstr(cadena, subcadena);
    if(ocurrencia != NULL){
    	printf("La subcadena %s se encuentra en la cadena %s, en la posicion %d \n", subcadena, cadena, ocurrencia-cadena);
	}else{
		printf("La subcadena %s no se encuentra en la cadena %s \n", subcadena, cadena);
	}
	return 0;
}
