#include <stdio.h>
#include <stdlib.h>
int ndom(int,int);
int main()
{
    int n,m;
    printf("podaj n i m a dam ci n do m\n");
    scanf("%d %d",&n,&m);
    if((n!=0)||(m!=0))
    {
        printf("%d",ndom(n,m));
    }
    return 0;
}
int ndom(int n,int m)
{
    int wynik=n;
    for(int i=1;i<m;++i)
    {
        wynik*=n;
    }
    return wynik;
}
