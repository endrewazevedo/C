
//  Cabecalho.h

//Arquivo de cabeçalho.h para o módulo de funções Videoteca

//estrutura para info dos filmes
typedef struct info Info;

//estrutura para um Filme
typedef struct filme Filme;

//Função que cria e retorna um ponteiro simples para o tipo Filme
Filme* criar_filme();

//Função que reorganiza o vetor para impedir "buracos"
void organiza_vetor(Filme** f, int posicao, int tamanho);

//Função que verifica se o filme é/possui o gênero terror
int eh_terror(char *genero);

//Função que lê a faixa etaria e verifica se o gênero de terror corresponde com a faixa
int ler_faixaetaria(char *genero);

//Função que atualiza as informações de um filme
void atualiza_filme(Filme* f, int opcao);

// Função que imprime a tabela atualizada dos filmes cadastrados
// código -- preço R$ ## nome (gênero, faixa etária) ## diretor ano
void print_tabela(Filme** tabela, int tam);

//Função que exclui um filme e libera memória
void free_filme(Filme* f);

//função que imprime informações de um filme
void imprimir_filme(Filme* f);

//FUNÇÕES DE MANIPULAÇÃO
//função que acessa e modifica o nome de um filme
void set_nome(Filme* f, char* novo);

//função que acessa e modifica o preço de um filme
void set_preco(Filme* f, float novo);

//função que acessa e renomeia um diretor de um filme
void set_diretor(Filme* f, char* novo);

//função que acessa e renomeia os gêneros de um filme
void set_genero(Filme* f, char* novo);

//função que acessa e modifica o ano de um filme
void set_ano(Filme* f, int novo);

//função que acessa e modifica a faixa etária de um filme
void set_faixaetaria(Filme* f, int novo);
