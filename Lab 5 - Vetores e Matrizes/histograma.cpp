// Escreva uma função para preencher um vetor com 10 elementos que represente o histograma destas medidas.
//O primero elemento do vetor deve armazenar o número de medidas  maiores ou iguais a 0 e menores que 0.1,
//o segundo elemento deve armazenar o número de medidas maiores ou iguais a 0.1 e menores que 0.2 e assim por diante.
//A função deve receber o vetor, v, com as n medidas do exeperimento e deve preencher o vetor h que, sabe-se, tem dimensão igual a 10.

#include <stdio.h>
#define N 100

void histograma(int n, float *v, int *h){
    for(int i = 0; i < n; i++){
        if(v[i] >= 0 && v[i] < (float) 0.1){
            h[0] = h[0] + 1;
        }
        else if(v[i] < (float) 0.2){
            h[1] = h[1] + 1;
        }
        else if(v[i] < (float) 0.3){
            h[2] = h[2] + 1;
        }
        else if(v[i] < (float) 0.4){
            h[3] = h[3] + 1;
        }
        else if(v[i] < (float) 0.5){
            h[4] = h[4] + 1;
        }
        else if(v[i] < (float) 0.6){
            h[5] = h[5] + 1;
        }
        else if(v[i] < (float) 0.7){
            h[6] = h[6] + 1;
        }
        else if(v[i] < (float) 0.8){
            h[7] = h[7] + 1;
        }
        else if(v[i] < (float) 0.9){
            h[8] = h[8] + 1;
        }
        else if(v[i] < 1){
            h[9] = h[9] + 1;
        }
    }
}

int main(){
    int n, h[10];
    float v[N];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }
    for(int i = 0; i < 10; i++){
        h[i] = 0;
    }
    histograma(n, v, h);
    for(int i = 0; i < 10; i++){
        printf("%d ", h[i]);
    }
}