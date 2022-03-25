#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generatorfrajdy(short [],int);
void funkcjaa(short [],int);
void funkcjab(short [],int);
void funkcjac(short [],int);
int main()
{
    int n=1001;
    const int N=1000;
    short tablica[N];
    printf("liczba elementow:\n");
    while((n>=N)||(n<0))
    {
        scanf("%d",&n);
    }
    generatorfrajdy(tablica,n);
    funkcjaa(tablica,n);
    return 0;
}
void generatorfrajdy(short tab[],int n)
{
    srand(time(0));
    for(int i=0;i<n;++i)
    {
        tab[i]=rand()%101;
        printf("%d ",tab[i]);
    }
}
void funkcjaa(short tab[],int n)
{
    printf("\npozmianie\n");
    for(int i=0;i<n;++i)
    {
        if(tab[i]%2!=0)
            tab[i]=3*tab[i]+1;
        else
        {
            int maks=0;
            for(int j=1;j<tab[i];j+=2)
            {
                if (tab[i]%j==0)
                    maks=j;
            }
            tab[i]=maks;
        }
        printf("%d ",tab[i]);
    }
}
void funkcjab(short tab[],int n)
{
    printf("\npozmianie\n");
    for(int i=0;i<n;++i)
    {
        if(tab[i]%2!=0)
            tab[i]=tab[i]*2;
        else
            tab[i]=tab[i]*(-1);
        printf("%d ",tab[i]);
    }
    printf("\npozmianie 2\n");
    for(int i=0;i<n;++i)
    {
        if(tab[i]>0)
            tab[i]=1;
        else
            tab[i]=-1;
        printf("%d ",tab[i]);
    }
}
void funkcjac(short tab[],int n)
{

}
