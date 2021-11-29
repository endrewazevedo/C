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

    return novo_filme;
}

//Função que reorganiza o vetor para impedir "buracos"
void organiza_vetor(Filme** f, int posicao, int tamanho){

    posicao -= 1;

    while(posicao != tamanho){

        f[posicao] = f[posicao+1];
        f[posicao+1] = NULL;
        posicao++;

    }

}

//Função que verifica se o filme é/possui o gênero terror
int eh_terror(char *genero){

    char *comparacao; //ponteiro para verificar se o gênero é terror

    comparacao = strstr(genero, "Terror"); //Caso haja ocorrencia da palavra "Terror" o ponteiro irá apontar para NULL

    return comparacao;

}

//Função que lê a faixa etaria e verifica se o gênero de terror corresponde com a faixa
int ler_faixaetaria(char *genero){

    int faixa;

    int terror = eh_terror(genero);

    if(terror != NULL){
        while(scanf("%d", &faixa), faixa < 18){
            printf("Faixa inválida!\n");
            printf("Faixa: ");
        }
    }
    else{
        scanf("%d", &faixa);
    }

    return faixa;

}

//Função que exclui um filme e libera memória
void free_filme(Filme* f){

    free(f); 
    f = NULL;

}

//função que imprime informações de um filme
void imprimir_filme(Filme* f){

    if(f != NULL){ //Caso não seja nulo, irá imprimir as informações 

        printf("%.2f R$ || %s (%s, %d) || %s %d\n", f->preco, f->nome, f->informacoes->genero, f->informacoes->faixaEtaria, f->informacoes->diretor, f->informacoes->ano);

    }
}

// Função que imprime a tabela atualizada dos filmes cadastrados
// código -- preço R$ ## nome (gênero, faixa etária) ## diretor ano
void print_tabela(Filme** tabela, int tam){

    printf("-------------TABELA DE FILMES-------------\n\n");

    for(int i = 0; i < tam; i++){
    
        printf("%.4d -- ", i+1); //código de 4 caracteres

        imprimir_filme(tabela[i]);
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

//Função que atualiza as informações de um filme
void atualiza_filme(Filme* f, int opcao){
    char nome[101];

    char diretor[101];

    char genero[51];

    float preco;

    if(opcao == 1){ //Opcao que altera o titulo e obrigatoriamente altera o diretor

        printf("Qual o novo nome do Titulo?\n");

        scanf(" %[^\n]", nome);

        set_nome(f, nome);

        printf("Qual o novo nome do Diretor?\n");

        scanf(" %[^\n]", diretor);

        set_diretor(f, diretor);

    }

    else if(opcao == 2){ //Opcao que altera o preco

        printf("Qual o novo preco?\n");

        scanf("%f", &preco);

        set_preco(f, preco);

    }

    else if(opcao == 3){
        printf("Qual o novo genero?\n");

        scanf(" %[^\n]", genero);

        set_genero(f, genero);

        if(f->informacoes->faixaEtaria < 18 && eh_terror(genero)){ // Caso o novo genero seja/contenha terror a faixa etária mudará automaticamente para 18
            f->informacoes->faixaEtaria = 18;
        }
    }
}