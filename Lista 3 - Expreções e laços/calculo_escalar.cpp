//Você deverá aplicar a escala na base e na altura do triângulo e calcular a nova área. Imprima a saída com duas casas de precisão.

#include <stdio.h>

int main(void){
	float base, altura;
	int escalar;
	scanf("%f%f%d", &base, &altura, &escalar);
	printf("%.2f", ((base*escalar)*(altura*escalar))/2);
}