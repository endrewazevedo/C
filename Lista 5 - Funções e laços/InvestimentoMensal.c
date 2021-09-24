#include <stdio.h>

double investimento(double deposito){
    double inicial = deposito;
    double juros_deposito = (deposito/100)*1.2;
    inicial += juros_deposito;
    return inicial;
}

int main(){
    double deposito;
    int mes;
    scanf("%lf%d", &deposito, &mes);
    for(int i = 1; i < mes+1; i++){
        printf("%.2lf\n", investimento(deposito));
        deposito = investimento(deposito);
    }
}