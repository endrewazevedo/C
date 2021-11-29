#include <stdio.h>

int ler_matriz(int tamanho, int matriz[][tamanho]){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}


int verifica_magico(int tamanho, int matriz[][tamanho]){
    int soma = 0, testes = 0;
    for(int i = 0; i < tamanho; i++){ // vamos fazer a soma da primeira coluna;
        soma += matriz[i][0];
    }

    for(int i = 0; i < tamanho; i++){ // verifica as linhas;
        for(int j = 0; j < tamanho; j++){
            testes += matriz[i][j];
        }
        if(testes != soma){
            return 0;
        }
        testes = 0;
    }
    testes = 0;

    for(int j = 0; j < tamanho; j++){ // verifica as colunas;
        for(int i = 0; i < tamanho; i++){
             testes += matriz[i][j];
        }
        if(testes != soma){
            return 0;
        }
        testes = 0;
    }

    testes = 0;

    for(int i = 0; i < tamanho; i++){ // verifica diagonal principal
        for(int j = 0; j < tamanho; j++){
            if(i == j){
                testes += matriz[i][j];
            }
        }   
    }

    if(testes != soma){
        return 0;
    } 

    testes = 0;

    int perc_secundaria = tamanho;
    for(int i = 0; i < tamanho; i++){ // verifica diagonal secundaria
        testes += matriz[i][perc_secundaria - 1];
        perc_secundaria--;
        }

        if(testes != soma){
            return 0;
        }
    return 1;  
}

int main(){
    int tamanho;
    while(scanf("%d", &tamanho) && tamanho){
        int matriz[tamanho][tamanho];
        ler_matriz(tamanho, matriz);
        if(verifica_magico(tamanho, matriz) == 1){
            printf("sim");
        }
        else{
            printf("nao");
        }
        printf("\n");
    }
}