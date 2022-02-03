#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
double a, b, rapporto,radice;
do{
    printf("Inserisci il valore di a");
    scanf("%lf", &a);

    printf("Inserisci il valore di b");
    scanf("%lf", &b);
if(a>b)
    rapporto=a/b;
else
    rapporto=b/a;
if(rapporto>0)
{
    radice=sqrt(rapporto);
    printf("La radice è %f\n", radice);
}
}
while(rapporto>0);

printf("Non é possibile fare la radice di un numero negativo\n");

return 0;
}