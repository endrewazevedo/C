#include <stdio.h>
#include <stdlib.h>
#define STR_MAX 80

struct aluno {
    char nome[STR_MAX + 1];
    char sobrenome[STR_MAX + 1];
    int matricula;
};

struct aluno *ler_aluno(void){

    struct aluno *novo_aluno = (struct aluno*) malloc(sizeof(struct aluno));

    scanf("%s", &novo_aluno->nome);
    scanf("%s", &novo_aluno->sobrenome);
    scanf("%d", &novo_aluno->matricula); 

    return novo_aluno;

}

void imprimir_aluno(struct aluno *aluno){

    printf("%s %s %d\n", aluno->nome, aluno->sobrenome, aluno->matricula);

}

int main(){

    struct aluno *alunos;
    struct aluno *maior_aluno = (struct aluno*) malloc(sizeof(struct aluno));
    struct aluno *menor_aluno = (struct aluno*) malloc(sizeof(struct aluno));

    maior_aluno->matricula = 0;
    menor_aluno->matricula = 999999999;

    do{
        alunos = ler_aluno();
        if(alunos->matricula != 0){
        
            if(alunos->matricula > maior_aluno->matricula){
                maior_aluno = alunos;
            }
            if(alunos->matricula < menor_aluno->matricula){
                menor_aluno = alunos;
            }

        }

    }while(alunos->matricula !=0);

    imprimir_aluno(menor_aluno);
    imprimir_aluno(maior_aluno);


}
