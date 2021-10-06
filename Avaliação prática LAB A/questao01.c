#include <stdio.h>


int main(){
    int identificador;
    double peso, tara, preco = 0, total;
    scanf("%d", &identificador);
    scanf("%lf", &peso);
    peso = peso - 0.825;
	
    if(identificador == 1){
		preco = 17.13;
        total = peso * preco;
    }
	
    if(identificador == 2){
        tara = 0.423;
        peso = peso + 0.825 - tara;
	    preco = 24.42;
        total = peso*preco;
    }
	
    if(identificador == 3){
        peso += 0.825;
	    preco = 18.81;
        total = peso*preco;
    }

	printf("%.2lf", total);
}