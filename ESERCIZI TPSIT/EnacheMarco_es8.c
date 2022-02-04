#include <stdio.h>
#include <math.h>

int main()
{
  
/*Progettare un algoritmo che risolve il seguente problema. Si desidera 
calcolare la somma delle radici quadrate di N valori numerici inseriti 
dall’utente. 
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali).*/


int a;
double somma=0;

while (a>0)
{
    printf("Inserisci un valore maggiore di 0 o inserisci 0 se vuoi terminare la sequenza:\n");
scanf("%d", &a);
if (a>0)
{
somma=somma+sqrt(a);
}
else
{
    printf("Hai terminato la sequenza.\n\n");
}
}
printf("La somma è: %f\n", somma);

return 0;
}
