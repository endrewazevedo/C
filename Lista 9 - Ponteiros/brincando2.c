#include <stdio.h>

int main(void)
{
	int i;
	int tamanho;
	scanf("%d", &tamanho);
	
	int vetor_de_inteiros[tamanho];
	int *vetor_de_ponteiros[tamanho];
	
	for (i = 0; i < tamanho; i++) {
		scanf("%d", &vetor_de_inteiros[i]);
	}
	
	// Não altere nada antes desta linha
	
	/* Faça cada elemento do vetor de ponteiros apontar
	 * para um elemento do vetor de inteiros na ordem inversa
	 */
    for(int j = 0; j < 4; j++){
        *(vetor_de_ponteiros+j) = &vetor_de_inteiros[tamanho - j - 1];
    }
	 
	 
	// Não altere nada depois desta linha
	
	for (i = 0; i < tamanho; i++) {
		printf("%d ", *vetor_de_ponteiros[i]);
	}
}