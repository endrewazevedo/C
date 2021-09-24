#include <stdio.h>
#include <math.h>

void lei_cos(float b,float c,float theta, float *a){
	
	*a = (b*b)+(c*c)-(2*b*c*cos(theta));
}


int main(){
	float a, b, c, theta;
    scanf("%f%f%f", &b, &c, &theta);
    lei_cos(b, c, theta, &a);
    printf("%f", sqrt(a));
	
}