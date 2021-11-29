#include <stdio.h>
#include <string.h>

int patronum(char *palavra, char *frase){
	
    int cont_sub = 0;

    for(int i = 0; i < strlen(frase); i++){
        if(palavra[cont_sub] == frase[i]){
            cont_sub++;
            if(cont_sub == strlen(palavra)){
                return 1;
            }
        }else{
            cont_sub = 0;
        }
    }
    return 0;
}

int main(void){
	char palavra[201];
	char frase[201];
	
	scanf("%s ", palavra);
	fgets(frase, 200, stdin);
	
	if(patronum(palavra, frase) == 1){
		printf("o texto fala sobre patronos");
	}else{
		printf("o texto nao fala sobre patronos");
	}
	
}