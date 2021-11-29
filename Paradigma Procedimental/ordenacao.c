#include <stdio.h>

void ordena(int *lista, int N){
    int cont = N-1;
    while(cont != 0){
        for(int i = 0; i < N; i++){
            int aux;
            if(i != N-1){
                if(lista[i] > lista[i+1]){
                    aux = lista[i];
                    lista[i] = lista[i+1];
                    lista[i+1] = aux;
                }else{
                    cont--;
                }
            }

        }

        if(cont != 0){
            cont = N-1;
        }

    }
}

int main(void)
{
	int lista[10];
	int N;
	
	while (scanf("%d", &N), N != 0) {
		
		// Faz a leitura da lista
		for (int i = 0; i < N; i++) {
			scanf("%d", &lista[i]);
		}

        ordena(lista, N);

        for (int i = 0; i < N; i++) {
			printf("%d ", lista[i]);
		}
        printf("\n");
        
		
		// Escreva o resto da sua solução aqui
		// Sugestão: crie uma função chamada ordena() para
		//     ajudar a resolver o exercício.
	}
}