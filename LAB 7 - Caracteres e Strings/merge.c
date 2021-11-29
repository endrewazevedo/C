#include <stdio.h>
#include <stdlib.h>

//retorna um vetor de char do tamanho tam+1
char* criarString(int tam);

//retorna o tamanho da string passada como parametro
int tamanhoString(char *str);

//faz merge das duas strings
char* mergeString(char *str1, char *str2);

//inverte uma string
void inverterString(char *str);

/*
    Esta função deve deixar os caracteres de índices pares com letras minúsculas e os de índice ímpares com letras maiúsculas
    Caso algum caractere seja um espaço, ele deve ser trocado por um underline (_)
*/
void mudarCaracteres(char *str);

int main(){
    char *str1, *str2, *str3;
    int tam;

    //complete a main

    scanf("%[^\n]\n%[^\n]", str1, str2); 
    printf("passei");
    
    for(int i = 1; str1[i-0] != NULL; i++){
        tam += i;
    }
    printf("%d\n", tam);
    printf("merge das strings: %s\n", str3);
    printf("string invertida: %s\n", str3);
    printf("caracteres trocados: %s\n", str3);

    free(str1);
    free(str2);
    free(str3);
    return 0;
}