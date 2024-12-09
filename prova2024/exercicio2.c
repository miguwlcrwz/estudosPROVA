#include <stdio.h>

float encontraMenor(int empregados, float vSal[]){
    if (empregados <= 0){
        return -1; // retorna -1 se o número de empregados for inválido
    }

    float menor = vSal[0]; // assume inicialmente que o menor salário é o primeiro
    for(int i = 1; i < empregados; i++){
        if(vSal[i]<menor){
            menor = vSal[i]; // atualiza o menor se encontrar um salário mais baixo
        }
    }
    return menor; // retorna o menor salário encontrado
}

void encontraDifMenorRetornaSoma (float menor, int empregados, int vInsc[], float vSal[]){
    float soma = 0.0;
    for(int i = 0; i < empregados; i++){
        float dif = vSal[i] - menor;
        printf("\na diferença da incrição %d é de %.2f",vInsc[i], dif);
        soma+=dif;
    }
    printf("\na soma das diferenças é de:%.2f",soma);
}


int main(void){  
    int vInsc [6]={1010,1020,1030,1040,1050,1060};  
    float vSal [6]={1000.00,4020.00,900.00,10400.00,20000.00,1000.00};  

    float menor = encontraMenor(6, vSal);
    printf("menor salário: %.2f",menor);
    encontraDifMenorRetornaSoma(menor, 6, vInsc, vSal);

    return 0;  

} 
