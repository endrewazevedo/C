#include <stdio.h>

int main(void){
	int idade, idadecao;
	scanf("%d", &idade);
	idadecao = idade*10;
	
	if(idadecao <= 12){
		printf("infancia");
	}
	else if(idadecao <= 20){
		printf("adolescencia");
	}
	else if(idadecao <= 75){
		printf("adulto");
	}
	else if(idadecao > 75){
		printf("idoso");
	}
	
}