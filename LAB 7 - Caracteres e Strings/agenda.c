#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compara_agenda(char** agenda, char** comparacao, int indice, int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(strcmp(agenda[i], comparacao[indice]) == 0){
            return 1;
        }
    }
    return 0;
}


int main(){
    
    char **agenda;
    agenda = malloc(sizeof(char * ) * 10000);
    int num_pessoas;
    scanf("%d", &num_pessoas);
    for(int i = 0; i < num_pessoas; i++){
        agenda[i] = malloc(11 * sizeof(char));
        scanf("%s", agenda[i]);
    }

    char **agenda_2;

    agenda_2 = malloc(sizeof(char * ) * 10000);

    int num_pessoas_2;

    scanf("%d", &num_pessoas_2);

    for(int i = 0; i < num_pessoas_2; i++){
        agenda_2[i] = malloc(11 * sizeof(char));
        scanf("%s", agenda_2[i]);
    }

    for(int i = 0; i < num_pessoas_2; i++){
        if(compara_agenda(agenda, agenda_2, i, num_pessoas) == 1){
            printf("SIM\n");
        }
        else{
            printf("NAO\n");
        }
    }

}