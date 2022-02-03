#include <stdio.h>

int main(int argc, char *argv[])
{
int a, b, som;
do{
    printf("Inserisci il valore di a, che sia maggiore di 0");
    scanf("%d", &a);
}while(a<0);

do{
    printf("Inserisci il valore di b, che sia maggiore di 0");
    scanf("%d", &b);

}while(b<0);

som=a+b;
printf("La somma è %d\n", som);

return 0;
}