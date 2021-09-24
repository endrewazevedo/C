#include <stdio.h>

int main(){
	int numero_anterior, prox_numero, verificador = 1;
	scanf("%d", &numero_anterior);
	while(scanf("%d", &prox_numero) && prox_numero > 0){
		
		if(prox_numero <= numero_anterior){
			verificador = 0;	
		}
		numero_anterior = prox_numero;
	}
	if(verificador == 0){
		printf("NAO");
	}
	else{
		printf("SIM");
	}
}