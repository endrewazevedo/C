#include <stdio.h>


typedef struct Vetor{

    int x, y, z;

} Vetor;


float escalar(Vetor* vetor1, Vetor* vetor2){

    int soma_x = vetor1[0].x * vetor2[0].x;
    int soma_y = vetor1[0].y * vetor2[0].y;
    int soma_z = vetor1[0].z * vetor2[0].z;
    
    return soma_x + soma_y + soma_z;

}


int main(){
    
    Vetor vetor1[1], vetor2[1];
    scanf("%d", &vetor1[0].x);
    scanf("%d", &vetor1[0].y);
    scanf("%d", &vetor1[0].z);

    scanf("%d", &vetor2[0].x);
    scanf("%d", &vetor2[0].y);
    scanf("%d", &vetor2[0].z);


    printf("%.2f", escalar(vetor1, vetor2));
}