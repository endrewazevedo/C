#include <stdio.h>

int verifica_maior(int a, int b){
	if (b<a){
		return 0;
	}
    else{
        return 1;
    }
}

int main(){
	int numero_anterior, prox_numero, verificador = 1;
	scanf("%d", &numero_anterior);
	while(scanf("%d", &prox_numero) && prox_numero > 0){
		if(verifica_maior(numero_anterior, prox_numero) == 0){
			verificador = 0;
		}
		numero_anterior = prox_numero;
	}
    printf("%d", prox_numero);
	if(verificador == 0){
		printf("NAO");
	}
	else{
		printf("SIM");
	}
}