#include <stdio.h>
#include <stdlib.h>

void inverte(char *frase){
    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] == ' '){
            
        }
        else if(frase[i] > 92){
            frase[i] = frase[i] - 32;
        }else{
            frase[i] = frase[i] + 32;
        }
    }
}

int main(){
    char frase[100];
    scanf("%[^\n]", frase);
    inverte(frase);
    printf("%s", frase);
}