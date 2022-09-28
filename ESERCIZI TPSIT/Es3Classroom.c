#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("1) Stampa degli elementi array\n");
    printf("2) Stampa inversa degli elementi dell’array\n");
    printf("3) Somma e media degli elementi del vettore\n");
    printf("4) Stampa tutti i numeri pari\n");
    printf("5) Stampa tutti i numeri dispari\n");
    printf("6) Ricerca di un numero nell’array (letto in input)\n");
    printf("7) Eliminare un elemento dell’array (se esistente)\n");
    printf("8) Alternare (o scambiare ) a due a due le posizioni del vettore\n");
    printf("9) Ordinamento del vettore (ordinamento a scelta)\n");
}

void inserisci(int *DIM, int array[])
{
    for (int i = 0; i < *DIM; i++)
        scanf("%d", array[i]);
}

void stampa(int array[], int *DIM)
{
    for (int i = 0; i < *DIM; i++)
        printf("%d", array[i]);
}

int main(int argc, char *argv[])
{
    int DIM = 0, scelta = 0;
    int array[DIM];
    printf("Quanti numeri vuoi inserire nell'array?");
    scanf("%d", &DIM);
    printf("Inserisci i numeri: \n");
    inserisci(&DIM, array);
    menu();
    scanf("%d", &scelta);

    switch (scelta)
    {
    case 1:
        stampa(array, &DIM);
        break;
   // case 2:
    }
    return 0;
}