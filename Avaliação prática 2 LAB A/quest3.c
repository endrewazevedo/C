#include <stdio.h>

void acha_quadrado(int n, int k, int matriz[][n]){
    int soma = 0, i = 0;
    while(i < n){
        for(int j = 0; j < n; j++){
            soma += matriz[i][j];
        }

        for(int j = 0; j < n; j++){
            if(matriz[i][j] == 0){
                matriz[i][j] = k - soma;
            }
        }
        soma = 0;
        i++;
    }
}


int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    acha_quadrado(n, k, matriz);

    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
}