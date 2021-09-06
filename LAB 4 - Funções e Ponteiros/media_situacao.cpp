#include <stdio.h>

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
	float porcent_faltas = ( (float) aulas/100)*25;
	char sit_aluno;
	*media = (p1+p2+p3)/3;
	if(faltas > porcent_faltas){
		sit_aluno = 'F';
		return sit_aluno;
	}
	else if(*media < 6.0){
		sit_aluno = 'R';
		return sit_aluno;
	}
	else{
	    sit_aluno = 'A';
		return sit_aluno; 
	}
}

int main(){
	float p1, p2, p3, media;
	int faltas, aulas;
	scanf("%f %f %f %d %d", &p1, &p2, &p3, &faltas, &aulas);
	situacao(p1, p2, p3, faltas, aulas, &media);
	printf("Media: %.1f, Situacao: %c ", media, situacao(p1, p2, p3, faltas, aulas, &media));
}