#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int n, int *vet, double media, int *maior, int *menor){
    for(int i = 0; i < n; i++){
        if(vet[i] > media){
            *maior = *maior+1;
        }
        if(vet[i] < media){
            *menor = *menor+1;
        }
    }
}

int main(){
    int vet[100], n, maior = 0, menor = 0; 
    double media = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
        media += vet[i];
    }
    media /= n;
    maiorMenor(n, vet, media, &maior, &menor);
    printf("%d %d", menor, maior);
}