#include <stdio.h>
#include <string.h>
char frase[100], fraseInv[100];
int i, vEsp[100], auxEsp = 0, vPosIn[100], auxPosIn, vTamPal[100], n, j, contEsp = 0, fraseReves, x;
main() {
    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);
    n = strlen(frase);
	for(i=0;i<n;i++){
		fraseInv[n-i-1] = frase[i];
		if(fraseInv[i] == ' '){
			contEsp++;
			vEsp[auxEsp] = i;
		if(auxEsp == 0){
				vPosIn[0]= 0;
			}
			else{
				vPosIn[i]= vEsp[auxEsp - 1] + 1;
			}
		}
		vTamPal[i] = vEsp[i] - vPosIn[i];
		auxEsp++;
	}
	for(i=contEsp;i>=0;i++){
		vPosIn[i] = auxPosIn;
		for(j=vPosIn[auxPosIn]; j<vTamPal[i]; j++){
				printf("%c", fraseInv[j]);
		}
	}	
	printf("%s \n", fraseInv);
	printf("%d \n", contEsp);
    printf("Elementos del vector: \n");
    for (int i = 0; i < n; i++) {
        printf("espacios %d \n", vEsp[i]);
        printf("posicion inicial %d \n", vPosIn[i]);        
    }
    printf("%s \n", frase);
}

