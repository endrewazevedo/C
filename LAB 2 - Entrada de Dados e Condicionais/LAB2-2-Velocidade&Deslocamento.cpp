//Velocidade e Deslocamento.

#include <stdio.h>

int main(void){
	float s0, v0, a, t;
	scanf("%f%f%f%f" , &s0, &v0, &t, &a);

    printf("%f", (s0+(v0*t)+(a*t*t)/2));
    printf("\n%f", v0+(a*t));
}