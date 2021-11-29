#include <stdio.h>


void organiza_vetor(int *f, int posicao, int tamanho){

    while(posicao != tamanho){

        f[posicao] = f[posicao+1];
        f[posicao+1] = NULL;
        posicao++;

    }

}

void removedup(int *lista, int N){
    int cont;
    for(int i = 0; i < N; i++){
        if(lista[i] == lista[i+1]){
            organiza_vetor(lista, i, N);
            cont++;
        }
    }
}


int main(void)
{
	int lista[100];
	int N;
	
	while (scanf("%d", &N), N != 0) {
		
		// Faz a leitura da lista
		for (int i = 0; i < N; i++) {
			scanf("%d", &lista[i]);
		}

        removedup(lista, N);

        for (int i = 0; i < N; i++) {
			printf("%d ", lista[i]);
		}
        printf("\n");
        
		
		// Escreva o resto da sua solução aqui
		// Sugestão: crie uma função chamada ordena() para
		//     ajudar a resolver o exercício.
	}
}