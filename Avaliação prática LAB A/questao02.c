#include <stdio.h>


int main(){
    int disciplinas, presenca, total_aulas = 0;
    double carga_horaria, notas, total_notas;

    scanf("%d", &disciplinas);

    for(int i = 0; i < disciplinas; i++){
        scanf("%lf", &carga_horaria);
        if(carga_horaria == 10){
            for(int i = 0; i < 5; i++){
                scanf("%d", &presenca);
                if(presenca == 1){
                    total_aulas += 2;
                }
            }
        
        }

        if(carga_horaria == 30){
            for(int i = 0; i < 15; i++){
                scanf("%d", &presenca);
                if(presenca == 1){
                    total_aulas += 2;
                }
            }
        
        }

        if(carga_horaria == 60){
            for(int i = 0; i < 30; i++){
                scanf("%d", &presenca);
                if(presenca == 1){
                    total_aulas += 2;
                }
            }
        
        }

        if(carga_horaria == 90){
            for(int i = 0; i < 45; i++){
                scanf("%d", &presenca);
                if(presenca == 1){
                    total_aulas += 2;
                }
            }
        
        }
        
        for(int i = 0; i < 3; i++){
            scanf("%lf", &notas);
            total_notas += notas;
        }

        if(total_aulas < carga_horaria*0.75){
            printf("Disciplina %d: RF\n", i+1);
        }

        else if(total_notas/3 < 5){
            printf("Disciplina %d: RN\n", i+1);
        }

        else{
            printf("Disciplina %d: AP\n", i+1);
        }

        presenca = 0;
        total_aulas = 0;
        total_notas = 0;
    
    }
}