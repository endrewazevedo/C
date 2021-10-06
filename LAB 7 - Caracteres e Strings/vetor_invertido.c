#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void inverte(char* frase, char* invertido){
    int tamanho = strlen(frase);
    for(int i = 0, posicao = 0; i < tamanho; i++, posicao++){
        invertido[i] = frase[tamanho-i-1];
    }
}


int main(){
    int num_caracteres;
    scanf("%d\n", &num_caracteres);
    char *frase;
    frase = malloc(num_caracteres+1 * sizeof(char));     
    char *invertido =  malloc(num_caracteres * sizeof(char));; 
    for(int i = 0; i < num_caracteres; i++){
        scanf("%[^\n]", &frase[i]);
    }
    inverte(frase, invertido);
    for(int i = 0; i < strlen(invertido); i++){
        printf("%c", invertido[i]);
    }

}