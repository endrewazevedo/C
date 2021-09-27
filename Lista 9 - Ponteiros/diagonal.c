#include <stdio.h>

void imprimir_vetor_ponteiros(int *vetor_ponteiros[], int tam)
{
	for(int i = 0; i < tam; i++){
        printf("%d ", *vetor_ponteiros[i]);
    }
}

void extrair_diagonal(int linhas, int colunas, int matriz[][colunas], int *diagonal[])
{
    int contador = 0;
	for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(i == j){
                *(diagonal + contador) = &matriz[i][j];
                contador++;
            }
        }
    }
}

int main(void)
{
	int i, j;
	
	// Cria a matriz com tamanhos lidos do teclado
	int linhas, colunas;
	scanf("%d%d", &linhas, &colunas);
	int matriz[linhas][colunas];
	
	// Le a matriz
	for (i = 0; i < linhas; i++) {
		for (j = 0; j < colunas; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
	
	// Cria um vetor de ponteiros com tamanho apropriado
	// para guardar a diagonal principal
	int tamanho_diagonal;
	if (linhas < colunas) {
		tamanho_diagonal = linhas;
	}
	else {
		tamanho_diagonal = colunas;
	}
	int *vetor_de_ponteiros[tamanho_diagonal];
	
	// Chama a funcao para "extrair" a diagonal principal
	extrair_diagonal(linhas, colunas, matriz, vetor_de_ponteiros);
	
	// Chama a funcao para imprimir a diagonal principal
	imprimir_vetor_ponteiros(vetor_de_ponteiros, tamanho_diagonal);
}