#include <stdio.h>


typedef struct aluno Aluno;

struct aluno{

    char nome[81];
    
    char matricula[8];

    char turma;

    float p1, p2, p3;

};

void imprime_aprovados(int n, Aluno* tipoAlunos){
    for(int i = 0; i < n; i++){
        float media = (tipoAlunos[i].p1 + tipoAlunos[i].p2 + tipoAlunos[i].p3)/3;
        if(media >= 6){
            printf("%s\n", tipoAlunos[i].nome);
            printf("%s\n", tipoAlunos[i].matricula);
            printf("%c\n", tipoAlunos[i].turma);
            printf("%.2f\n", media);
            printf("\n");
        }
        media = 0;
    }

}

int main(){

    int qAlunos;

    scanf("%d", &qAlunos);

    Aluno tipoAlunos[qAlunos];

    for(int i = 0; i < qAlunos; i++){
        scanf("%s", tipoAlunos[i].nome);
        scanf("%s", tipoAlunos[i].matricula);
        scanf(" %c", &tipoAlunos[i].turma);
        scanf("%f%f%f", &tipoAlunos[i].p1, &tipoAlunos[i].p2, &tipoAlunos[i].p3);
    }
    imprime_aprovados(qAlunos, tipoAlunos);

}