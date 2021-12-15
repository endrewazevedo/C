#include<stdio.h>

unsigned char meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

typedef struct 
{
    unsigned short int dia, mes, ano; 
} tipoData;

tipoData lerData(){
    tipoData data;
    scanf("%hu %hu %hu", &data.dia, &data.mes, &data.ano);
    return data;
}

int validaData(tipoData dt){
    if(dt.ano % 4 == 0 && (dt.ano % 400 == 0 || dt.ano % 100 != 0)){
        if(dt.dia < 1 || dt.dia > meses[dt.mes -1]+1){
            return 0;
        }
    }
    else if(dt.dia < 1 || dt.dia > meses[dt.mes -1]){
        return 0;
    }
    if(dt.ano < 1900 || dt.ano > 2050){
        return 0;
    }

    if(dt.mes < 1 || dt.mes > 12){
        return 0;
    }
    return 1;
    
}

void main() 
{
    tipoData dt;
    dt = lerData();

    printf("%d",validaData(dt));
}
