#include <stdio.h>

int ler_horario(void){
	int h, m, s, segundos_convertidos;
	scanf("%d%d%d", &h, &m, &s);
	segundos_convertidos = (3600*h)+(60*m)+s;
	return segundos_convertidos;
}

int imprimir_horario(int segundos_total){
	int horas, segundos, minutos;
	horas = segundos_total/3600;
	minutos = (segundos_total % 3600)/60;
   segundos = segundos_total % 60;
	if(segundos > 59){
		segundos = segundos % 60;
		minutos++;
	}
	if(minutos > 59){
		minutos = minutos % 60;
		horas++;
	}
	if(horas > 23){
		horas = horas % 24;
	}
	return printf("%02d:%02d:%02d\n", horas, minutos, segundos);
}

int main(){
	int numero_testes, horario_inicial, horario_despertar;
	scanf("%d", &numero_testes);
	while(numero_testes > 0){
		horario_inicial = ler_horario();
		horario_despertar = ler_horario();
		int segundos_total = horario_inicial + horario_despertar;
		imprimir_horario(segundos_total);
        numero_testes--;
	}
}