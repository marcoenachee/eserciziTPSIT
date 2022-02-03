#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, cntN, valore;
    double media=0;
    do{
        printf("Inserisci il valore di a")
        scanf("%d", &a);
    
        printf("Inserisci il valore di b");
        scanf("%d", &b);

    }while(a<B)

    do
    {
        printf("Inserisci dei valori, scrivi un valore maggiore di a o minore di b per uscire dal programma");
        scanf("%d",&valore):

        media=media+valore;
        cntN++;
    }while(valore<b&&valore>a);

    media=media/cntN;

    printf("%d",&media);
}