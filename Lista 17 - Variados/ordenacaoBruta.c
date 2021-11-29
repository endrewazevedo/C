#include <stdio.h>
#include <string.h>

// INCOMPLETO NÃO

void ordena(int *N, int tamanho){
    int flag = 0;
    int aux;
    while(flag != tamanho - 1){
        for(int i = 0; i < tamanho; i++){
            if(N[i] > N[i + 1]){
                aux = N[i + 1];
                N[i + 1] = N[i];
                N[i] = aux;
            }
            else{
                flag++;
            }
        }
        flag = 0;
        if(flag == tamanho -1){
            return;
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
        for(int i = 0; i < N; i++){
            printf("%d ", lista[i]);
    }

		// Escreva o resto da sua solução aqui
		// Sugestão: crie uma função chamada ordena() para
		//     ajudar a resolver o exercício.
	}
}