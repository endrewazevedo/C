#include <stdio.h>

void quadrado(int *num){
	int quadrado = *num;
	*num = quadrado*quadrado;
}

int main(){
	int num;
	scanf("%d", &num);
	quadrado(&num);
	printf("%d", num);
}