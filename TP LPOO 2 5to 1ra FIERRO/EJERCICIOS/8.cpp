#include <stdio.h>
#include <string.h>
#include <ctype.h>

char palabra1[100], palabra2[100], palabra3[100], palabra4[100], palabra5[100];
char sub[100], mayor[100];
int i, j, k, longi, max=0;

main(){
    printf("Ingrese la primer palabra: ");
    fgets(palabra1, sizeof(palabra1), stdin);
    if(palabra1[strlen(palabra1) - 1] == '\n'){
        palabra1[strlen(palabra1) - 1] = '\0';
    }

    printf("Ingrese la segunda palabra: ");
    fgets(palabra2, sizeof(palabra2), stdin);
    if(palabra2[strlen(palabra2) - 1] == '\n'){
        palabra2[strlen(palabra2) - 1] = '\0';
    }

    printf("Ingrese la tercer palabra: ");
    fgets(palabra3, sizeof(palabra3), stdin);
    if(palabra3[strlen(palabra3) - 1] == '\n'){
        palabra3[strlen(palabra3) - 1] = '\0';
    }

    printf("Ingrese la cuarta palabra: ");
    fgets(palabra4, sizeof(palabra4), stdin);
    if(palabra4[strlen(palabra4) - 1] == '\n'){
        palabra4[strlen(palabra4) - 1] = '\0';
    }

    printf("Ingrese la quinta palabra: ");
    fgets(palabra5, sizeof(palabra5), stdin);
    if(palabra5[strlen(palabra5) - 1] == '\n'){
        palabra5[strlen(palabra5) - 1] = '\0';
    }

    longi = strlen(palabra1);

    for(i=0; i < longi; i++){
        k = 0;
        for(j=i; j < longi; j++){
            sub[k] = palabra1[j];
            k++;
            sub[k] = '\0';
            
            if(strstr(palabra2, sub) != NULL &&
               strstr(palabra3, sub) != NULL &&
               strstr(palabra4, sub) != NULL &&
               strstr(palabra5, sub) != NULL
			   ){
			   	
                if(strlen(sub) > max){
                    max = strlen(sub);
                    strcpy(mayor, sub);
                }
                
            }
        }
    }

    printf("\n\nLa subcadena mas larga repetida es: %s\n", mayor);
}
