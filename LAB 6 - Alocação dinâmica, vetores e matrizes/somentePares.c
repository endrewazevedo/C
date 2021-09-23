#include <stdio.h>
#include <stdlib.h>

int* somente_pares (int n, int * v, int *npares){
    int contador = 0;
    int *vet_pares;
    vet_pares = malloc(*npares * sizeof(int));
	for(int i = 0; i < n; i++){
		if(v[i] % 2 == 0){
            *(vet_pares + contador) = v[i];
            contador++;
        }
	}
    return vet_pares;
}


int main(){
	int n;

	scanf("%d", &n);

	int vet[n], npares = 0;

	for(int i = 0; i < n; i++){
		scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0){
            npares++;
        }
	}

    int *vetor_pares = somente_pares(n, vet, &npares);

    for(int i = 0; i < npares; i++){
	
    	printf("%d ", *(vetor_pares + i));

    }

}


