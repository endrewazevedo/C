#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void inverte(char* frase, char* invertido){
    for(int i = 0; i < strlen(frase); i++){
        if(isblank(frase[strlen(frase)-i-1]) == 1){
            i++;
        }
        *(invertido + i) = frase[strlen(frase)-i-1];
    }
}


int main(){
    int num_caracteres;
    scanf("%d\n", &num_caracteres);
    char *frase;
    frase = malloc(num_caracteres+1 * sizeof(char));     
    char *invertido =  malloc(num_caracteres * sizeof(char));; 
    fgets(frase, num_caracteres, stdin);
    inverte(frase, invertido);
    for(int i = 0; i < strlen(frase); i++){
        printf("%c", invertido[i]);
    }

}