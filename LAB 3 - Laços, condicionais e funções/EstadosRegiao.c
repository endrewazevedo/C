#include <stdio.h>
#include <string.h>

int main(){
    char regiao[15];
    int nRegiao;
    scanf("%s", regiao);
    if(strcmp(regiao,"NORTE") == 0){ nRegiao = 1;}
    else if(strcmp(regiao,"SUDESTE") == 0){ nRegiao = 2;}
    else if(strcmp(regiao,"SUL") == 0){ nRegiao = 3;}
    else if(strcmp(regiao,"CENTRO-OESTE") == 0){ nRegiao = 4;}
    else if(strcmp(regiao,"NORDESTE") == 0){ nRegiao = 5;}
	
	switch(nRegiao){
		case 1: printf("Acre (AC)\nAmapá (AP)\nAmazonas (AM)\nPará (PA)\nRondônia (RO)\nRoraima (RR)\nTocantins (TO)"); break;
		case 2: printf("Espírito Santo (ES)\nMinas Gerais (MG)\nRio de Janeiro (RJ)\nSão Paulo (SP)"); break; 
		case 3: printf("Paraná (PR)\nRio Grande do Sul (RS)\nSanta Catarina (SC)"); break; 
		case 4: printf("Distrito Federal (DF)\nGoiás (GO)\nMato Grosso (MT)\nMato Grosso do Sul (MS)"); break; 
		case 5: printf("Alagoas (AL)Bahia (BA)\nCeará (CE)\nMaranhão (MA)\nParaíba (PB)\nPernambuco (PE)\nPiauí (PI)\nRio Grande do Norte (RN)\nSergipe (SE)"); break; 
	}
}