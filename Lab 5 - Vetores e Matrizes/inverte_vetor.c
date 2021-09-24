//Implemente uma função que receba como parâmetro um vetor de números inteiros de tamanho n e inverta a ordem dos elementos armazenados nesse vetor. 

#include <stdio.h>
#define N 100

void inverte(int n, int *vet){
    int vet_invertido[n];
    for(int i = 0; i < n; i++){ // criação de um vetor com os valores invertidos
        vet_invertido[i] = vet[n-i-1];
    }
    for(int i = 0; i < n; i++){ // passando os valores do vetor invertido para o vetor principal
        vet[i] = vet_invertido[i];
    }
}

int main(){
    int n;
    scanf("%d\n", &n); //define o número de elemetos do vetor
    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    inverte(n, vet);
    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
}


