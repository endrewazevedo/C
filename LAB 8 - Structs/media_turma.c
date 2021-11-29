#include <stdio.h>


typedef struct aluno Aluno;

struct aluno{

    char nome[81];
    
    char matricula[8];

    char turma;

    float p1, p2, p3;

};

void imprime_media(int n, Aluno* tipoAlunos, char turma){
    float media = 0;
    float alunoTurma = 0;
    for(int i = 0; i < n; i++){
        if(tipoAlunos[i].turma == turma){
            media += (tipoAlunos[i].p1 + tipoAlunos[i].p2 + tipoAlunos[i].p3)/3;
            alunoTurma++;
        }
    }
    if(alunoTurma == 0){
        printf("0.00");
    }else{
        printf("%.2f", media/alunoTurma);
    }
   
}

int main(){

    int qAlunos;
    int qTurmas;

    scanf("%d", &qAlunos);

    Aluno tipoAlunos[qAlunos];

    for(int i = 0; i < qAlunos; i++){

        scanf("%s", tipoAlunos[i].nome);
        scanf("%s", tipoAlunos[i].matricula);
        scanf(" %c", &tipoAlunos[i].turma);
        scanf("%f%f%f", &tipoAlunos[i].p1, &tipoAlunos[i].p2, &tipoAlunos[i].p3);

    }

    scanf("%d", &qTurmas);

    char turma;

    for(int i = 0; i < qTurmas; i++){
        scanf(" %c", &turma);
        imprime_media(qAlunos, tipoAlunos, turma);
        printf("\n");
    }

}