#include <stdio.h>
#include <stdlib.h>


void linha_um_dois(int linha, int coluna, int** matriz){
    int num = 1;
    int j = 0;
    if(linha == 0){
        for(int i = 0; i < coluna; i++){
            if(i % 2 == 0){
                matriz[0][i] = num;
                num++;
            }else{
                matriz[0][i] = 0;
                num++;
            }
        }
    }
    else if(linha == 1){
        for(int i = 0; i < coluna; i++){
            if(i % 2 != 0){
                matriz[1][i] = num;
                num++;
            }else{
                matriz[1][i] = 0;
                num++;
            }
        }
    }
}

void preenche(int intervalo1, int intervalo2, int** matriz, int cont, int coluna){
    int aux;

    if(intervalo1 > intervalo2){
        aux = intervalo1;
        intervalo1 = intervalo2;
        intervalo2 = aux;
    }

    for(int j = 0; j < coluna; j++){
        if(j >= intervalo1-1 && j <= intervalo2-1){
            matriz[cont][j] = matriz[cont-2][j] - matriz[cont-1][j];
        }else{
            matriz[cont][j] = matriz[cont - 2][j] + matriz[cont - 1][j];
        }
    }

/*     for(int i = 2; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(j >= intervalo1 && j <= intervalo2){
                matriz[i][j] = matriz[i-2][j] - matriz[i-1][j];
            }else{
                matriz[i][j] = matriz[i - 2][j] + matriz[i - 1][j];
            }
        }
    } */
}


int main(){
    int **matriz;
    int n, m, num1, num2, cont, negativos = 0, positivos = 0;
    scanf("%d%d", &n, &m);
    cont = 2;
    matriz = (int**) malloc(n * sizeof(int*));

    for(int i=0; i < n; i++){
        matriz[i] = malloc(m * sizeof(int)) ;
    }

    for(int i = 0; i < 2; i++){
            if(i < 2){
                linha_um_dois(i, m, matriz);
            }

    }

    do{
        scanf("%d%d", &num1, &num2);
        preenche(num1, num2, matriz, cont, m);
        cont++;

    }while(cont < n);

/*     while(scanf("%d%d", &num1, &num2) && cont < n){
        preenche(num1, num2, matriz, cont, m);
        cont++;
    } */

/*     for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 */

    for(int j = 0; j < m; j++){
        if(matriz[n-1][j] < 0){
            negativos++;
        }
        else if(matriz[n-1][j] > 0){
            positivos++;
        }
    }
/*     for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matriz[i][j] < 0){
                negativos++;
            }
            else if(matriz[i][j] > 0){
                positivos++;
            }
        }
    } */

    printf("%d %d",negativos, positivos);
}