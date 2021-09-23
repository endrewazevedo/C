#include <stdio.h>
#include <stdlib.h>


float* reverso(int n, float* v){
    float *vet_reverso;
    vet_reverso = malloc(n * sizeof(float));
    for(int i = 0; i < n; i++){
        *(vet_reverso + i) =  v[n-i-1];
    }
    return vet_reverso;
}



int main(){

    int n;

    scanf("%d", &n);

    float vet[n];

    for(int i = 0; i < n; i++){
        scanf("%f", &vet[i]);
    }

    float *vetor_reverso = reverso(n, vet);

    for(int i = 0; i < n; i++){
	
    	printf("%.2f ", *(vetor_reverso + i));
		 
    }
    free(reverso);

}