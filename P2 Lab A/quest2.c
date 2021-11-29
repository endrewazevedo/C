#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    float meio = m/2;
    int matriz[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(j >= meio && j % 2 != 0){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}