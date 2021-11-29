#include <stdio.h>
#include <string.h>

#define AME "Amelisia"
#define BER "Bertinhao"
#define EMP "EMPATE"

int pontos(char pontuacao[81]){
    int cont = 0;
    for (int i = 0; i < strlen(pontuacao); i++){
        if (pontuacao[i] == '|'){
            cont++;
        }
        if (pontuacao[i] == 'x'){
            cont--;
        }
    }
  return cont;
}

int main(){
    char pontuacao[80];
    int N;
    int venceuA = 0, venceuB = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        int pontosA = 0, pontosB = 0;
    
        scanf("%s", pontuacao);
        pontosA = pontos(pontuacao);
    
        scanf("%s", pontuacao);
        pontosB = pontos(pontuacao);

        if(pontosB > pontosA){
            venceuB++;
        }
        else if(pontosA > pontosB){
            venceuA++;
        }else{
            venceuA++;
            venceuB++;
        }
    }
    if(venceuA > venceuB){
        printf("%s", AME);
    }
    else if(venceuB > venceuA){
        printf("%s", BER);
    }else{
        printf("%s", EMP);
    }
}