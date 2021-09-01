#include <stdio.h>

int main(void){
	char genero;
	float altura, peso, imc;
	scanf("%c %f %f", &genero, &peso, &altura);
	if(genero == 'm'){
		imc = (peso/(altura*altura));
		if(imc < 19){
			printf("Abaixo do normal");
		}
		else if(imc < 23.9){
			printf("Normal");
		}
		else if(imc < 28.9){
			printf("Obesidade leve");
		}
		else if(imc < 38.9){
			printf("Obesidade moderada");
		}
		else{
			printf("Entrada invalida");
		}
	}
	else if(genero == 'h'){
		imc = (peso/(altura*altura));
		if(imc < 20){
			printf("Abaixo do normal");
		}
		else if(imc < 24.9){
			printf("Normal");
		}
		else if(imc < 29.9){
			printf("Obesidade leve");
		}
		else if(imc < 42.9){
			printf("Obesidade moderada");
		}
		else{
			printf("Entrada invalida");
		}
	}
	else{
		printf("Entrada invalida");
	}
}