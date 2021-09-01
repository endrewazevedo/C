#include <stdio.h>

int gemeos(int p, int q){
	if(p == q-2 || q == p-2){
		return 1;
	}
	else{
		return 0;
	}
}

int primo(int a){
   if(a == 1){ return 0;}
	for(int i = 2; i < a; i++){
		if(a % i == 0 && i != a){
			return 0;
		}
	}
	return 1;
}

int main(){
	int num1, num2;
	while(scanf("%d%d", &num1, &num2) && num1 || num2){
		if(gemeos(num1, num2) == 0){
			printf("%d e %d nao sao gemeos\n", num1, num2);
		}
		else if(gemeos(num1, num2) == 1){
			if(primo(num1) == 1 && primo(num2) == 1){
				printf("%d e %d sao gemeos\n", num1, num2);
			}
            else{
                printf("%d e %d nao sao gemeos\n", num1, num2);
            }
		}
	}
}