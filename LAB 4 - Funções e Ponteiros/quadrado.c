#include <stdio.h>

void quadrado(int *num){
	*num = *num**num;
}

int main(){
	int num;
	scanf("%d", &num);
	quadrado(&num);
	printf("%d", num);
}