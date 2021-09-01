#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *A, float *P){
    *A = (3*l*sqrt(3))/2;
    *P = 6*l;
}

int main(){
    float l, A, P;
    scanf("%f", &l);
    calcula_hexagono(l, &A, &P);
    printf("Area: %.2lf, Perimetro: %.2lf", A, P);
}