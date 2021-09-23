#include <stdio.h>
#include <stdlib.h>

float* transposta (int m, int n, float *mat)
{
    float *vet_trans;
    vet_trans = malloc(m * n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(transposta + (i * n) + j) = mat[(j*n) + i];
        }
    }
    return transposta;
}

int main()
{
    int linha, coluna;
    float *mat;
    scanf("%d %d", &linha, &coluna);
    mat = malloc(linha * coluna * sizeof(float));

    // leitura dos elementos da matriz

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%f", &mat[(i * coluna) + j]);
        }
    }

    printf("\n");

    float *mat_transposta = transposta(linha, coluna, mat);

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%.2f ", mat_transposta[(i * coluna) + j]);
        }
        printf("\n");
    }
}