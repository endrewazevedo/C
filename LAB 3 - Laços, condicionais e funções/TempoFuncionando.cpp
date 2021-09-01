#include <stdio.h>

int main(){
	int npessoa, pinstante, ninstante, tempo = 10;
	
	scanf("%d", &npessoa);
	scanf("%d", &pinstante);
	
	for(int i = 1; i < npessoa; i++){
		scanf("%d", &ninstante);
		if((ninstante-pinstante) < 10){
			tempo += ninstante-pinstante;
		}
		else{
			tempo += 10;
		}
		pinstante = ninstante;
	}
	printf("%d", tempo);
}