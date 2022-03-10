#include <stdio.h>
#include <stdlib.h>
int pierwsza_cyfra(int);
int ostatnia_cyfra(int);
int ile_cyfr(int);
int main()
{
    int liczba;
    printf("podaj liczbe\n");
    scanf("%d",&liczba);
    printf("pierwsza cyfra to %d\n",pierwsza_cyfra(liczba));
    printf("ostatnia cyfra to %d\n",ostatnia_cyfra(liczba));
    printf("liczba ma %d cyfr",ile_cyfr(liczba));
    return 0;
}
int pierwsza_cyfra(int x)
{
    int i=1;
    while(x>=i)
    {
        i=i*10;
    }
    i=i/10;
    return x/i;
}
int ostatnia_cyfra(int x)
{
    return x%10;
}
int ile_cyfr(int x)
{
    int i=1,ile=0;
    while(x>=i)
    {
        i=i*10;
        ile++;
    }
    return ile;
}
