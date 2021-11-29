#include <stdio.h>
#include <stdlib.h>

void preenche_vetor(int tamanho, int *vetor){
    for(int i = 0; i <= tamanho; i++){
        vetor[i] = i;
    }
}

void exibir_vetor(int tamanho, int *vetor){
    for(int i = 0; i <= tamanho; i++){
        printf("%d ", vetor[i]);
    }
}

void zerar_multiplos(int tamanho, int *vetor, int numero, int *contador){
    for(int i = 0; i <= tamanho; i++){
        if(vetor[i] % numero == 0 && vetor[i] != 0){
            vetor[i] = 0;
            *contador = *contador - 1;
        }
    }
}

int main(){
    int *vet, tamanho, num_testes, num_mult;

    scanf("%d", &tamanho);

    int contador = tamanho;

    vet = malloc((tamanho+1) * sizeof(int));

    preenche_vetor(tamanho, vet);

    scanf("%d", &num_testes);

    for(int i = 0; i < num_testes; i++){
        scanf("%d", &num_mult);
        zerar_multiplos(tamanho, vet, num_mult, &contador);
    }
/*     while(scanf("%d", &num_mult) && num_testes){
        zerar_multiplos(tamanho, vet, num_mult);
        num_testes--;
        printf("%d\n", num_testes);
    }
 */

    printf("%d", contador);

}