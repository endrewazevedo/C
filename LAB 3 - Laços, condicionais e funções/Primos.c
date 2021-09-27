#include <stdio.h>

int primo(int a){
    if(a == 1){ return 0;}
	for(int i = 2; i <= a/2; i++){
		if(a % i == 0 && i != a){
			return 0;
		}
	}
	return 1;
}
int main(){
	int numero = 1;
	while(numero != 0){
	    scanf("%d", &numero);
	    if(numero != 0){
	      if(primo(numero) == 1){
	        printf("%d\n", numero);  
	      }
	    }
	}
}