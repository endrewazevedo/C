#include <stdio.h>

int juntar_moedas(int galeoes, int sicles, int nuques){
    int nuques_convertidos;
	nuques_convertidos = (493*galeoes)+(29*sicles)+nuques;
	return nuques_convertidos;
}

void separar_moedas(int valor, int *galeoes, int *sicles, int *nuques){
    *galeoes = valor/493;
    *sicles = (valor % 493)/29;
    *nuques = valor - (*galeoes*493) - (*sicles*29);
}

int main(){
    int produtos_comprados, quantidade, galeoes, sicles, nuques, total_compra = 0, total_pagamento = 0;
    int pag_galeoes, pag_sicles, pag_nuques;
    int init_ga = 0, init_si = 0, init_nu = 0;
    while((scanf("%d", &produtos_comprados) && produtos_comprados)){
        for(int i = 0; i < produtos_comprados; i ++){
            scanf("%d %d %d %d", &quantidade, &galeoes, &sicles, &nuques);
            total_compra += juntar_moedas(galeoes, sicles, nuques);
            //printf("compra %d\n", total_compra);
            total_compra *= quantidade;
            //printf("compra x %d", total_compra);
        }
        scanf("%d %d %d", &pag_galeoes, &pag_sicles, &pag_nuques);
        total_pagamento = juntar_moedas(pag_galeoes, pag_sicles, pag_nuques);
        separar_moedas(total_compra, &init_ga, &init_si, &init_nu);
        printf("Valor da compra: %d galeoes, %d sicles, %d nuques\n", init_ga, init_si, init_nu);
        init_ga = 0, init_si = 0, init_nu = 0;
        separar_moedas(total_pagamento, &init_ga, &init_si, &init_nu);
        printf("Pagamento: %d galeoes, %d sicles, %d nuques\n", init_ga, init_si, init_nu);
        init_ga = 0, init_si = 0, init_nu = 0;
        separar_moedas(total_pagamento - total_compra, &init_ga, &init_si, &init_nu);
        printf("Troco: %d galeoes, %d sicles, %d nuques\n", init_ga, init_si, init_nu);
        printf("\n");
        total_compra = 0, total_pagamento = 0;

    }
}