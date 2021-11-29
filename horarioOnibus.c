#include <stdio.h>

int tempoTotal_002(int hInicial, int hInicialOnibus){ //Recebe em minutos o horário que chegou na parada e o horário que o ônibus na parada pela primeira vez
    
    while(hInicial > hInicialOnibus){ //Laço para descobrir, em minutos, qual horário o prox 002 irá passar
        hInicialOnibus += 30; // 30 Minutos é o tempo que cada 002 passa naquela parada
    }
    return hInicialOnibus + 45; // Retorna o que pegou o ônibus + o tempo de viagem
}

int tempoTotal_125(int hInicial, int hInicialOnibus){

    while(hInicial > hInicialOnibus){ //Laço para descobrir, em minutos, qual horário o prox 125 irá passar
        hInicialOnibus += 30; // 30 Minutos é o tempo que cada 125 passa naquela parada
    }
    return hInicialOnibus + 10; //Retorna o que pegou o ônibus + o tempo de viagem;
}

int tempoTotal_016(int hInicial, int hInicialOnibus){
    while(hInicial > hInicialOnibus){ //Laço para descobrir, em minutos, qual horário o prox 016 irá passar
        hInicialOnibus += 20; // 20 Minutos é o tempo que cada 016 passa naquela parada
    }
    return hInicialOnibus+30; //Retorna o que pegou o ônibus + o tempo de viagem;
}

int minutosTotais(int hora, int minuto){ //Recebe a hora e os minutos e os transforma somente em minutos
    return hora*60 + minuto;
}

void transformaHoras(int total, int *hora, int *minuto){ // Recebe o total em minutos e os tranforma novamente em horas e minutos
    *minuto = total % 60; 
    *hora = (total - (total % 60))/60;
}

int main(){
    int hora, minuto; // Variáveis que guardaram o horário que chegou na parada
    int *hora_002, *minuto_002, *hora_016, *minuto_016; //Ponteiros que indicarão a hora e minutos que os ônibus chegarão no destiram 

    printf("Digite a hora que chegou na parada: (Obs.: somente a hora)\n");
    scanf("%d", &hora);
    printf("Digite os minutos que chegou na parada:\n");
    scanf("%d", &minuto);

    int minutosSaida = minutosTotais(hora, minuto); // O horario, em minutos, que Lydhia chegou na parada

    int total_002 = tempoTotal_002(minutosSaida, minutosTotais(5,15)); // O horario total desde o momento que escolheu esperar o 002 até o trabalho
    int total_016 = tempoTotal_016(minutosSaida, minutosTotais(5,30)); // O horario total desde o momento que escolheu esperar o 016 até prox parada
    int total_125 = tempoTotal_125(total_016, minutosTotais(5,15)); // O horario total desde o momento que escolheu esperar o 125 até o trabalho

    transformaHoras(total_002, &hora_002, &minuto_002); // transformando o horario total em horas e minutos
    transformaHoras(total_125, &hora_016, &minuto_016); // transformando o horario total em horas e minutos
    printf("O horario que chegara ao trabalho, caso espere o 002, sera: %d:%d\n", hora_002, minuto_002);
    printf("O horario que chegara ao trabalho, caso espere o 016, sera: %d:%d\n", hora_016, minuto_016);
    
}