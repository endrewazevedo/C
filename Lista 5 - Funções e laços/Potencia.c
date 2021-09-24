#include <stdio.h>

double potencia(double base, int expoente){
    double total = base;
    if(expoente == 0){
        return 1;
    }
    for(int i = 1; i < expoente; i++){
        total *= base;
    }
    return total;
}

int main(){
    double base, resultado; 
    int expoente;
    while(scanf("%lf%d", &base, &expoente) && base != -1 || expoente != - 1){
        resultado = potencia(base, expoente);
        printf("%.2lf\n", resultado);
    }
}