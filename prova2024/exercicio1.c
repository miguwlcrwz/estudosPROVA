#include <stdio.h>

void diaAnterior(int *dia, int *mes, int *ano){
    if (*mes == 1 && *dia == 1){
        *dia = 31;
        *mes = 12;
        *ano = *ano - 1;
    }
    else if (*mes == 3 && *dia == 1){
        *dia = 28;
        (*mes)--;
    }
    else if ((*mes == 5 || *mes == 7 || *mes == 12) && *dia == 1){
        *dia = 30;
        (*mes)--;
    }
    else { 
        (*dia) --;
    }
}

int main (void){
    int dia, mes, ano, prioridade, altera, normal;
    float percentual;
    while (1){ 
        printf("qual a prioridade do projeto? NORMAL = 1 || ALTA = 2 (digite -1 para encerrar): ");
        scanf("%d",&prioridade);
        if(prioridade < 0){
            break;
        }
        if(prioridade == 1){
            normal++;
        }
        else {altera ++;
        }
        percentual = (altera/(normal + altera)) * 100;
        printf("\ndigite a data (DD/MM/AAAA): ");
        scanf("%d/%d/%d",&dia,&mes,&ano);
        if (prioridade == 2){
            diaAnterior(&dia, &mes, &ano); 
        }
        printf("\n%d/%d/%d", dia, mes,ano);
        printf("\n");
        }
    printf("percentual alterado: %.2f%%",percentual);
    return 0;
}