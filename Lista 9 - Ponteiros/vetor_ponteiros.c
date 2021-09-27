#include <stdio.h>

int main(void)
{
	int *vetor_de_ponteiros[4] = {NULL, NULL, NULL, NULL};
	int vetor_de_inteiros[4] = {1, 2, 3, 4};
	int i;
	
	// Não altere nada antes desta linha!!!
	
	/* Faça cada elemento do vetor de ponteiros
	 * apontar um elemento do vetor de inteiros
	 */

/*     for(i = 0; i < 4; i++){
        vetor_de_ponteiros[i] = vetor_de_inteiros[i];
    }
	  */
 	// Não altere nada depois desta linha!!!
	
	for (i = 0; i < 4; i++) {
		printf("%d ", *vetor_de_ponteiros[i]);
	}
}