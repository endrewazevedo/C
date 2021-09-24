#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char caractere;
    while( (caractere = getchar()) != EOF ){
        if(isalpha(caractere) != 0 || 
            isdigit(caractere) != 0 ||
            caractere == ' ' ||
            caractere == '.' ||
            caractere == ',' || 
            caractere == ';' || 
            caractere == '!' || 
            caractere == '?' ){
            printf("%c" , caractere);
    }
    }
}