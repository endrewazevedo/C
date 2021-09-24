#include <stdio.h>

int converte(int a){
	int num = a-96;
	return num;
}

int main(void){
	char letra;
	int soma = 0, nletra;
	while(scanf("%c", &letra) == 1 && letra != '0' ){
   		nletra = converte(letra);
   		soma += nletra;
		printf("%d\n", nletra);
	}
	printf("%d", soma);
}