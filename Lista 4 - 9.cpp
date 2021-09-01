
#include <stdio.h>

float fracao(int a, int b){
	float novoA, novoB;
	novoA = a;
	novoB = b;
	float result = novoA/novoB;
	return result;
}

int main(){
	int numerador, denominador;
	scanf("%d%d", &numerador, &denominador);
	printf("%.4f", fracao(numerador, denominador));
}