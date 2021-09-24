//Faça um programa que lê várias sequências de números em ponto flutuante e encontra o valor médio desses números.

#include <stdio.h>

int main(){
	float qnumeros, numero, soma, cont;
	int flag = 0;
	do{
		scanf("%f", &qnumeros);
		soma = 0;
		cont = 0;
		if(qnumeros != 0){
			for(int i = 0; i < qnumeros; i++){
			scanf("%f", &numero);
			soma += numero;
			cont++;
			}
			printf("%.2f", (soma/cont));
			printf("\n");
		}
		else{
			flag++;
		}
	} while(flag < 1);
}
	