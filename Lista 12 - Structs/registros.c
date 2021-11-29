#include <stdio.h>

typedef struct registros{
    int umInt;
    float umFloat;
} Registros;

void imprimi_contrario(int tamanho, Registros* vetor){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[tamanho - 1 - i].umInt);
    }
}

float soma_float(int tamanho, Registros* vetor){
    float soma_total = 0;

    for(int i = 0; i < tamanho; i++){
        soma_total += vetor[i].umFloat;
    }

    return soma_total;
}

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    Registros vetor[tamanho];
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i].umInt);
        scanf("%f", &vetor[i].umFloat);
    }
    imprimi_contrario(tamanho, vetor);
    printf("\n");
    printf("%.4f", soma_float(tamanho, vetor));
    
}