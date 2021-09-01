#include <stdio.h>

//escreva a funcao quadrado aqui
unsigned quadrado(int a){
	return a*a;
}

int main(){
	unsigned num;
	unsigned resto, soma = 0;
	scanf("%d", &num);
	while(num > 0){
		resto = num % 10;
		soma += quadrado(resto);
		num = num/10;
	}
    printf("%d", soma);
	return 0;
}