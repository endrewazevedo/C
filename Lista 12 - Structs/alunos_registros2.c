#include <stdio.h>
#include <stdlib.h>

#define STR_MAX 80

struct aluno {
	char nome[STR_MAX + 1];
	char sobrenome[STR_MAX + 1];
	int matricula;
};

// Prototipo para a funcao que le os dados de um aluno
// e retorna um ponteiro para uma struct alocada dinamicamente
struct aluno *ler_aluno(void){

    struct aluno *novo_aluno = (struct aluno*) malloc(sizeof(struct aluno));

    scanf("%s", novo_aluno->nome);
    scanf("%s", novo_aluno->sobrenome);
    scanf("%d", &novo_aluno->matricula); 

    return novo_aluno;
}

// Prototipo para a funcao que recebe um ponteiro para uma
// struct de um aluno e imprime seus dados
void imprimir_aluno(struct aluno *aluno){

    printf("%s %s %d\n", aluno->nome, aluno->sobrenome, aluno->matricula);

}

// Sugestao: faca essa funcao auxilia que pesquisa um aluno
// por um dado numero de matricula. A funcao retorna um ponteiro
// para o registro desse aluno se ele for encontrado e NULL
// caso contrario
struct aluno *procura_por_matricula(struct aluno **turma, int matricula, int tamanho){

    for(int i = 0; i < tamanho; i++){
        if(turma[i]->matricula == matricula){
            return turma[i];
        }
    }
    return NULL;
}

int main(void)
{
	struct aluno **turma;
    int tamanho, matricula;
    scanf("%d", &tamanho);
    turma = malloc((tamanho) * sizeof(struct aluno*));

    for(int i = 0; i < tamanho; i++){
        turma[i] = ler_aluno();
    }
    
    while((scanf("%d", &matricula) && matricula)){
        struct aluno *registro = procura_por_matricula(turma, matricula, tamanho);
        if(registro != NULL){
            imprimir_aluno(registro);
        }else{
            printf("Matricula %d nao encontrada\n", matricula);
        }
    }
}