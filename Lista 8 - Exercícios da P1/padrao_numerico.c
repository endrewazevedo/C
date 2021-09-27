#include <stdio.h>

int primo(int a){
   if(a == 1){ return 0;}
	for(int i = 2; i <= a/2; i++){
		if(a % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
    int m, n, sequencia = 1, diagonal = 1;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == j){
                printf("%02d " , diagonal);
                diagonal++;
                sequencia++;
            }
            else if(primo(sequencia) == 1){
                printf("PP ");
                sequencia++;
            }
            else{
                printf("%02d ", sequencia);
                sequencia++;
            }
            if(sequencia == 100){
                sequencia = 0;
            }
            if(diagonal == 100){
                diagonal = 0;
            }
        }
        printf("\n");
    }
}