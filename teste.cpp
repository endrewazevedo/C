#include <stdio.h>
#include <stdlib.h>

// verifica se um numero é primo
int primo(int entrada){
  
  if(entrada <= 1) return 0;

  for(int i = 2; i <= entrada/2; i++){
    
    if(entrada % i == 0) return 0;
    
  }
  
  return 1;
  
}

// faz a decomposição do numero em fatores primos
void decompor(int n){

  // caso especial pra quando n == 1
  if(n == 1){
    printf("%d ", n);
    return;
  }

  // decrementador de fatoração
  int decomp = n;

  int i = 2;
  while(i <= n){

    if(primo(i)){

      // se o numero atual da fatoração for divisivel pelo i em questão, printa e divide o numero
      if(decomp % i == 0){
        printf("%d ", i);
        decomp /= i; 
      }
      // caso contrario, incrementa esse valor e repete a verificaçao
      else i++;

    }
    // se nao for primo, pula pro proximo (a decomposição só é feita em valores primos)
    else i++;

  }
}

int main(){
  
  int numero;
    while(scanf("%d", &numero) && numero){
      if(numero != 0){
        printf("%d: ", numero);
        decompor(numero);
        printf("\n");
    }
    }
}