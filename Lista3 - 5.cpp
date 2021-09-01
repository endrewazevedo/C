#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n+1; i++){
        for(int j = 0; j < n; j++){
            if(j < i){
			printf("*");
		    }
		    else{
			printf(".");
		    }
        }
        printf("\n");
	}
}