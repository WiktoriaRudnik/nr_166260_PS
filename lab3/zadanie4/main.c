#include <stdio.h>
#include <stdlib.h>
double lokata(int,double,double);
int main()
{
    int lata;
    double stopaproc,stanpoczatkowy;
    printf("podaj ilosc lat, stan konta oraz stope procentowa w ulamku\n");
    scanf("%d %lf %lf",&lata,&stopaproc,&stanpoczatkowy);
    printf("\nstan kata po %d latach wynosi %lf",lata,lokata(lata,stopaproc,stanpoczatkowy));
    return 0;
}
double lokata(int x,double proc,double saldo)
{
    for(int i=0;i<x;i++)
    {
        saldo=saldo+(saldo*proc);
    }
    return saldo;
}
