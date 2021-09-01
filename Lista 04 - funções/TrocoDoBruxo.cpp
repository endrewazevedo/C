#include <stdio.h>

int converte_nuques(void){
	int galao, sicles, nuques, nuques_convertidos;
	scanf("%d%d%d", &galao, &sicles, &nuques);
	nuques_convertidos = (493*galao)+(29*sicles)+nuques;
	return nuques_convertidos;
}

int main(){
	int vg, vs, vn, pg, ps, pn,troco_galao, troco_sicles, troco_nuques, nuques_compra, nuques_pagamento, total_nuques;
	nuques_compra = converte_nuques();
	nuques_pagamento = converte_nuques();
	total_nuques = nuques_pagamento - nuques_compra;
	troco_galao = total_nuques/493;
	troco_sicles = (total_nuques % 493)/29;
	troco_nuques = total_nuques - (troco_galao*493) - (troco_sicles*29);
	printf("Seu troco eh %d galeoes, %d sicles e %d nuques, Harry!", troco_galao, troco_sicles, troco_nuques);
	
}