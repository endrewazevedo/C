#include <stdio.h>

int ler_matriz(int linha, int coluna, int matriz[][coluna]){

    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
          scanf("%d ", &matriz[i][j]);
        }
    }

}

int imprime_matriz(int linha, int coluna, int matriz[][coluna]){

    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
          printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}




int main(){

    int tamanho;

    scanf("%d", &tamanho);

    int linha, coluna;

    linha = tamanho;

    coluna = tamanho;
    
    int matriz[linha][coluna];

    ler_matriz(linha, coluna, matriz);
    printf("\n");
    imprime_matriz(linha, coluna, matriz);    


}