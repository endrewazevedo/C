#include <stdio.h>

int converte(int a){
	int num = a-96;
	return num;
}

int main(void){
	char letra;
	int soma = 0, nletra;
	while(scanf("%s", &letra) == 1 && letra != '0' ){
        if(letra != '0'){
            nletra = converte(letra);
            soma += nletra;
        }
	}
	printf("%d", soma);
}