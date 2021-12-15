#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

// Função que imprime a tabela atualizada dos filmes cadastrados
// código -- preço R$ ## nome (gênero, faixa etária) ## diretor ano
void print_tabela(Filme** tabela, int tam){

    printf("-------------TABELA DE FILMES-------------\n\n");

    for(int i = 0; i < tam; i++){
    
        printf("%.4d -- ", i+1); //código de 4 caracteres

        imprimir_filme(tabela[i]);
    }
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

    comparacao = strstr(genero, "Terror"); //Caso não haja ocorrencia da palavra "Terror" o ponteiro irá apontar para NULL

    if(strcmp(comparacao, "Terror") == 0) return 1;

    return 0;

}

//Função que lê a faixa etaria e verifica se o gênero de terror corresponde com a faixa
int ler_faixaetaria(char *genero){

    int faixa;

    int terror = eh_terror(genero);

    if(terror != 0){
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

        if(eh_terror(genero)){ // Caso o novo genero seja/contenha terror a faixa etária mudará automaticamente para 18
           set_faixaetaria(f, 18);
        }
    }
}

int main(){

    Filme** vetor;

    int n, numero_filme;

    printf("Entre com o tamanho da sua tabela: ");

    scanf("%d", &n);

    vetor = malloc(sizeof(Filme*) * n); 

    for(int i = 0; i < n; i++){ //Preencher o vetor de strucs de acordo com o tamanho de filmes informados

        vetor[i] = criar_filme();

    }

    print_tabela(vetor, n);

    int menu = 0; // Variavel que armazena a opção do menu 
    int menu_atualizar; // Variavel que armazena a opção do menu atualizar info

    while(menu != 4){

        printf("\nMENU DE OPCOES\n\n1 - CADASTRAR UM NOVO TITULO\n2 - ATUALIZAR INFO DE UM TITULO\n3 - EXCLUIR UM TITULO\n4 - FINALIZAR OPERACAO\n");

        scanf("%d", &menu); 

        switch(menu){

            case 1:
                n += 1;

                vetor = (Filme**) realloc(vetor, n*(sizeof(int)));

                vetor[n-1] = criar_filme();

                break;
                
            case 2: 
                printf("1 - RENOMEAR TITULO\n2 - ATUALIZAR PRECO\n3 - ATUALIZAR GENERO\n");
                scanf("%d", &menu_atualizar);
                printf("Qual titulo deseja alterar as informacoes?\n");
                scanf("%d", &numero_filme);
                atualiza_filme(vetor[numero_filme-1], menu_atualizar);

            break;

            case 3:
                printf("Qual filme deseja excluir?\n");
                scanf("%d", &numero_filme);
                free_filme(vetor[numero_filme-1]);
                vetor[numero_filme-1] = NULL;
                n -= 1;
                organiza_vetor(vetor, numero_filme, n);
            break;

            case 4: break; 
            
        }
        print_tabela(vetor, n);
    }

}


