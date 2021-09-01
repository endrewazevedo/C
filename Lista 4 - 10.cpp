#include <stdio.h>

int main(){
	int mes, ano;
	
	while(mes != 0 && ano != 0){
		scanf("%d%d", &mes, &ano);
        if(mes != 0 && ano != 0){
            switch(mes){
			case 1: printf("31"); break;
			case 2: if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
			printf("29"); break;
			}
			else{
				printf("28"); break;
			}
			case 3: printf("31"); break;
			case 4: printf("30"); break;
			case 5: printf("31"); break;
			case 6: printf("30"); break;
			case 7: printf("31"); break;
			case 8: printf("31"); break;
			case 9: printf("30"); break;
			case 10: printf("31"); break;
			case 11: printf("30"); break;
			case 12: printf("31"); break;
			}
        printf("\n");
        }
	}
}