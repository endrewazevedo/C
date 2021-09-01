#include <stdio.h>

int parar(int x, int y, int criterio){
    if(criterio == 1){
        if(x < 0 || y < 0){
            return 1;
        }
    }
    else if(criterio == 2){
        if(x < 0 && y < 0){
            return 1;
        }
    }
    else if(criterio == 3){
        if(x > y){
            return 1;
        }
    }
    return 0;
}

int main(){
    int x, y, criterio;
    scanf("%d", &criterio);
    while(scanf("%d%d", &x, &y), parar(x, y, criterio) == 0){
        printf("%d + %d = %d\n", x, y, x+y);
    }
}