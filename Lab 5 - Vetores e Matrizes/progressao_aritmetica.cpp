//Implemente uma função que receba como parâmetros um vetor de números inteiros vet e seu números de elementos n, 
//e verifique se os elementos do vetor correspondem aos termos de uma PA (progressão aritmética)
//Caso os elementos do vetor correspondam aos termos de uma PA, a função deve retornar o valor calculado para k. Caso o vetor não corresponda a uma PA, a função deve retornar 0. 

#include<stdio.h>

int testa_PA(int n, int *v){
    int constante_PA;
    constante_PA = v[1] - v[0]; // Define o valor da PA
    for(int i = 2; i < n; i++){
        if((v[i] - v[i-1]) != constante_PA){
            return 0; 
        }
    }
    return constante_PA;
}

int main(){
	int n;
    scanf("%d", &n); 
    int vet[n];
    testa_PA;
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    printf("%d\n",testa_PA(n,vet));

}
