#include <stdio.h>

typedef struct cores{

    int r, g, b;

} Cores;

float calcula_cor(Cores vetor){
    float escala_cinza;
    escala_cinza = ((0.3*vetor.r) + (0.59 * vetor.g) + (0.11*vetor.b))/255;
    return escala_cinza;
}

int main(){

    Cores vetor_cores;
    while(scanf("%d", &vetor_cores.r), vetor_cores.r != -1 ){

        scanf("%d", &vetor_cores.g);

        scanf("%d", &vetor_cores.b);

        printf("%.3f", calcula_cor(vetor_cores));

        printf("\n");

    }
    
}