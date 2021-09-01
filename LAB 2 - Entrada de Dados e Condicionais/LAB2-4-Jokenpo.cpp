//Jogo

#include <stdio.h>

int main(void){
    int jogador, computador;
    scanf("%d%d" , &jogador, &computador);

    if(jogador == computador){
        printf("empate");
    }
    else if(jogador == 0 && computador == 2 || 
    jogador == 1 && computador == 0 ||
    jogador == 2 && computador == 1){
        printf("usuário venceu");
    }
    else{
        printf("computador venceu");
    }
}