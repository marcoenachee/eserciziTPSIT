#include <studio.h>
int main(int argc, char* argv[])
{
	int a, b, somma, prodotto;
	printf("Benvenuto nel programma, dovrai inserire due numeri che attribuiranno valore ad a e b, poi verrà calcolato il prodotto");
	do {
		printf("Inserisci un numero o metti 0 per uscire");
		scanf("%d", &a);

		printf("Inserisci un numero o metti 0 per uscire");
		scanf("%d", &b);

		prodotto = a * b;

		printf("Il prodotto è %d\n", prodotto);

		somma = somma + prodotto;
	} while (a != 0 && b != 0);

	printf("La somma dei prodotti è %d\n", somma);
	return 0;
}