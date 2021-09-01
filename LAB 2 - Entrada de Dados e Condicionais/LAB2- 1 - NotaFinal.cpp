//Nota final.

#include <stdio.h>

int main(void){
	
	float nota1, nota2, nota3;
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	
	if((nota1+nota2)/2 >= 5 && nota1 > 3 && nota2 > 3 ){
		printf("Aprovado\nMedia: %.2f" ,(nota1+nota2)/2);
	}
	else{
		if(nota1 > nota2){
			if((nota1+nota3)/2 >= 5){
				printf("Aprovado\nMedia: %.2f" ,(nota1+nota3)/2);
			}
			else{printf("Reprovado\nMedia: %.2f" ,(nota1+nota3)/2);}
		}
		else{
			if((nota2+nota3)/2 >= 5){
				printf("Aprovado\nMedia: %.2f" ,(nota2+nota3)/2);
			}
			else{printf("Reprovado\nMedia: %.2f" ,(nota2+nota3)/2);}
		}
	}
	
	
	
}