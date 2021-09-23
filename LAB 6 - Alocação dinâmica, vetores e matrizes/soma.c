#include <stdio.h>
#include <stdlib.h>


int* soma(int * x1, int * x2, int n){

    int *vet_soma;

    vet_soma = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        *(vet_soma + i) = x1[i] + x2[i];
	}
	
	return vet_soma;
}


int main(){

    int n;

    scanf("%d", &n);

    int vet1[n], vet2[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vet1[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &vet2[i]);
    }
    
	int *vetor3 = soma(vet1, vet2, n);

    for(int i = 0; i < n; i++){
	
    	printf("%d ", *(vetor3 + i));

    }

}