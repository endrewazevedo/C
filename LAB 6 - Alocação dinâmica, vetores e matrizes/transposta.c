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
            *(vet_trans + (i * n) + j) = mat[(j*n) + i];
        }
    }
    return vet_trans;
}

int main()
{
    int linha, coluna;
    float *v;
    scanf("%d %d", &linha, &coluna);
    v = malloc(linha * coluna * sizeof(float));

    // leitura dos elementos da matriz

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%f", &v[(i * coluna) + j]);
        }
    }

    float *tr = transposta(linha, coluna, v);

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%.2f ", tr[(i * coluna) + j]);
        }
        printf("\n");
    }
	free(v);
	free(tr);
}