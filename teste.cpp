#include <stdio.h>

int converte(char *caractere){
	int letra_convertida = *caractere;
	*caractere = letra_convertida;
}

int main(void){
	char caractere;
	int maior = 0;
	
	// Escreva sua solução aqui
    scanf("%c", &caractere);
    maior = converte(&caractere);
    while(scanf("%c", &caractere) && caractere != '0'){
        if(maior < converte(&caractere)){
            maior = converte(&caractere);
        }
    }
	
    printf("%c", maior);
	//printf("...", maior);
	return 0;
}