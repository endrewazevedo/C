#include <stdio.h>

int main(void){
    int tipo, subtipo;
    float entrada;
    scanf("%d%d%f", &tipo, &subtipo, &entrada);

    if(tipo == 1){
        switch (subtipo){
        case 1: printf("%.2f" , entrada*0.4536); break;
        case 2: printf("%.2f" , entrada/0.4536); break;
        case 3: printf("%.2f" , entrada*28.3495); break;
        case 4: printf("%.2f" , entrada/28.3495); break;
        }
    }
    else if(tipo == 2){
        switch (subtipo){
        case 1: printf("%.2f" , entrada*3.7854); break;
        case 2: printf("%.2f" , entrada/3.7854); break;
        case 3: printf("%.2f" , entrada*29.5735); break;
        case 4: printf("%.2f" , entrada/29.5735); break;
        }
    }
    else if(tipo == 3){
        switch (subtipo){
        case 1: printf("%.2f" , entrada*1.6093 ); break;
        case 2: printf("%.2f" , entrada/1.6093 ); break;
        case 3: printf("%.2f" , entrada*0.9144); break;
        case 4: printf("%.2f" , entrada/0.9144); break;
        }
    }
}