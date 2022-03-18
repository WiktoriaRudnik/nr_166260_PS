#include <stdio.h>
#include <stdlib.h>
int dwadontejpotengi(int);
int main()
{
    int n;
    printf("do ktorej 2 wariacie\n");
    scanf("%d",&n);
    printf("\n2 do n to %d",dwadontejpotengi(n));
    return 0;
}
int dwadontejpotengi(int n)
{
    int wynik=2;
    for(int i=1;i<n;++i)
    {
        wynik*=2;
    }
    return wynik;
}
