#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int substring(char *sub, char *string){
    int cont_sub = 0;

    for(int i = 0; i < strlen(string); i++){
        if(sub[cont_sub] == string[i]){
            cont_sub++;
            if(cont_sub == strlen(sub)){
                return 1;
            }
        }else{
            cont_sub = 0;
        }
    }
    return 0;
}


int main(){
    char string[201], sub[201];
    while(scanf("%s", sub) && strcmp(sub, "FIM") != 0){
        scanf("%s", string);
        if(substring(sub, string) == 1){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    }
}