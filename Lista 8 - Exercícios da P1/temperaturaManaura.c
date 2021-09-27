#include <stdio.h>
int main()
{
    int minimo_confortavel, maxima_confortavel, mais_frio, mais_quente, temperatura;
    int dia = 1;
    scanf("%d%d%d%d", &mais_frio, &minimo_confortavel, &maxima_confortavel, &mais_quente);
    while (scanf("%d", &temperatura) && temperatura != 0)
    {
        if (temperatura >= minimo_confortavel && temperatura <= maxima_confortavel)
        {
            printf("Dia %d: estava bom (%d graus)\n", dia, temperatura);
            dia++;
        }
        else if (temperatura < mais_frio)
        {
            printf("Dia %d: o dia mais frio! (%d graus)\n", dia, temperatura);
            dia++;
        }
        else if (temperatura < minimo_confortavel)
        {
            printf("Dia %d: fez frio (%d graus)\n", dia, temperatura);
            dia++;
            mais_frio = temperatura;
        }
        else if (temperatura > mais_quente)
        {
            printf("Dia %d: o dia mais quente! (%d graus)\n", dia, temperatura);
            dia++;
            mais_quente = temperatura;
        }
        else if (temperatura > maxima_confortavel)
        {
            printf("Dia %d: fez calor (%d graus)\n", dia, temperatura);
            dia++;
        }
    }
}