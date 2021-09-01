#include <stdio.h>

void inverteDigitos(int *num){
	int resto;
	int numero_total = *num;
	int num_invertido = 0;
	
	while(numero_total > 0){
		resto = numero_total % 10;
		num_invertido = (num_invertido*10) + resto;
		numero_total /= 10;
	}
	*num = num_invertido;
}

int main(){
	int num;
	scanf("%d", &num);
	inverteDigitos(&num);
	printf("%d\n", num);
	return 0;
}