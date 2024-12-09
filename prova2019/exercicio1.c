#include <stdio.h>

void orgLargada (int idade, float peso, int *nSeq, int *hora, int *fileira ){
    if (idade < 18){
        *hora = 8;
        *fileira = *nSeq;
        (*nSeq)++;
    }
    else if(idade <=65){
        if (peso <=100.0){
            *hora = 9;
            *fileira = idade/10;
        }
        else { *hora = 10; *fileira= idade %10;}
    }
    else{*hora = 11; *fileira = (idade %10)%10;}
        
    }

int main (void){
    int nSeq = 1, idade, hora, fileira;
    float peso;
    while (1){
        printf("digite sua idade: ");
        scanf("%d",&idade);
        if (idade <=0){
            break;
        }
        printf("digite seu peso: ");
        scanf("%f",&peso);

        orgLargada(idade,peso,&nSeq,&hora,&fileira);
        printf ("\nvocé irá largar as %d horas ", hora);
        printf("\nsua fileira é a: %d \n", fileira);
        printf("\n");
    }
    return 0;
}