#include <stdio.h>

int conta_nivel(int xp){
    int indice = 1;
    while(xp > 0){
        xp -= indice;
        indice++;
        printf("%d\n", xp);
    }
    return indice;
}

int main(){
    double xp, prox_nivel;

    while(scanf("%lf", &xp) && xp != -1){
        if(xp < 45){
            printf("%d", conta_nivel(xp));
        }
    }
}