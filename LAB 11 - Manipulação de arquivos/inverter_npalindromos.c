#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo(char *vet){
    int i = 0;
    int j = strlen(vet) - 1;

    while(i < j){
        if(vet[i] != vet[j]){
            return 0; 
        }
        i++;
        j--;
    }
    return 1;
}

void inverter(char *vet){
    int i = 0;
    int j = strlen(vet) - 1;
    char aux; 

    while(i < j){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
        i++;
        j--;
    }
}

int main(){
    FILE *ftext;
    char vet[1024];
    int a, b;
    scanf("%s, vet");
    ftext = fopen(vet, "r+");

    if(!ftext){
        printf("Arquivo nao existe\n");
        return 0;
    }

    vet[1023] = 0;

    while(fgets(vet, 1023, ftext)){
        a = strlen(vet) - 1;
        vet[a] = 0;
        b = palindromo(vet);

        if(b == 1){
            printf("SIM");  
        }else{
            printf("NAO");
        }
        if(!b){
            inverter(vet);
            fseek(ftext, -((a+1)) * sizeof(char), SEEK_CUR);
            fprintf(ftext, "%s\n", vet);
        }
    }

    fseek(ftext, 0, SEEK_SET);
    while(fgets(vet, 1023, ftext)){
        printf("%s", vet);
    }
    fclose(ftext);
    return 0;
}