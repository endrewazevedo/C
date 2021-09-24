
int questao01(int valor){
	int npar = 2;
   int soma = 1;
	for(int i = 0; i < valor; i++){
		if(valor <= 0){
			return 1;
		}
		else{
			soma *= npar;
			npar += 2;
		}
	}
    return soma;
}

#include <stdio.h>

int main() {
   long int valor;

   scanf("%ld%*c",&valor);
   printf("%ld\n", questao01(valor));

}
