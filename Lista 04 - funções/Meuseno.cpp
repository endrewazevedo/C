#include <stdio.h>
#include <math.h>

double fatorial(int numero){

    double valor_fatorial = numero;
    for(int i = 1; i < numero ; i++){
        valor_fatorial *= (numero-i);
    }
    return valor_fatorial;
}

double seno(double x, int N){
	int inicio_fatorial = 1;
	double total_serie = x;
	for(int i = 1; i < N+1; i++){
        if(i == 1){
            total_serie = x;
        }
        else if( i % 2 == 0){
            total_serie -= ((pow(x,inicio_fatorial))/fatorial(inicio_fatorial));
        }
        else{
            total_serie += ((pow(x,inicio_fatorial))/fatorial(inicio_fatorial));
        }
        inicio_fatorial += 2;
	}
    return total_serie;
}

int main(){
    double xs, saida;
    int numero;
    while(scanf("%lf%d", &xs, &numero) && xs != 0 || numero != 0){
        saida = seno(xs, numero);
        printf("%.10lf\n", saida);

    }
}