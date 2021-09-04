#include <stdio.h>

int primo(int num){
    int teste = 0;
    int count = 2;
    if(num == 1){ return 1;}
    while(num >= count){
        for(int i = 2; i < count/2; i++){
            if(count % i == 0){
                teste++;
            }
        }
        if(teste == 0){
            if(num % count == 0){
                return count;
            }
        }   
        teste = 0;
        count++;
    }
}

int main(){
    int num, numero_primo;
    while(scanf("%d", &num), num){
        if(num == 1){
            printf("1: 1\n");
        }
        else{
            printf("%d:", num);
            while(num != 1){
                numero_primo = primo(num);
                printf(" %d",numero_primo);
                num = num/numero_primo;
            }
            printf("\n");
        }
    }
}