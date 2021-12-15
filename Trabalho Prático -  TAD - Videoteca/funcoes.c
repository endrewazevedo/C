#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

typedef struct info {
    char diretor[101]; //101 caracteres + 1 para fim de string
    char genero[51]; //50 caracteres + 1 para fim de string
    int ano;
    int faixaEtaria; // Use 0 para classificação livre
} Info;

typedef struct filme{
    char nome[101]; //100 caracteres + 1 para fim de string
    float preco; // Até duas casas decimais
    Info* informacoes; // Ponteiro para struct Info
} Filme;

//Criação de um ponteiro e Alocação da memória para a criação de um novo filme
Filme* criar_filme(){

    Filme *novo_filme = malloc(sizeof(Filme));

    if(novo_filme == NULL){
        exit(1);
    }

    novo_filme->informacoes = malloc(sizeof(Info));

    char nome_filme[101];
    printf("Nome: ");
    scanf(" %[^\n]", nome_filme);
    set_nome(novo_filme, nome_filme);

    float preco;
    printf("preco: ");
    scanf("%f", &preco);
    set_preco(novo_filme, preco);

    char diretor[101];
    printf("Diretor: ");
    scanf(" %[^\n]", diretor);
    set_diretor(novo_filme, diretor);

    int ano;
    printf("Ano: ");
    scanf("%d", &ano);
    set_ano(novo_filme, ano);

    char genero[51];
    printf("Genero: ");
    scanf(" %[^\n]", genero);
    set_genero(novo_filme, genero);

    printf("Faixa etaria: ");
    int faixa_etaria;
    if(strstr(genero, "Terror") != NULL){
        while(scanf("%d", &faixa_etaria), faixa_etaria < 18){
            printf("Faixa inválida!\n");
            printf("Faixa: ");
        }
    }
    else{
        scanf("%d", &faixa_etaria);
    }
    
    set_faixaetaria(novo_filme, faixa_etaria);

    return novo_filme;

}

//Função que exclui um filme e libera memória
void free_filme(Filme* f){

    free(f); 
    f = NULL;
    free(f->informacoes);
    f->informacoes = NULL;

}

//função que imprime informações de um filme
void imprimir_filme(Filme* f){

    if(f != NULL){ //Caso não seja nulo, irá imprimir as informações 

        printf("%.2f R$ || %s (%s, %d) || %s %d\n", f->preco, f->nome, f->informacoes->genero, f->informacoes->faixaEtaria, f->informacoes->diretor, f->informacoes->ano);

    }
}

//função que acessa e modifica o nome de um filme
void set_nome(Filme* f, char* novo){

    strcpy(f->nome, novo);
    
}

//função que acessa e modifica o preço de um filme
void set_preco(Filme* f, float novo){

    f->preco = novo;
}

//função que acessa e modifica o diretor de um filme
void set_diretor(Filme* f, char* novo){

    strcpy(f->informacoes->diretor, novo);
}

//função que acessa e modifica o genero de um filme
void set_genero(Filme* f, char* novo){

    strcpy(f->informacoes->genero, novo);
}

//função que acessa e modifica o ano de um filme
void set_ano(Filme* f, int novo){

    f->informacoes->ano = novo;

}

//função que acessa e modifica a faixa etaria de um filme
void set_faixaetaria(Filme* f, int novo){

    f->informacoes->faixaEtaria = novo;

}

