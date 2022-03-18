#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int contatore = 0;
    int media = 0;
    int numeri[contatore];
    do{
        printf("Inserisci una sequenza di numeri che finisce con lo 0: ");
        scanf("%d",&n);

        if(n!=0){
            numeri[contatore]=n;
            contatore++;
        }

    }while(n!=0);

    for(int i=0;i<contatore;i++)
    {
        media=media+numeri[i];
    }

    media=media/contatore;

    printf("La media dei numeri è %d\n", media);
    for(int i=0;i<contatore;i++)
    {
        if(numeri[i]>media)
            printf("%d\n",numeri[i]);
    }
    return 0;

}