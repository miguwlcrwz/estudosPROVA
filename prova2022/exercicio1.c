#include <stdio.h>

void descobre_xy (int ano, int *x, int *y){
    if(ano >= 1999 && ano <= 2099){
        *x = 24;
        *y = 5;
    }
    else if(ano >= 2100 && ano <= 2199){
        *x = 24;
        *y = 6;
    }
    else {
        *x = 25;
        *y = 7;
    }
}

void descobreDataPascoa (int *dia, int *mes, int ano){
    int x,y;
    descobre_xy(ano,&x,&y);

    int A = ano % 19;                          	
    int B = ano % 4;             	
    int C = ano % 7;
    int D = (19 * A + x) % 30;
    int E = (2 * B + 4 * C + 6 * D + y) % 7;

    if( (D + E) > 9){
        *dia = (D + E - 9);
        *mes = 4;

    }
    else {
        *dia = (D + E + 22);
        *mes = 3;
    }

    if (*dia == 26 && *mes == 4){
        *dia = 19;
    }
    else if(D == 25 && *dia == 24 && *mes == 4 && A > 10){
        *dia = 18;
    }
}
int main(){
    int ano = 2024;
    int dia=0, mes=0;
    descobreDataPascoa(&dia,&mes,ano);
    printf("data da páscoa: %d/%d/%d", dia, mes,ano);
}