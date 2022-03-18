#include <stdio.h>
#include <stdlib.h>
int najdziel(int);
int main()
{
    int liczba;
    printf("Podaj liczbe a dam ci jej najwiekszy dzielnik niebedacy ta liczba\n");
    scanf("%d",&liczba);
    printf("\nnajwiekszy dzielnik %d to %d",liczba,najdziel(liczba/2));
    return 0;
}
    int najdziel(int n)
{
    int wynik;
    for(int i=1;i<=n;++i)
    {
        if(n%i==0)
            wynik=i;
    }
    return wynik;
}
