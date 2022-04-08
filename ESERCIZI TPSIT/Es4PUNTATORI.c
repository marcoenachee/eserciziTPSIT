#include <stdio.h>
#include <limits.h>


void InserisciNum(int numeri[], int DIM,int *i, int *contatore)
{
    int numero;

    printf("Inserisci una serie di numeri che finisce con il valore -1\n");
    do{
        scanf("%d", &numero)
        if(numero!=-1){
            numeri[i]=numero;
            (*contatore)++;
            (*i)++;
        }
    }while (numero!=-1 && numero<DIM);
}

void MostraNumeri(int numeri[], int *i)
{
    printf("I numeri inseriti sono: \n");
        for(int k=0;k<numeri[*i];k++){
            printf("%d", numeri[k]);
        }

}

void ModificaNum(int numeri[])
{
    
}

int main(int argc, char *argv[])             //fatto in classe e visual studio non mostra gli errori
{
    int i=0, contatore=0; DIM=SHRT_MAX;
    int numeri[];

    InserisciNum(numeri[], DIM, &i, &contatore);

    
}