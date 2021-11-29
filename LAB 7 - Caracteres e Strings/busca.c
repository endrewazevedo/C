#include <string.h>
#include <stdio.h>

int busca(char *palavra, char *frase){
	
    int cont_sub = 0;

    for(int i = 0; i < strlen(frase); i++){
        if(palavra[cont_sub] == frase[i]){
            cont_sub++;
            if(cont_sub == strlen(palavra)){
                return 1;
            }
        }else{
            cont_sub = 0;
        }
    }
    return 0;
}

// ABAIXO CODIGO USADO PARA TESTE DA FUNCAO. NÃO MOFIQUE!

int main() {
  char texto[2000]; // texto onde vamos buscar a string de consulta
  char padrao[100]; // string de consulta
   unsigned tamVetor;

   unsigned x;

   scanf("%[^#]%*c",texto);
   scanf("%[^#]%*c",padrao);

   if(busca(texto,padrao)) {
     printf("VERDADEIRO\n");
   }
   else {
     printf("FALSO\n");
   }
   
}
